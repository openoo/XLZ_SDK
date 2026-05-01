#include "xlz/xlz.hpp"

#include <nlohmann/json.hpp>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <chrono>
#include <cstdint>
#include <ctime>
#include <exception>
#include <mutex>
#include <sstream>
#include <string>
#include <vector>

namespace {

constexpr int kIdStatus = 1001;
constexpr int kIdLogEdit = 1002;
constexpr int kIdRefresh = 1003;
constexpr int kIdTestLog = 1004;
constexpr int kIdClearLog = 1005;

xlz::Api g_api;
std::string g_plugin_data_dir;
HMODULE g_module = nullptr;
HWND g_window = nullptr;
HWND g_log_edit = nullptr;
HWND g_status = nullptr;
HANDLE g_ui_thread = nullptr;
DWORD g_ui_thread_id = 0;
std::mutex g_log_mutex;
std::vector<std::wstring> g_pending_logs;

HMENU ControlId(const int id) {
    return reinterpret_cast<HMENU>(static_cast<INT_PTR>(id));
}

std::wstring Utf8ToWide(const std::string& text) {
    if (text.empty()) return L"";
    const int len = MultiByteToWideChar(CP_UTF8, 0, text.c_str(), -1, nullptr, 0);
    if (len <= 0) return L"";
    std::wstring result(static_cast<std::size_t>(len - 1), L'\0');
    MultiByteToWideChar(CP_UTF8, 0, text.c_str(), -1, result.data(), len);
    return result;
}

std::string NowText() {
    const auto now = std::chrono::system_clock::now();
    const std::time_t time = std::chrono::system_clock::to_time_t(now);
    std::tm tm{};
    localtime_s(&tm, &time);
    char buffer[32]{};
    std::strftime(buffer, sizeof(buffer), "%H:%M:%S", &tm);
    return buffer;
}

void AppendLogToEdit(const std::wstring& line) {
    if (g_log_edit == nullptr) return;
    const int length = GetWindowTextLengthW(g_log_edit);
    SendMessageW(g_log_edit, EM_SETSEL, length, length);
    SendMessageW(g_log_edit, EM_REPLACESEL, FALSE, reinterpret_cast<LPARAM>(line.c_str()));
    SendMessageW(g_log_edit, EM_REPLACESEL, FALSE, reinterpret_cast<LPARAM>(L"\r\n"));
}

void AddLog(const std::string& text) {
    std::wstringstream line;
    line << L"[" << Utf8ToWide(NowText()) << L"] " << Utf8ToWide(text);
    const std::wstring wide_line = line.str();

    std::lock_guard<std::mutex> lock(g_log_mutex);
    if (g_log_edit != nullptr) {
        AppendLogToEdit(wide_line);
    } else {
        g_pending_logs.push_back(wide_line);
    }
}

std::string SafeText(const char* value) {
    return value == nullptr ? std::string{} : std::string(value);
}

void ShowError(const char* title, const std::exception& e) {
    AddLog(std::string(title) + ": " + e.what());
    MessageBoxW(g_window, Utf8ToWide(e.what()).c_str(), Utf8ToWide(title).c_str(), MB_OK | MB_ICONERROR);
}

void RefreshStatus() {
    std::ostringstream text;
    text << "API: " << (g_api.initialized() ? "已初始化" : "未初始化")
         << " | SDK元数据API: " << xlz::kApiSpecCount
         << " | 数据目录: " << (g_plugin_data_dir.empty() ? "(未知)" : g_plugin_data_dir);

    if (g_api.initialized()) {
        try {
            text << " | 框架QQ: " << SafeText(g_api.GetFrameworkQQ());
        } catch (const std::exception& e) {
            text << " | 框架QQ获取失败: " << e.what();
        }
    }

    const std::string utf8 = text.str();
    if (g_status != nullptr) SetWindowTextW(g_status, Utf8ToWide(utf8).c_str());
    AddLog("刷新状态: " + utf8);
}

void SendTestLog() {
    AddLog("准备调用小白兔 输出日志 API");
    try {
        const std::string gbk = xlz::utf82gbk("XLZ SDK UI 测试日志");
        const char* result = g_api.OutLog(gbk.c_str());
        AddLog("输出日志 API 返回: " + SafeText(result));
    } catch (const std::exception& e) {
        ShowError("输出日志 API 调用失败", e);
    }
}

void LayoutControls(HWND hwnd) {
    RECT rect{};
    GetClientRect(hwnd, &rect);
    const int width = rect.right - rect.left;
    const int height = rect.bottom - rect.top;
    const int margin = 10;
    const int button_w = 110;
    const int button_h = 30;
    const int status_h = 26;

    MoveWindow(g_status, margin, margin, width - margin * 2, status_h, TRUE);
    MoveWindow(g_log_edit, margin, margin + status_h + 8, width - margin * 2, height - status_h - button_h - margin * 3 - 8, TRUE);
    const int y = height - margin - button_h;
    MoveWindow(GetDlgItem(hwnd, kIdRefresh), margin, y, button_w, button_h, TRUE);
    MoveWindow(GetDlgItem(hwnd, kIdTestLog), margin + button_w + 8, y, button_w, button_h, TRUE);
    MoveWindow(GetDlgItem(hwnd, kIdClearLog), margin + (button_w + 8) * 2, y, button_w, button_h, TRUE);
}

LRESULT CALLBACK DebugWndProc(HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam) {
    switch (msg) {
        case WM_CREATE: {
            g_status = CreateWindowExW(0, L"STATIC", L"正在读取状态...", WS_CHILD | WS_VISIBLE | SS_LEFT,
                                      0, 0, 0, 0, hwnd, ControlId(kIdStatus), g_module, nullptr);
            g_log_edit = CreateWindowExW(WS_EX_CLIENTEDGE, L"EDIT", L"",
                                         WS_CHILD | WS_VISIBLE | WS_VSCROLL | ES_LEFT | ES_MULTILINE | ES_AUTOVSCROLL | ES_READONLY,
                                         0, 0, 0, 0, hwnd, ControlId(kIdLogEdit), g_module, nullptr);
            CreateWindowExW(0, L"BUTTON", L"刷新状态", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                            0, 0, 0, 0, hwnd, ControlId(kIdRefresh), g_module, nullptr);
            CreateWindowExW(0, L"BUTTON", L"测试日志", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                            0, 0, 0, 0, hwnd, ControlId(kIdTestLog), g_module, nullptr);
            CreateWindowExW(0, L"BUTTON", L"清空日志", WS_CHILD | WS_VISIBLE | BS_PUSHBUTTON,
                            0, 0, 0, 0, hwnd, ControlId(kIdClearLog), g_module, nullptr);
            {
                std::lock_guard<std::mutex> lock(g_log_mutex);
                for (const auto& line : g_pending_logs) AppendLogToEdit(line);
                g_pending_logs.clear();
            }
            LayoutControls(hwnd);
            RefreshStatus();
            return 0;
        }
        case WM_SIZE:
            LayoutControls(hwnd);
            return 0;
        case WM_COMMAND:
            switch (LOWORD(wparam)) {
                case kIdRefresh:
                    RefreshStatus();
                    return 0;
                case kIdTestLog:
                    SendTestLog();
                    return 0;
                case kIdClearLog:
                    SetWindowTextW(g_log_edit, L"");
                    return 0;
                default:
                    break;
            }
            break;
        case WM_CLOSE:
            ShowWindow(hwnd, SW_HIDE);
            return 0;
        case WM_DESTROY:
            g_window = nullptr;
            g_log_edit = nullptr;
            g_status = nullptr;
            return 0;
        default:
            break;
    }
    return DefWindowProcW(hwnd, msg, wparam, lparam);
}

DWORD WINAPI UiThreadProc(void*) {
    WNDCLASSEXW wc{};
    wc.cbSize = sizeof(wc);
    wc.lpfnWndProc = DebugWndProc;
    wc.hInstance = g_module;
    wc.hCursor = LoadCursor(nullptr, IDC_ARROW);
    wc.hbrBackground = reinterpret_cast<HBRUSH>(COLOR_WINDOW + 1);
    wc.lpszClassName = L"XLZ_SDK_Debug_Window";
    RegisterClassExW(&wc);

    g_window = CreateWindowExW(0, wc.lpszClassName, L"XLZ SDK 调试面板",
                               WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
                               760, 520, nullptr, nullptr, g_module, nullptr);
    ShowWindow(g_window, SW_SHOW);
    UpdateWindow(g_window);

    MSG msg{};
    while (GetMessageW(&msg, nullptr, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageW(&msg);
    }
    return 0;
}

void ShowDebugWindow() {
    if (g_window != nullptr) {
        ShowWindow(g_window, SW_SHOW);
        SetForegroundWindow(g_window);
        RefreshStatus();
        return;
    }
    if (g_ui_thread == nullptr) {
        g_ui_thread = CreateThread(nullptr, 0, UiThreadProc, nullptr, 0, &g_ui_thread_id);
    }
}

} // namespace

BOOL APIENTRY DllMain(HMODULE module, DWORD reason, LPVOID) {
    if (reason == DLL_PROCESS_ATTACH) {
        g_module = module;
        DisableThreadLibraryCalls(module);
    }
    return TRUE;
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppStart();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppEnd();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppUnload();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL ControlPanel();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnPrivate(std::int32_t data_ptr);
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnGroup(std::int32_t data_ptr);

XLZ_PLUGIN_EXPORT const char* XLZ_PLUGIN_CALL appload(const char* apidata, const char* pluginkey) {
    try {
        g_api.init(nlohmann::json::parse(xlz::gbk2utf8(apidata == nullptr ? "{}" : apidata)), pluginkey == nullptr ? "" : pluginkey);
        AddLog("appload 初始化完成");
    } catch (const std::exception& e) {
        ShowError("解析小栗子 API 数据失败", e);
    }

    xlz::AppInfo info;
    info.SetAppName("XLZ SDK Demo");
    info.SetAuthor("openoo");
    info.SetVersion("1.0.0");
    info.SetDescription("XLZ C++ SDK demo plugin");
    info.SetEnableHandler(&AppStart);
    info.SetDisableHandler(&AppEnd);
    info.SetUninstallHandler(&AppUnload);
    info.SetSettingsHandler(&ControlPanel);
    info.SetPrivateMsgHandler(&OnPrivate);
    info.SetGroupMsgHandler(&OnGroup);
    info.AddAllPermissions("XLZ SDK demo plugin permission");
    return info.GetData();
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppStart() {
    try {
        g_plugin_data_dir = g_api.GetPluginDataDir();
        const std::string gbk = xlz::utf82gbk("XLZ C++ SDK 示例插件已启用");
        g_api.OutLog(gbk.c_str());
        AddLog("插件已启用，数据目录: " + g_plugin_data_dir);
    } catch (const std::exception& e) {
        ShowError("插件启用失败", e);
    }
    return xlz::ENABLE_RESPONSE_SUCCESS;
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppEnd() {
    AddLog("插件已禁用");
    return 0;
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppUnload() {
    AddLog("插件已卸载");
    return 0;
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL ControlPanel() {
    AddLog("打开调试面板");
    ShowDebugWindow();
    return 0;
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnPrivate(std::int32_t data_ptr) {
    xlz::PrivateMessageData data{};
    xlz::MessageTools::ReadPrivateMessage(data_ptr, data);
    AddLog("收到私聊消息: sender=" + std::to_string(data.senderQQ) + " content=" + xlz::gbk2utf8(SafeText(data.content)));
    if (data.content != nullptr && xlz::str_equal(xlz::gbk2utf8(data.content).c_str(), "C++ Test")) {
        const std::string reply = xlz::utf82gbk("XLZ C++ SDK 正常运行");
        g_api.SendPrivateMessage(data.frameworkQQ, data.senderQQ, reply.c_str());
        AddLog("已回复私聊测试消息");
        return xlz::MSG_INTERCEPT;
    }
    return xlz::MSG_CONTINUE;
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnGroup(std::int32_t data_ptr) {
    xlz::GroupMessageData data{};
    xlz::MessageTools::ReadGroupMessage(data_ptr, data);
    AddLog("收到群消息: group=" + std::to_string(data.groupNumber) + " sender=" + std::to_string(data.senderQQ) + " content=" + xlz::gbk2utf8(SafeText(data.content)));
    if (data.content != nullptr && xlz::str_equal(xlz::gbk2utf8(data.content).c_str(), "C++ Test")) {
        const std::string reply = xlz::utf82gbk("XLZ C++ SDK 正常运行");
        g_api.SendGroupMessage(data.frameworkQQ, data.groupNumber, reply.c_str());
        AddLog("已回复群聊测试消息");
        return xlz::MSG_INTERCEPT;
    }
    return xlz::MSG_CONTINUE;
}
