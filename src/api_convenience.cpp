#include "xlz/api.hpp"

#include "xlz/e_types.hpp"

#include <cstdint>

namespace xlz {
namespace {
const char* SafeText(const char* value) { return value == nullptr ? "" : value; }
}

const char* Api::OutLog(const char* message, const std::optional<int32_t> textColor, const std::optional<int32_t> bgColor) const {
    return CallText("输出日志", SafeText(message), textColor.value_or(32768), bgColor.value_or(16777215));
}

const char* Api::SendPrivateMessage(const int64_t fQq, const int64_t qq, const char* message, int64_t* random, int32_t* req) const {
    return CallText("发送好友消息", fQq, qq, SafeText(message), random, req);
}

const char* Api::SendGroupMessage(const int64_t fQq, const int64_t group, const char* message, const bool anonymous) const {
    return CallText("发送群消息", fQq, group, SafeText(message), ToEBool(anonymous));
}

const char* Api::SendGroupTempMessage(const int64_t fQq, const int64_t groupId, const int64_t qq, const char* message, int64_t* random, int32_t* req) const {
    return CallText("发送群临时消息", fQq, groupId, qq, SafeText(message), random, req);
}

const char* Api::GetPluginDataDir() const {
    return CallText("取插件数据目录");
}

const char* Api::GetFrameworkQQ() const {
    return CallText("取框架QQ");
}

const char* Api::GetSKey(const int64_t fQq) const {
    return CallText("获取skey", fQq);
}

const char* Api::GetPSKey(const int64_t fQq, const char* domain) const {
    return CallText("获取pskey", fQq, SafeText(domain));
}

const char* Api::GetClientKey(const int64_t fQq) const {
    return CallText("获取clientkey", fQq);
}

void Api::RebootFramework() const {
    CallVoid("框架重启");
}

void Api::Reload(const std::string& path) const {
    const auto actualPath = path.empty() ? std::string("empty") : path;
    CallVoid("重载自身", actualPath.c_str());
}

const char* Api::QQLike(const int64_t fQq, const int64_t qq) const {
    return CallText("QQ点赞", fQq, qq);
}

bool Api::LoginQQ(const int64_t fQq) const {
    return CallBool("登录指定QQ", fQq);
}

bool Api::LogoutQQ(const int64_t fQq) const {
    return CallBool("下线指定QQ", fQq);
}

const char* Api::GetCurrentLoginDeviceInfo(const int64_t fQq, LoginDeviceInfo* info) const {
    return CallText("获取当前登录设备信息", fQq, info);
}

const char* Api::GroupLuckyRedPacket(const int64_t fQq, const int32_t total, const int32_t totalAmount, const int64_t group, const char* bless, const char* payPasswd, const int32_t skinId, const int32_t bankCard, CaptchaInfo* verInfo) const {
    return CallText("群聊拼手气红包", fQq, total, totalAmount, group, SafeText(bless), skinId, SafeText(payPasswd), bankCard, verInfo);
}

const char* Api::GroupVoiceRedPacket(const int64_t fQq, const int32_t total, const int32_t totalAmount, const int64_t group, const char* voiceText, const char* payPasswd, const int32_t bankCard, CaptchaInfo* verInfo) const {
    return CallText("群聊语音红包", fQq, total, totalAmount, group, SafeText(voiceText), SafeText(payPasswd), bankCard, verInfo);
}

const char* Api::GroupExclusiveRedPacket(const int64_t fQq, const int32_t total, const int32_t totalAmount, const int64_t group, const char* qq, const char* bless, const bool sharing, const char* payPasswd, const int32_t bankCard, CaptchaInfo* verInfo) const {
    return CallText("群聊专属红包", fQq, total, totalAmount, group, SafeText(qq), SafeText(bless), ToEBool(sharing), SafeText(payPasswd), bankCard, verInfo);
}

} // namespace xlz
