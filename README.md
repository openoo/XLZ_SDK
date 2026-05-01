# XLZ_SDK

面向小栗子框架的现代 C++ SDK 封装。

本仓库当前基于 `cornsdk5.1.7_免打包版` 解析生成，目标是尽量还原小栗子原 SDK 的 API 名称、参数顺序、返回类型、传址参数和结构体布局，同时提供更适合 C++ 项目使用的目录结构和调用方式。

## 特性

- 支持 434 个公开 API 的元数据查询、通用调用和 `xlz::GeneratedApi` 全量包装。
- 常用 API 提供强类型 C++ 包装。
- 使用 `std::uintptr_t` 保存函数地址，避免 64 位指针截断。
- 明确区分易语言数组和 `std::vector`，降低 ABI 错误风险。
- 插件信息、权限申请、事件消息结构体、文本代码工具均已拆分成独立模块。
- 提供中文开发文档和完整 API 清单。

## 快速开始

小栗子常见宿主是 32 位进程，优先构建 Win32 DLL：

```powershell
cmake -S . -B build -A Win32
cmake --build build --config Release
```

如宿主明确是 64 位，可构建 x64：

```powershell
cmake -S . -B build-x64 -A x64
cmake --build build-x64 --config Release
```

示例插件见 `examples/basic_plugin.cpp`。

示例插件的初始化返回格式已经按小白兔可加载插件的格式处理：入口只导出 `appload`，权限申请的 `needapilist` 每项只包含 `desc` 字段，并且返回给宿主前转换为 ANSI/GBK。当前示例使用 `AddAllPermissions` 申请 SDK 已解析到的全部权限；如果需要兼容更老宿主，可改为只申请实际用到的权限。

示例插件已经接入原生 Win32 调试面板。点击插件设置会打开窗口，窗口内包含状态栏、日志输出框、刷新状态、测试日志和清空日志按钮；私聊/群聊回调也会写入该日志框，便于绕开宿主日志输出不友好的问题。

## 文档

- `docs/开发指南.md`
- `docs/设计说明.md`
- `docs/API清单.md`

## 检查元数据

```powershell
node .\tools\check_sdk_metadata.js
```

## 重要说明

小栗子宿主如果是 32 位进程，插件 DLL 也必须编译为 32 位。易语言动态数组不是 C++ 容器，涉及数组返回值时请先按文档复制数据，不要直接释放框架内存。
