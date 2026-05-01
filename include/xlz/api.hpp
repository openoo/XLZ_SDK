#pragma once
#include <cstdint>
#include <optional>
#include <stdexcept>
#include <string>
#include <utility>
#include "xlz/data_types.hpp"
#include "xlz/e_types.hpp"
#include "xlz/metadata.hpp"
#include <nlohmann/json.hpp>
namespace xlz {
// 小栗子 API 调用器：保存框架传入的 API 指针 JSON 和 pluginkey。
// 强类型包装覆盖高频 API；所有 API 均可通过 CallRaw/CallText 按中文 API 名称调用。
class Api {
    std::string pluginkey_;
    nlohmann::json api_data_;
    [[nodiscard]] std::uintptr_t GetFunctionAddress(const std::string& functionName) const;
public:
    Api() = default;
    Api(const nlohmann::json& apiData, std::string pluginKey) { init(apiData, std::move(pluginKey)); }
    void init(const nlohmann::json& apiData, std::string pluginKey) { pluginkey_ = std::move(pluginKey); api_data_ = apiData; }
    [[nodiscard]] bool initialized() const { return !pluginkey_.empty() && api_data_.is_object(); }
    [[nodiscard]] const std::string& plugin_key() const noexcept { return pluginkey_; }
    [[nodiscard]] const ApiSpec* FindSpec(const char* apiName) const { return FindApiSpec(apiName); }
    template <typename... Args> std::intptr_t CallRaw(const std::string& functionName, Args... args) const {
        const auto address = GetFunctionAddress(functionName);
        if (address == 0) throw std::runtime_error("小栗子 API 未找到或未授权: " + functionName);
        const auto func = reinterpret_cast<NativeFunction>(address);
        return func(pluginkey_.c_str(), args...);
    }
    template <typename... Args> const char* CallText(const std::string& functionName, Args... args) const { return reinterpret_cast<const char*>(CallRaw(functionName, args...)); }
    template <typename... Args> std::int32_t CallInt32(const std::string& functionName, Args... args) const { return static_cast<std::int32_t>(CallRaw(functionName, args...)); }
    template <typename... Args> std::int64_t CallInt64(const std::string& functionName, Args... args) const { return static_cast<std::int64_t>(CallRaw(functionName, args...)); }
    template <typename... Args> bool CallBool(const std::string& functionName, Args... args) const { return CallRaw(functionName, args...) != 0; }
    template <typename... Args> void CallVoid(const std::string& functionName, Args... args) const { (void)CallRaw(functionName, args...); }
    const char* OutLog(const char* message, std::optional<std::int32_t> textColor = std::nullopt, std::optional<std::int32_t> bgColor = std::nullopt) const;
    const char* SendPrivateMessage(std::int64_t fQq, std::int64_t qq, const char* message, std::int64_t* random = nullptr, std::int32_t* req = nullptr) const;
    const char* SendGroupMessage(std::int64_t fQq, std::int64_t group, const char* message, bool anonymous = false) const;
    const char* SendGroupTempMessage(std::int64_t fQq, std::int64_t groupId, std::int64_t qq, const char* message, std::int64_t* random = nullptr, std::int32_t* req = nullptr) const;
    [[nodiscard]] const char* GetPluginDataDir() const;
    [[nodiscard]] const char* GetFrameworkQQ() const;
    [[nodiscard]] const char* GetSKey(std::int64_t fQq) const;
    [[nodiscard]] const char* GetPSKey(std::int64_t fQq, const char* domain) const;
    [[nodiscard]] const char* GetClientKey(std::int64_t fQq) const;
    void RebootFramework() const;
    void rebootFamework() const { RebootFramework(); }
    void Reload(const std::string& path = {}) const;
    void reload(std::string path = {}) const { Reload(path); }
    [[nodiscard]] const char* QQLike(std::int64_t fQq, std::int64_t qq) const;
    [[nodiscard]] bool LoginQQ(std::int64_t fQq) const;
    [[nodiscard]] bool LogoutQQ(std::int64_t fQq) const;
    [[nodiscard]] const char* GetCurrentLoginDeviceInfo(std::int64_t fQq, LoginDeviceInfo* info) const;
    const char* GroupLuckyRedPacket(std::int64_t fQq, std::int32_t total, std::int32_t totalAmount, std::int64_t group, const char* bless, const char* payPasswd, std::int32_t skinId = 0, std::int32_t bankCard = 0, CaptchaInfo* verInfo = nullptr) const;
    const char* GroupVoiceRedPacket(std::int64_t fQq, std::int32_t total, std::int32_t totalAmount, std::int64_t group, const char* voiceText, const char* payPasswd, std::int32_t bankCard = 0, CaptchaInfo* verInfo = nullptr) const;
    const char* GroupExclusiveRedPacket(std::int64_t fQq, std::int32_t total, std::int32_t totalAmount, std::int64_t group, const char* qq, const char* bless, bool sharing, const char* payPasswd, std::int32_t bankCard = 0, CaptchaInfo* verInfo = nullptr) const;
};
using API = Api;
} // namespace xlz
