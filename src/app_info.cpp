#include "xlz/app_info.hpp"

#include "xlz/constants.hpp"
#include "xlz/metadata.hpp"

#include <algorithm>

namespace xlz {

AppInfo::AppInfo() {
    addresses_.resize(kAddressCount, 0);
    args_ = {
        "author", "appv", "describe",
        "getticketaddres", "getvefcodeaddres",
        "useproaddres", "banproaddres", "unitproaddres", "setproaddres",
        "friendmsaddres", "groupmsaddres", "ChannelFunc", "eventmsaddres", "PmDealFunc"
    };
    infos_.resize(kInfoCount);
}

void AppInfo::ProcessAppName(std::string& appName) {
    const std::string forbiddenChars = "/\\:*?\"<>|'\r\n";
    for (const char c : forbiddenChars) {
        appName.erase(std::remove(appName.begin(), appName.end(), c), appName.end());
    }
}

std::string AppInfo::EscapeString(const std::string& input) {
    std::string output;
    output.reserve(input.size());
    for (const char c : input) {
        switch (c) {
            case '\\': output += "\\\\"; break;
            case '"': output += "\\\""; break;
            case '\r': output += "\\r"; break;
            case '\n': output += "\\n"; break;
            default: output += c; break;
        }
    }
    return output;
}

void AppInfo::SetAppName(const std::string& appName) {
    app_name_ = appName;
    ProcessAppName(app_name_);
}

void AppInfo::AddPermissionRequest(const std::int32_t permission, const std::string& reason) {
    const char* apiName = GetApiNameByPermission(permission);
    if (apiName == nullptr || apiName[0] == '\0') return;
    AddPermissionRequest(std::string(apiName), reason);
}

void AppInfo::AddPermissionRequest(const std::string& apiName, const std::string& reason) {
    if (apiName.empty() || reason.empty()) return;
    // 小栗子/小白兔对 needapilist 的格式校验较严格。
    // 这里保持与已验证可加载的 C++ 插件一致：每个权限只写 desc 字段。
    permissions_ << "\"" << EscapeString(apiName) << "\":{"
                 << "\"desc\":\"" << EscapeString(reason) << "\"},";
}

void AppInfo::AddMultiplePermissions(const std::vector<std::int32_t>& permissions, const std::string& reason) {
    for (const std::int32_t permission : permissions) {
        AddPermissionRequest(permission, reason);
    }
}

void AppInfo::AddAllPermissions(const std::string& reason) {
    for (std::size_t i = 0; i < kApiSpecCount; ++i) {
        AddPermissionRequest(kApiSpecs[i].name, reason);
    }
}

const char* AppInfo::GetData() const {
    static thread_local std::string result;
    std::ostringstream s;
    s << "{";
    s << "\"sdkv\":\"" << SDK_VERSION << "\",";
    s << "\"appname\":\"" << EscapeString(app_name_) << "\",";
    for (std::size_t i = 0; i < infos_.size(); ++i) {
        s << "\"" << args_[i] << "\":\"" << infos_[i] << "\",";
    }
    for (std::size_t i = infos_.size(); i < args_.size(); ++i) {
        s << "\"" << args_[i] << "\":" << addresses_[i - infos_.size()] << ",";
    }
    std::string apps = permissions_.str();
    if (!apps.empty() && apps.back() == ',') apps.pop_back();
    s << "\"data\":{\"needapilist\":{" << apps << "}}}";
    result = s.str();
    return result.c_str();
}

} // namespace xlz
