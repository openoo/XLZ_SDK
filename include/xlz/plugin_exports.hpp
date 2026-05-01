#pragma once
#if defined(_WIN32)
  #define XLZ_PLUGIN_EXPORT extern "C" __declspec(dllexport)
#else
  #define XLZ_PLUGIN_EXPORT extern "C"
#endif
// 默认使用 C 调用约定，保持导出名不被 x86 stdcall 修饰；如宿主明确要求 stdcall，可自行配合 .def 文件包装。
#define XLZ_PLUGIN_CALL
