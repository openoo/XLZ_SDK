#pragma once
#include "xlz/data_types.hpp"
#include "xlz/text_code.hpp"
#include <cstdint>
#include <string>
namespace xlz {
// 消息数据辅助工具。框架回调传入结构体地址，这里复制为 C++ 结构体快照。
class MessageTools {
public:
    static void ReadPrivateMessage(std::intptr_t dataPointer, PrivateMessageData& data);
    static void ReadGroupMessage(std::intptr_t dataPointer, GroupMessageData& data);
    static void NormalizeNewlines(std::string& messageContent);
    static std::string GetTencentNewline(bool isAndroid = false);
    static ULONG ReleaseComInterface(IUnknown* pInterface);
private:
    static void ReplaceAll(std::string& str, const std::string& from, const std::string& to);
};
} // namespace xlz
