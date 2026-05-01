#pragma once
#include <cstddef>
#include <cstdint>
#include <vector>
#if defined(_WIN32)
  #define XLZ_API_CALL __stdcall
#else
  #define XLZ_API_CALL
#endif
namespace xlz {
using EByte = std::uint8_t;       // 易语言字节型
using EShort = std::int16_t;      // 易语言短整数型
using EInt = std::int32_t;        // 易语言整数型
using ELong = std::int64_t;       // 易语言长整数型
using EFloat = float;             // 易语言小数型
using EDouble = double;           // 易语言双精度小数型
using EBool = std::int32_t;       // 易语言逻辑型，按 32 位整数传递更稳定
using EText = const char*;        // 易语言文本型，通常为 GBK/ANSI
using EBinary = const std::uint8_t*; // 易语言字节集数据地址
using ESubPtr = std::uintptr_t;   // 易语言子程序地址
using NativeFunction = std::intptr_t(XLZ_API_CALL*)(const char*, ...);
using XlzFunction = NativeFunction;
constexpr EBool ToEBool(const bool value) noexcept { return value ? 1 : 0; }
struct ByteSpan { const std::uint8_t* data = nullptr; std::int32_t size = 0; };
template <typename T>
struct EArrayView {
    T* data = nullptr;
    std::int32_t count = 0;
    std::int32_t reserved = 0;
    [[nodiscard]] bool empty() const noexcept { return data == nullptr || count <= 0; }
    [[nodiscard]] std::size_t size() const noexcept { return count > 0 ? static_cast<std::size_t>(count) : 0; }
    [[nodiscard]] T* begin() const noexcept { return data; }
    [[nodiscard]] T* end() const noexcept { return data == nullptr ? nullptr : data + size(); }
    [[nodiscard]] std::vector<T> to_vector() const { return empty() ? std::vector<T>{} : std::vector<T>(data, data + size()); }
};
} // namespace xlz
