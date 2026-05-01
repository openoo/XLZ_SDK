#include "xlz/xlz.hpp"
#include <nlohmann/json.hpp>
#include <exception>
#include <string>
#include <windows.h>

namespace {
xlz::Api g_api;
std::string g_plugin_data_dir;
void ShowError(const char* title, const std::exception& e) { MessageBoxA(nullptr, e.what(), title, MB_OK | MB_ICONERROR); }
}

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppStart();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppEnd();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppUnload();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL ControlPanel();
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnPrivate(std::int32_t data_ptr);
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnGroup(std::int32_t data_ptr);

XLZ_PLUGIN_EXPORT const char* XLZ_PLUGIN_CALL appload(const char* apidata, const char* pluginkey) {
    try { g_api.init(nlohmann::json::parse(xlz::gbk2utf8(apidata == nullptr ? "{}" : apidata)), pluginkey == nullptr ? "" : pluginkey); }
    catch (const std::exception& e) { ShowError("解析小栗子 API 数据失败", e); }

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

XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppStart() { try { g_plugin_data_dir = g_api.GetPluginDataDir(); g_api.OutLog("XLZ C++ SDK 示例插件已启用"); } catch (const std::exception& e) { ShowError("插件启用失败", e); } return xlz::ENABLE_RESPONSE_SUCCESS; }
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppEnd() { return 0; }
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL AppUnload() { return 0; }
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL ControlPanel() { MessageBoxA(nullptr, g_plugin_data_dir.c_str(), "插件数据目录", MB_OK); return 0; }
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnPrivate(std::int32_t data_ptr) { xlz::PrivateMessageData data{}; xlz::MessageTools::ReadPrivateMessage(data_ptr, data); if (data.content != nullptr && xlz::str_equal(data.content, "C++ Test")) { g_api.SendPrivateMessage(data.frameworkQQ, data.senderQQ, "XLZ C++ SDK 正常运行"); return xlz::MSG_INTERCEPT; } return xlz::MSG_CONTINUE; }
XLZ_PLUGIN_EXPORT std::int32_t XLZ_PLUGIN_CALL OnGroup(std::int32_t data_ptr) { xlz::GroupMessageData data{}; xlz::MessageTools::ReadGroupMessage(data_ptr, data); if (data.content != nullptr && xlz::str_equal(data.content, "C++ Test")) { g_api.SendGroupMessage(data.frameworkQQ, data.groupNumber, "XLZ C++ SDK 正常运行"); return xlz::MSG_INTERCEPT; } return xlz::MSG_CONTINUE; }
