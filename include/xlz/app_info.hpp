#pragma once
#include <cstdint>
#include <sstream>
#include <string>
#include <vector>
namespace xlz {
// 插件信息构建器：生成小栗子 appload/apprun 入口返回的 JSON。
class AppInfo {
    static constexpr int kAddressCount = 11;
    static constexpr int kInfoCount = 3;
    std::vector<std::uintptr_t> addresses_;
    std::vector<std::string> args_;
    std::vector<std::string> infos_;
    std::string app_name_;
    std::ostringstream permissions_;
    template <typename T> void SetHandler(const int index, T function) { addresses_[index] = reinterpret_cast<std::uintptr_t>(function); }
    static std::string EscapeString(const std::string& input);
    static void ProcessAppName(std::string& appName);
public:
    AppInfo();
    void SetAppName(const std::string& appName);
    void SetAuthor(const std::string& author) { infos_[0] = EscapeString(author); }
    void SetVersion(const std::string& version) { infos_[1] = EscapeString(version); }
    void SetDescription(const std::string& desc) { infos_[2] = EscapeString(desc); }
    void AddPermissionRequest(std::int32_t permission, const std::string& reason);
    void AddPermissionRequest(const std::string& apiName, const std::string& reason);
    void AddMultiplePermissions(const std::vector<std::int32_t>& permissions, const std::string& reason);
    void AddAllPermissions(const std::string& reason);
    const char* GetData() const;
    template <typename T> void SetTicketHandler(T function) { SetHandler(0, function); }
    template <typename T> void SetSMSHandler(T function) { SetHandler(1, function); }
    template <typename T> void SetEnableHandler(T function) { SetHandler(2, function); }
    template <typename T> void SetDisableHandler(T function) { SetHandler(3, function); }
    template <typename T> void SetUninstallHandler(T function) { SetHandler(4, function); }
    template <typename T> void SetSettingsHandler(T function) { SetHandler(5, function); }
    template <typename T> void SetPrivateMsgHandler(T function) { SetHandler(6, function); }
    template <typename T> void SetGroupMsgHandler(T function) { SetHandler(7, function); }
    template <typename T> void SetChannelHandler(T function) { SetHandler(8, function); }
    template <typename T> void SetEventHandler(T function) { SetHandler(9, function); }
    template <typename T> void SetOutputFilter(T function) { SetHandler(10, function); }
};
using ApplicationInfo = AppInfo;
} // namespace xlz
