#pragma once

#include "xlz/api.hpp"

#include <cstdint>
#include <utility>

namespace xlz {

// 全量 API 包装器。
// 方法名使用 Api001、Api002 ... 保持跨编译器稳定；中文 API 名、参数顺序和类型写在每个方法的注释中。
// 这些方法不会猜测复杂结构体/数组的 C++ 类型，实际参数仍按 docs/API清单.md 和 metadata.hpp 的顺序传入。
class GeneratedApi : public Api {
public:
    using Api::Api;

    /**
     * @brief API 001: 输出日志
     * @return 文本型
     * @param 参数顺序 1. 日志: 文本型; 原始: 日志
     * 2. 文字颜色: 整数型 (可省略); 原始: 文字颜色
     * 3. 背景颜色: 整数型 (可省略); 原始: 背景颜色
     */
    template <typename... Args>
    const char* Api001(Args&&... args) const {
        return this->CallText("输出日志", std::forward<Args>(args)...);
    }

    /**
     * @brief API 002: 发送好友消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. 发送内容: 文本型; 原始: 发送内容
     * 4. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 5. Req: 整数型 (传址/参考, 可省略); 原始: Req
     */
    template <typename... Args>
    const char* Api002(Args&&... args) const {
        return this->CallText("发送好友消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 003: 发送群消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 发送内容: 文本型; 原始: 发送内容
     * 4. 匿名发送: 逻辑型 (可省略); 原始: 匿名发送
     */
    template <typename... Args>
    const char* Api003(Args&&... args) const {
        return this->CallText("发送群消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 004: 发送群临时消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群ID: 长整数型; 原始: 群ID
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 发送内容: 文本型; 原始: 发送内容
     * 5. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 6. Req: 整数型 (传址/参考, 可省略); 原始: Req
     */
    template <typename... Args>
    const char* Api004(Args&&... args) const {
        return this->CallText("发送群临时消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 005: 添加好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 问题答案: 文本型; 原始: 问题答案
     * 4. 备注: 文本型; 原始: 备注
     */
    template <typename... Args>
    const char* Api005(Args&&... args) const {
        return this->CallText("添加好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 006: 添加群
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 验证消息: 文本型; 原始: 验证消息
     */
    template <typename... Args>
    const char* Api006(Args&&... args) const {
        return this->CallText("添加群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 007: 删除好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api007(Args&&... args) const {
        return this->CallText("删除好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 008: 置屏蔽好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 是否屏蔽: 逻辑型; 原始: 是否屏蔽
     */
    template <typename... Args>
    const char* Api008(Args&&... args) const {
        return this->CallText("置屏蔽好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 009: 置特别关心好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 是否关心: 逻辑型; 原始: 是否关心
     */
    template <typename... Args>
    const char* Api009(Args&&... args) const {
        return this->CallText("置特别关心好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 010: 发送好友json消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. json代码: 文本型; 原始: json代码
     * 4. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 5. Req: 整数型 (传址/参考, 可省略); 原始: Req
     */
    template <typename... Args>
    const char* Api010(Args&&... args) const {
        return this->CallText("发送好友json消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 011: 发送群json消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. json代码: 文本型; 原始: json代码
     * 4. 匿名发送: 逻辑型 (可省略); 原始: 匿名发送
     */
    template <typename... Args>
    const char* Api011(Args&&... args) const {
        return this->CallText("发送群json消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 012: 上传好友图片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. 是否闪照: 逻辑型 (可省略); 原始: 是否闪照
     * 4. pic: 字节集; 原始: pic
     * 5. 宽度: 整数型 (可省略); 原始: 宽度
     * 6. 高度: 整数型 (可省略); 原始: 高度
     * 7. 动图: 逻辑型 (可省略); 原始: 动图
     * 8. 预览文字: 文本型 (可省略); 原始: 预览文字
     */
    template <typename... Args>
    const char* Api012(Args&&... args) const {
        return this->CallText("上传好友图片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 013: 上传群图片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否闪照: 逻辑型 (可省略); 原始: 是否闪照
     * 4. pic: 字节集; 原始: pic
     * 5. 宽度: 整数型 (可省略); 原始: 宽度
     * 6. 高度: 整数型 (可省略); 原始: 高度
     * 7. 动图: 逻辑型 (可省略); 原始: 动图
     * 8. 预览文字: 文本型 (可省略); 原始: 预览文字
     */
    template <typename... Args>
    const char* Api013(Args&&... args) const {
        return this->CallText("上传群图片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 014: 上传好友语音
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. 语音类型: 整数型 (可省略); 原始: 语音类型
     * 4. 语音文字: 文本型 (可省略); 原始: 语音文字
     * 5. audio: 字节集; 原始: audio
     * 6. 时长: 整数型 (可省略); 原始: 时长
     */
    template <typename... Args>
    const char* Api014(Args&&... args) const {
        return this->CallText("上传好友语音", std::forward<Args>(args)...);
    }

    /**
     * @brief API 015: 上传群语音
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 语音类型: 整数型 (可省略); 原始: 语音类型
     * 4. 语音文字: 文本型 (可省略); 原始: 语音文字
     * 5. audio: 字节集; 原始: audio
     * 6. 时长: 整数型 (可省略); 原始: 时长
     */
    template <typename... Args>
    const char* Api015(Args&&... args) const {
        return this->CallText("上传群语音", std::forward<Args>(args)...);
    }

    /**
     * @brief API 016: 上传头像
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. pic: 字节集; 原始: pic
     */
    template <typename... Args>
    const char* Api016(Args&&... args) const {
        return this->CallText("上传头像", std::forward<Args>(args)...);
    }

    /**
     * @brief API 017: silk解码
     * @return 字节集
     * @param 参数顺序 1. 音频文件路径: 文本型; 原始: 音频文件路径
     */
    template <typename... Args>
    std::intptr_t Api017(Args&&... args) const {
        return this->CallRaw("silk解码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 018: silk编码
     * @return 字节集
     * @param 参数顺序 1. 音频文件路径: 文本型; 原始: 音频文件路径
     */
    template <typename... Args>
    std::intptr_t Api018(Args&&... args) const {
        return this->CallRaw("silk编码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 019: amr编码
     * @return 字节集
     * @param 参数顺序 1. 音频文件路径: 文本型; 原始: 音频文件路径
     */
    template <typename... Args>
    std::intptr_t Api019(Args&&... args) const {
        return this->CallRaw("amr编码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 020: 设置群名片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 群成员QQ: 长整数型; 原始: 群成员QQ
     * 4. 新名片: 文本型; 原始: 新名片
     */
    template <typename... Args>
    const char* Api020(Args&&... args) const {
        return this->CallText("设置群名片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 021: 取昵称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 对方QQ: 文本型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api021(Args&&... args) const {
        return this->CallText("取昵称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 022: 强制取昵称
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 文本型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api022(Args&&... args) const {
        return this->CallText("强制取昵称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 023: 取群名称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 群号: 文本型; 原始: 群号
     */
    template <typename... Args>
    const char* Api023(Args&&... args) const {
        return this->CallText("取群名称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 024: 获取skey
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api024(Args&&... args) const {
        return this->CallText("获取skey", std::forward<Args>(args)...);
    }

    /**
     * @brief API 025: 获取pskey
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 域: 文本型; 原始: 域
     */
    template <typename... Args>
    const char* Api025(Args&&... args) const {
        return this->CallText("获取pskey", std::forward<Args>(args)...);
    }

    /**
     * @brief API 026: 获取clientkey
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api026(Args&&... args) const {
        return this->CallText("获取clientkey", std::forward<Args>(args)...);
    }

    /**
     * @brief API 027: 取框架QQ
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api027(Args&&... args) const {
        return this->CallText("取框架QQ", std::forward<Args>(args)...);
    }

    /**
     * @brief API 028: 取好友列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 数据: 好友信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api028(Args&&... args) const {
        return this->CallInt32("取好友列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 029: 取群列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 数据: 群信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api029(Args&&... args) const {
        return this->CallInt32("取群列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 030: 取群成员列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 数据: 群成员信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api030(Args&&... args) const {
        return this->CallInt32("取群成员列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 031: 设置管理员
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 群成员QQ: 长整数型; 原始: 群成员QQ
     * 4. 取消管理: 逻辑型; 原始: 取消管理
     */
    template <typename... Args>
    bool Api031(Args&&... args) const {
        return this->CallBool("设置管理员", std::forward<Args>(args)...);
    }

    /**
     * @brief API 032: 取管理层列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api032(Args&&... args) const {
        return this->CallText("取管理层列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 033: 取群名片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 群成员QQ: 长整数型; 原始: 群成员QQ
     */
    template <typename... Args>
    const char* Api033(Args&&... args) const {
        return this->CallText("取群名片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 034: 取个性签名
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api034(Args&&... args) const {
        return this->CallText("取个性签名", std::forward<Args>(args)...);
    }

    /**
     * @brief API 035: 修改昵称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 昵称: 文本型; 原始: 昵称
     */
    template <typename... Args>
    bool Api035(Args&&... args) const {
        return this->CallBool("修改昵称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 036: 修改个性签名
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 签名: 文本型; 原始: 签名
     * 3. 签名地点: 文本型 (可省略); 原始: 签名地点
     */
    template <typename... Args>
    bool Api036(Args&&... args) const {
        return this->CallBool("修改个性签名", std::forward<Args>(args)...);
    }

    /**
     * @brief API 037: 删除群成员
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 群成员QQ: 长整数型; 原始: 群成员QQ
     * 4. 拒绝加群申请: 逻辑型; 原始: 拒绝加群申请
     */
    template <typename... Args>
    bool Api037(Args&&... args) const {
        return this->CallBool("删除群成员", std::forward<Args>(args)...);
    }

    /**
     * @brief API 038: 禁言群成员
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 群成员QQ: 长整数型; 原始: 群成员QQ
     * 4. 禁言时长: 整数型; 原始: 禁言时长
     */
    template <typename... Args>
    bool Api038(Args&&... args) const {
        return this->CallBool("禁言群成员", std::forward<Args>(args)...);
    }

    /**
     * @brief API 039: 退群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    bool Api039(Args&&... args) const {
        return this->CallBool("退群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 040: 解散群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    bool Api040(Args&&... args) const {
        return this->CallBool("解散群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 041: 上传群头像
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. pic: 字节集; 原始: pic
     */
    template <typename... Args>
    bool Api041(Args&&... args) const {
        return this->CallBool("上传群头像", std::forward<Args>(args)...);
    }

    /**
     * @brief API 042: 全员禁言
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否开启: 逻辑型; 原始: 是否开启
     */
    template <typename... Args>
    bool Api042(Args&&... args) const {
        return this->CallBool("全员禁言", std::forward<Args>(args)...);
    }

    /**
     * @brief API 043: 群权限_发起新的群聊
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api043(Args&&... args) const {
        return this->CallBool("群权限_发起新的群聊", std::forward<Args>(args)...);
    }

    /**
     * @brief API 044: 群权限_发起临时会话
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api044(Args&&... args) const {
        return this->CallBool("群权限_发起临时会话", std::forward<Args>(args)...);
    }

    /**
     * @brief API 045: 群权限_上传文件
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api045(Args&&... args) const {
        return this->CallBool("群权限_上传文件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 046: 群权限_上传相册
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api046(Args&&... args) const {
        return this->CallBool("群权限_上传相册", std::forward<Args>(args)...);
    }

    /**
     * @brief API 047: 群权限_邀请好友加群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api047(Args&&... args) const {
        return this->CallBool("群权限_邀请好友加群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 048: 群权限_匿名聊天
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api048(Args&&... args) const {
        return this->CallBool("群权限_匿名聊天", std::forward<Args>(args)...);
    }

    /**
     * @brief API 049: 群权限_坦白说
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api049(Args&&... args) const {
        return this->CallBool("群权限_坦白说", std::forward<Args>(args)...);
    }

    /**
     * @brief API 050: 群权限_新成员查看历史消息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api050(Args&&... args) const {
        return this->CallBool("群权限_新成员查看历史消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 051: 群权限_邀请方式设置
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 方式: 整数型; 原始: 方式
     */
    template <typename... Args>
    bool Api051(Args&&... args) const {
        return this->CallBool("群权限_邀请方式设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 052: 撤回消息_群聊
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 消息Random: 长整数型; 原始: 消息Random
     * 4. 消息Req: 整数型; 原始: 消息Req
     */
    template <typename... Args>
    bool Api052(Args&&... args) const {
        return this->CallBool("撤回消息_群聊", std::forward<Args>(args)...);
    }

    /**
     * @brief API 053: 撤回消息_私聊本身
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 消息Random: 长整数型; 原始: 消息Random
     * 4. 消息Req: 整数型; 原始: 消息Req
     * 5. 消息接收时间: 整数型; 原始: 消息接收时间
     */
    template <typename... Args>
    bool Api053(Args&&... args) const {
        return this->CallBool("撤回消息_私聊本身", std::forward<Args>(args)...);
    }

    /**
     * @brief API 054: 设置位置共享
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 经度: 双精度小数型; 原始: 经度
     * 4. 纬度: 双精度小数型; 原始: 纬度
     * 5. 是否开启: 逻辑型; 原始: 是否开启
     */
    template <typename... Args>
    bool Api054(Args&&... args) const {
        return this->CallBool("设置位置共享", std::forward<Args>(args)...);
    }

    /**
     * @brief API 055: 上报当前位置
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 经度: 双精度小数型; 原始: 经度
     * 4. 纬度: 双精度小数型; 原始: 纬度
     */
    template <typename... Args>
    bool Api055(Args&&... args) const {
        return this->CallBool("上报当前位置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 056: 是否被禁言
     * @return 长整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    std::int64_t Api056(Args&&... args) const {
        return this->CallInt64("是否被禁言", std::forward<Args>(args)...);
    }

    /**
     * @brief API 057: 处理群验证事件
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 触发QQ: 长整数型; 原始: 触发QQ
     * 4. 消息Seq: 长整数型; 原始: 消息Seq
     * 5. 操作类型: 整数型; 原始: 操作类型
     * 6. 事件类型: 整数型; 原始: 事件类型
     * 7. 拒绝理由: 文本型 (可省略); 原始: 拒绝理由
     */
    template <typename... Args>
    void Api057(Args&&... args) const {
        this->CallVoid("处理群验证事件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 058: 处理好友验证事件
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 触发QQ: 长整数型; 原始: 触发QQ
     * 3. 消息Seq: 长整数型; 原始: 消息Seq
     * 4. 操作类型: 整数型; 原始: 操作类型
     */
    template <typename... Args>
    void Api058(Args&&... args) const {
        this->CallVoid("处理好友验证事件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 059: 查看转发聊天记录内容
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. resId: 文本型; 原始: resId
     * 3. 消息内容: 群消息数据 (传址/参考, 数组); 原始: 消息内容
     */
    template <typename... Args>
    void Api059(Args&&... args) const {
        this->CallVoid("查看转发聊天记录内容", std::forward<Args>(args)...);
    }

    /**
     * @brief API 060: 上传群文件
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件路径: 文本型; 原始: 文件路径
     * 4. 文件夹名: 文本型 (可省略); 原始: 文件夹名
     */
    template <typename... Args>
    const char* Api060(Args&&... args) const {
        return this->CallText("上传群文件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 061: 创建群文件夹
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件夹名: 文本型; 原始: 文件夹名
     */
    template <typename... Args>
    const char* Api061(Args&&... args) const {
        return this->CallText("创建群文件夹", std::forward<Args>(args)...);
    }

    /**
     * @brief API 062: 重命名群文件夹
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 旧文件夹名: 文本型; 原始: 旧文件夹名
     * 4. 新文件夹名: 文本型; 原始: 新文件夹名
     */
    template <typename... Args>
    const char* Api062(Args&&... args) const {
        return this->CallText("重命名群文件夹", std::forward<Args>(args)...);
    }

    /**
     * @brief API 063: 删除群文件夹
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件夹名: 文本型; 原始: 文件夹名
     */
    template <typename... Args>
    const char* Api063(Args&&... args) const {
        return this->CallText("删除群文件夹", std::forward<Args>(args)...);
    }

    /**
     * @brief API 064: 删除群文件
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件fileid: 文本型; 原始: 文件fileid
     * 4. 文件夹名: 文本型 (可省略); 原始: 文件夹名
     */
    template <typename... Args>
    const char* Api064(Args&&... args) const {
        return this->CallText("删除群文件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 065: 保存文件到微云
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件fileid: 文本型; 原始: 文件fileid
     */
    template <typename... Args>
    const char* Api065(Args&&... args) const {
        return this->CallText("保存文件到微云", std::forward<Args>(args)...);
    }

    /**
     * @brief API 066: 移动群文件
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件fileid: 文本型; 原始: 文件fileid
     * 4. 当前文件夹名: 文本型 (可省略); 原始: 当前文件夹名
     * 5. 目标文件夹名: 文本型 (可省略); 原始: 目标文件夹名
     */
    template <typename... Args>
    const char* Api066(Args&&... args) const {
        return this->CallText("移动群文件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 067: 取群文件列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件夹名: 文本型 (可省略); 原始: 文件夹名
     * 4. 数据: 群文件信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    const char* Api067(Args&&... args) const {
        return this->CallText("取群文件列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 068: 设置在线状态
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. main: 整数型; 原始: main
     * 3. sun: 整数型 (可省略); 原始: sun
     * 4. 电量: 整数型 (可省略); 原始: 电量
     */
    template <typename... Args>
    bool Api068(Args&&... args) const {
        return this->CallBool("设置在线状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 069: 取插件数据目录
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api069(Args&&... args) const {
        return this->CallText("取插件数据目录", std::forward<Args>(args)...);
    }

    /**
     * @brief API 070: QQ点赞
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api070(Args&&... args) const {
        return this->CallText("QQ点赞", std::forward<Args>(args)...);
    }

    /**
     * @brief API 071: 取图片下载地址
     * @return 文本型
     * @param 参数顺序 1. 图片代码: 文本型; 原始: 图片代码
     * 2. 框架QQ: 长整数型; 原始: 框架QQ
     * 3. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api071(Args&&... args) const {
        return this->CallText("取图片下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 072: 查询好友信息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 数据: 好友信息 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    bool Api072(Args&&... args) const {
        return this->CallBool("查询好友信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 073: 查询群信息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 数据: 群卡片信息 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    bool Api073(Args&&... args) const {
        return this->CallBool("查询群信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 074: 框架重启
     * @return 无
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    void Api074(Args&&... args) const {
        this->CallVoid("框架重启", std::forward<Args>(args)...);
    }

    /**
     * @brief API 075: 群文件转发至群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 目标群号: 长整数型; 原始: 目标群号
     * 4. fileId: 文本型; 原始: fileId
     */
    template <typename... Args>
    bool Api075(Args&&... args) const {
        return this->CallBool("群文件转发至群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 076: 群文件转发至好友
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 目标QQ: 长整数型; 原始: 目标QQ
     * 4. fileId: 文本型; 原始: fileId
     * 5. filename: 文本型; 原始: filename
     * 6. filesize: 长整数型; 原始: filesize
     * 7. Req: 整数型 (传址/参考, 可省略); 原始: Req
     * 8. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 9. time: 整数型 (传址/参考, 可省略); 原始: time
     */
    template <typename... Args>
    bool Api076(Args&&... args) const {
        return this->CallBool("群文件转发至好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 077: 好友文件转发至好友
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 目标QQ: 长整数型; 原始: 目标QQ
     * 3. fileId: 文本型; 原始: fileId
     * 4. filename: 文本型; 原始: filename
     * 5. filesize: 长整数型; 原始: filesize
     * 6. Req: 整数型 (传址/参考, 可省略); 原始: Req
     * 7. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 8. time: 整数型 (传址/参考, 可省略); 原始: time
     */
    template <typename... Args>
    bool Api077(Args&&... args) const {
        return this->CallBool("好友文件转发至好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 078: 置群消息接收
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 设置类型: 整数型; 原始: 设置类型
     */
    template <typename... Args>
    bool Api078(Args&&... args) const {
        return this->CallBool("置群消息接收", std::forward<Args>(args)...);
    }

    /**
     * @brief API 079: 取好友在线状态
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api079(Args&&... args) const {
        return this->CallText("取好友在线状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 080: 取QQ钱包个人信息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 数据: QQ钱包信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    const char* Api080(Args&&... args) const {
        return this->CallText("取QQ钱包个人信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 081: 获取订单详情
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 订单号: 文本型; 原始: 订单号
     * 3. 数据: 订单详情 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    const char* Api081(Args&&... args) const {
        return this->CallText("获取订单详情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 082: 提交支付验证码
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 验证码信息: 验证码信息; 原始: 验证码信息
     * 3. 验证码: 文本型; 原始: 验证码
     * 4. 支付密码: 文本型; 原始: 支付密码
     */
    template <typename... Args>
    const char* Api082(Args&&... args) const {
        return this->CallText("提交支付验证码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 083: 分享音乐
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 分享对象: 长整数型; 原始: 分享对象
     * 3. 歌曲名: 文本型; 原始: 歌曲名
     * 4. 歌手名: 文本型; 原始: 歌手名
     * 5. 跳转地址: 文本型; 原始: 跳转地址
     * 6. 封面地址: 文本型; 原始: 封面地址
     * 7. 文件地址: 文本型 (可省略); 原始: 文件地址
     * 8. 应用类型: 整数型 (可省略); 原始: 应用类型
     * 9. 分享类型: 整数型 (可省略); 原始: 分享类型
     */
    template <typename... Args>
    bool Api083(Args&&... args) const {
        return this->CallBool("分享音乐", std::forward<Args>(args)...);
    }

    /**
     * @brief API 084: 更改群聊消息内容
     * @return 逻辑型
     * @param 参数顺序 1. 数据指针: 整数型; 原始: 数据指针
     * 2. 新消息内容: 文本型; 原始: 新消息内容
     */
    template <typename... Args>
    bool Api084(Args&&... args) const {
        return this->CallBool("更改群聊消息内容", std::forward<Args>(args)...);
    }

    /**
     * @brief API 085: 更改私聊消息内容
     * @return 逻辑型
     * @param 参数顺序 1. 数据指针: 整数型; 原始: 数据指针
     * 2. 新消息内容: 文本型; 原始: 新消息内容
     */
    template <typename... Args>
    bool Api085(Args&&... args) const {
        return this->CallBool("更改私聊消息内容", std::forward<Args>(args)...);
    }

    /**
     * @brief API 086: 群聊口令红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 口令: 文本型; 原始: 口令
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api086(Args&&... args) const {
        return this->CallText("群聊口令红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 087: 群聊拼手气红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 祝福语: 文本型; 原始: 祝福语
     * 6. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 7. 支付密码: 文本型; 原始: 支付密码
     * 8. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 9. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api087(Args&&... args) const {
        return this->CallText("群聊拼手气红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 088: 群聊普通红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 祝福语: 文本型; 原始: 祝福语
     * 6. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 7. 支付密码: 文本型; 原始: 支付密码
     * 8. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 9. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api088(Args&&... args) const {
        return this->CallText("群聊普通红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 089: 群聊画图红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 题目名: 文本型; 原始: 题目名
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api089(Args&&... args) const {
        return this->CallText("群聊画图红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 090: 群聊语音红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 语音口令: 文本型; 原始: 语音口令
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api090(Args&&... args) const {
        return this->CallText("群聊语音红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 091: 群聊接龙红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 接龙内容: 文本型; 原始: 接龙内容
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api091(Args&&... args) const {
        return this->CallText("群聊接龙红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 092: 群聊专属红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 领取人: 文本型; 原始: 领取人
     * 6. 祝福语: 文本型; 原始: 祝福语
     * 7. 是否均分: 逻辑型 (可省略); 原始: 是否均分
     * 8. 支付密码: 文本型; 原始: 支付密码
     * 9. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 10. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api092(Args&&... args) const {
        return this->CallText("群聊专属红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 093: 好友口令红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 对方QQ: 长整数型; 原始: 对方QQ
     * 5. 口令: 文本型; 原始: 口令
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api093(Args&&... args) const {
        return this->CallText("好友口令红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 094: 好友普通红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 对方QQ: 长整数型; 原始: 对方QQ
     * 5. 祝福语: 文本型; 原始: 祝福语
     * 6. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 7. 支付密码: 文本型; 原始: 支付密码
     * 8. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 9. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api094(Args&&... args) const {
        return this->CallText("好友普通红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 095: 好友画图红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 对方QQ: 长整数型; 原始: 对方QQ
     * 5. 题目名: 文本型; 原始: 题目名
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api095(Args&&... args) const {
        return this->CallText("好友画图红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 096: 好友语音红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 对方QQ: 长整数型; 原始: 对方QQ
     * 5. 语音口令: 文本型; 原始: 语音口令
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api096(Args&&... args) const {
        return this->CallText("好友语音红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 097: 好友接龙红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 对方QQ: 长整数型; 原始: 对方QQ
     * 5. 接龙内容: 文本型; 原始: 接龙内容
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api097(Args&&... args) const {
        return this->CallText("好友接龙红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 098: 设置专属头衔
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 头衔: 文本型; 原始: 头衔
     */
    template <typename... Args>
    bool Api098(Args&&... args) const {
        return this->CallBool("设置专属头衔", std::forward<Args>(args)...);
    }

    /**
     * @brief API 099: 下线指定QQ
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api099(Args&&... args) const {
        return this->CallBool("下线指定QQ", std::forward<Args>(args)...);
    }

    /**
     * @brief API 100: 登录指定QQ
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api100(Args&&... args) const {
        return this->CallBool("登录指定QQ", std::forward<Args>(args)...);
    }

    /**
     * @brief API 101: 取群未领红包
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 数据: 群未领红包数据 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api101(Args&&... args) const {
        return this->CallInt32("取群未领红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 102: 发送输入状态
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 输入状态: 整数型 (可省略); 原始: 输入状态
     */
    template <typename... Args>
    bool Api102(Args&&... args) const {
        return this->CallBool("发送输入状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 103: 修改资料
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 昵称: 文本型 (可省略); 原始: 昵称
     * 3. 性别: 整数型 (可省略); 原始: 性别
     * 4. 生日: 文本型 (可省略); 原始: 生日
     * 5. 职业: 整数型 (可省略); 原始: 职业
     * 6. 公司名: 文本型 (可省略); 原始: 公司名
     * 7. 所在地: 文本型 (可省略); 原始: 所在地
     * 8. 家乡: 文本型 (可省略); 原始: 家乡
     * 9. 邮箱: 文本型 (可省略); 原始: 邮箱
     * 10. 个人说明: 文本型 (可省略); 原始: 个人说明
     */
    template <typename... Args>
    bool Api103(Args&&... args) const {
        return this->CallBool("修改资料", std::forward<Args>(args)...);
    }

    /**
     * @brief API 104: 取群文件下载地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 文件id: 文本型; 原始: 文件id
     * 4. 文件名: 文本型; 原始: 文件名
     */
    template <typename... Args>
    const char* Api104(Args&&... args) const {
        return this->CallText("取群文件下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 105: 打好友电话
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    void Api105(Args&&... args) const {
        this->CallVoid("打好友电话", std::forward<Args>(args)...);
    }

    /**
     * @brief API 106: 头像双击_好友
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    bool Api106(Args&&... args) const {
        return this->CallBool("头像双击_好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 107: 头像双击_群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    bool Api107(Args&&... args) const {
        return this->CallBool("头像双击_群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 108: 取群成员简略信息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 数据: 群成员状况简略信息 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    const char* Api108(Args&&... args) const {
        return this->CallText("取群成员简略信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 109: 群聊置顶
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 置顶: 逻辑型 (可省略); 原始: 置顶
     */
    template <typename... Args>
    bool Api109(Args&&... args) const {
        return this->CallBool("群聊置顶", std::forward<Args>(args)...);
    }

    /**
     * @brief API 110: 私聊置顶
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 置顶: 逻辑型; 原始: 置顶
     */
    template <typename... Args>
    bool Api110(Args&&... args) const {
        return this->CallBool("私聊置顶", std::forward<Args>(args)...);
    }

    /**
     * @brief API 111: 取加群链接
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api111(Args&&... args) const {
        return this->CallText("取加群链接", std::forward<Args>(args)...);
    }

    /**
     * @brief API 112: 设为精华
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 消息Req: 整数型; 原始: 消息Req
     * 4. 消息Random: 长整数型; 原始: 消息Random
     */
    template <typename... Args>
    bool Api112(Args&&... args) const {
        return this->CallBool("设为精华", std::forward<Args>(args)...);
    }

    /**
     * @brief API 113: 群权限_设置群昵称规则
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 名片规则: 文本型; 原始: 名片规则
     */
    template <typename... Args>
    bool Api113(Args&&... args) const {
        return this->CallBool("群权限_设置群昵称规则", std::forward<Args>(args)...);
    }

    /**
     * @brief API 114: 群权限_设置群发言频率
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 限制条数: 整数型; 原始: 限制条数
     */
    template <typename... Args>
    bool Api114(Args&&... args) const {
        return this->CallBool("群权限_设置群发言频率", std::forward<Args>(args)...);
    }

    /**
     * @brief API 115: 群权限_设置群查找方式
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 查找方式: 整数型 (可省略); 原始: 查找方式
     */
    template <typename... Args>
    bool Api115(Args&&... args) const {
        return this->CallBool("群权限_设置群查找方式", std::forward<Args>(args)...);
    }

    /**
     * @brief API 116: 邀请好友加群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 目标群号: 长整数型; 原始: 目标群号
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 来源群号: 长整数型 (可省略); 原始: 来源群号
     */
    template <typename... Args>
    bool Api116(Args&&... args) const {
        return this->CallBool("邀请好友加群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 117: 置群内消息通知
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 通知类型: 整数型 (可省略); 原始: 通知类型
     */
    template <typename... Args>
    bool Api117(Args&&... args) const {
        return this->CallBool("置群内消息通知", std::forward<Args>(args)...);
    }

    /**
     * @brief API 118: 修改群名称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 名称: 文本型; 原始: 名称
     */
    template <typename... Args>
    bool Api118(Args&&... args) const {
        return this->CallBool("修改群名称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 119: 重载自身
     * @return 无
     * @param 参数顺序 1. 新文件路径: 文本型 (可省略); 原始: 新文件路径
     */
    template <typename... Args>
    void Api119(Args&&... args) const {
        this->CallVoid("重载自身", std::forward<Args>(args)...);
    }

    /**
     * @brief API 120: 下线其他设备
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 移动设备: 逻辑型 (可省略); 原始: 移动设备
     * 3. appid: 整数型 (可省略); 原始: appid
     */
    template <typename... Args>
    void Api120(Args&&... args) const {
        this->CallVoid("下线其他设备", std::forward<Args>(args)...);
    }

    /**
     * @brief API 121: 登录网页取ck
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 回调跳转地址: 文本型; 原始: 回调跳转地址
     * 3. appid: 文本型; 原始: appid
     * 4. daid: 文本型; 原始: daid
     * 5. cookie: 文本型 (传址/参考); 原始: cookie
     */
    template <typename... Args>
    bool Api121(Args&&... args) const {
        return this->CallBool("登录网页取ck", std::forward<Args>(args)...);
    }

    /**
     * @brief API 122: 发送群公告
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 标题: 文本型; 原始: 标题
     * 4. 内容: 文本型; 原始: 内容
     * 5. 图片: 字节集 (可省略); 原始: 图片
     * 6. 视频: 文本型 (可省略); 原始: 视频
     * 7. 弹窗展示: 逻辑型 (可省略); 原始: 弹窗展示
     * 8. 需要确认: 逻辑型 (可省略); 原始: 需要确认
     * 9. 置顶: 逻辑型 (可省略); 原始: 置顶
     * 10. 发送给新成员: 逻辑型 (可省略); 原始: 发送给新成员
     * 11. 引导修改群昵称: 逻辑型 (可省略); 原始: 引导修改群昵称
     */
    template <typename... Args>
    const char* Api122(Args&&... args) const {
        return this->CallText("发送群公告", std::forward<Args>(args)...);
    }

    /**
     * @brief API 123: 取框架版本
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api123(Args&&... args) const {
        return this->CallText("取框架版本", std::forward<Args>(args)...);
    }

    /**
     * @brief API 124: 取群成员信息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 数据: 群成员信息V2 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    const char* Api124(Args&&... args) const {
        return this->CallText("取群成员信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 125: 取钱包cookie
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api125(Args&&... args) const {
        return this->CallText("取钱包cookie", std::forward<Args>(args)...);
    }

    /**
     * @brief API 126: 取群网页cookie
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api126(Args&&... args) const {
        return this->CallText("取群网页cookie", std::forward<Args>(args)...);
    }

    /**
     * @brief API 127: 转账
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 转账金额: 整数型; 原始: 转账金额
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 转账留言: 文本型 (可省略); 原始: 转账留言
     * 5. 转账类型: 整数型; 原始: 转账类型
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api127(Args&&... args) const {
        return this->CallText("转账", std::forward<Args>(args)...);
    }

    /**
     * @brief API 128: 取收款链接
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 收款金额: 整数型 (可省略); 原始: 收款金额
     * 3. 说明文本: 文本型; 原始: 说明文本
     */
    template <typename... Args>
    const char* Api128(Args&&... args) const {
        return this->CallText("取收款链接", std::forward<Args>(args)...);
    }

    /**
     * @brief API 129: 取群小视频下载地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 来源QQ: 长整数型; 原始: 来源QQ
     * 4. param: 文本型 (可省略); 原始: param
     * 5. hash1: 文本型 (可省略); 原始: hash1
     * 6. 文件名: 文本型 (可省略); 原始: 文件名
     * 7. 小视频代码: 文本型; 原始: 小视频代码
     */
    template <typename... Args>
    const char* Api129(Args&&... args) const {
        return this->CallText("取群小视频下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 130: 取私聊小视频下载地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源QQ: 长整数型; 原始: 来源QQ
     * 3. param: 文本型; 原始: param
     * 4. hash1: 文本型; 原始: hash1
     * 5. 文件名: 文本型; 原始: 文件名
     */
    template <typename... Args>
    const char* Api130(Args&&... args) const {
        return this->CallText("取私聊小视频下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 131: 上传小视频
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 本地小视频路径: 文本型; 原始: 本地小视频路径
     * 4. 小视频封面图: 字节集; 原始: 小视频封面图
     * 5. 宽度: 整数型 (可省略); 原始: 宽度
     * 6. 高度: 整数型 (可省略); 原始: 高度
     * 7. 时长: 整数型 (可省略); 原始: 时长
     */
    template <typename... Args>
    const char* Api131(Args&&... args) const {
        return this->CallText("上传小视频", std::forward<Args>(args)...);
    }

    /**
     * @brief API 132: 发送好友xml消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. xml代码: 文本型; 原始: xml代码
     * 4. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 5. Req: 整数型 (传址/参考, 可省略); 原始: Req
     */
    template <typename... Args>
    const char* Api132(Args&&... args) const {
        return this->CallText("发送好友xml消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 133: 发送群xml消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. xml代码: 文本型; 原始: xml代码
     * 4. 匿名发送: 逻辑型 (可省略); 原始: 匿名发送
     */
    template <typename... Args>
    const char* Api133(Args&&... args) const {
        return this->CallText("发送群xml消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 134: 取群成员概况
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api134(Args&&... args) const {
        return this->CallText("取群成员概况", std::forward<Args>(args)...);
    }

    /**
     * @brief API 135: 添加好友_取验证类型
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api135(Args&&... args) const {
        return this->CallText("添加好友_取验证类型", std::forward<Args>(args)...);
    }

    /**
     * @brief API 136: 群聊打卡
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api136(Args&&... args) const {
        return this->CallText("群聊打卡", std::forward<Args>(args)...);
    }

    /**
     * @brief API 137: 群聊签到
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 附加参数: 文本型 (可省略); 原始: 附加参数
     */
    template <typename... Args>
    bool Api137(Args&&... args) const {
        return this->CallBool("群聊签到", std::forward<Args>(args)...);
    }

    /**
     * @brief API 138: 置群聊备注
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 备注: 文本型; 原始: 备注
     */
    template <typename... Args>
    bool Api138(Args&&... args) const {
        return this->CallBool("置群聊备注", std::forward<Args>(args)...);
    }

    /**
     * @brief API 139: 红包转发
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 红包ID: 文本型; 原始: 红包ID
     * 3. 目标对象: 长整数型; 原始: 目标对象
     * 4. Type: 整数型; 原始: Type
     */
    template <typename... Args>
    const char* Api139(Args&&... args) const {
        return this->CallText("红包转发", std::forward<Args>(args)...);
    }

    /**
     * @brief API 140: 发送数据包
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 包体序号: 整数型; 原始: 包体序号
     * 3. 最大等待时长: 整数型 (可省略); 原始: 最大等待时长
     * 4. 数据: 字节集 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    bool Api140(Args&&... args) const {
        return this->CallBool("发送数据包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 141: 请求ssoseq
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    std::int32_t Api141(Args&&... args) const {
        return this->CallInt32("请求ssoseq", std::forward<Args>(args)...);
    }

    /**
     * @brief API 142: 取sessionkey
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api142(Args&&... args) const {
        return this->CallText("取sessionkey", std::forward<Args>(args)...);
    }

    /**
     * @brief API 143: 获取bkn_gtk
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 自定义bkn_gtk: 文本型 (可省略); 原始: 自定义bkn_gtk
     */
    template <typename... Args>
    const char* Api143(Args&&... args) const {
        return this->CallText("获取bkn_gtk", std::forward<Args>(args)...);
    }

    /**
     * @brief API 144: 置好友验证方式
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 验证方式: 整数型; 原始: 验证方式
     * 3. Q_and_A: 文本型 (可省略); 原始: Q_and_A
     */
    template <typename... Args>
    bool Api144(Args&&... args) const {
        return this->CallBool("置好友验证方式", std::forward<Args>(args)...);
    }

    /**
     * @brief API 145: 上传照片墙图片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. pic: 字节集; 原始: pic
     */
    template <typename... Args>
    const char* Api145(Args&&... args) const {
        return this->CallText("上传照片墙图片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 146: 付款
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. QrcodeUrl: 文本型; 原始: QrcodeUrl
     * 3. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 4. 支付密码: 文本型; 原始: 支付密码
     * 5. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api146(Args&&... args) const {
        return this->CallText("付款", std::forward<Args>(args)...);
    }

    /**
     * @brief API 147: 修改支付密码
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 原密码: 文本型; 原始: 原密码
     * 3. 新密码: 文本型; 原始: 新密码
     */
    template <typename... Args>
    const char* Api147(Args&&... args) const {
        return this->CallText("修改支付密码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 148: 账号搜索
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 关键词: 文本型; 原始: 关键词
     */
    template <typename... Args>
    const char* Api148(Args&&... args) const {
        return this->CallText("账号搜索", std::forward<Args>(args)...);
    }

    /**
     * @brief API 149: 添加群_取验证类型
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api149(Args&&... args) const {
        return this->CallText("添加群_取验证类型", std::forward<Args>(args)...);
    }

    /**
     * @brief API 150: 获取红包领取详情
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型 (可省略); 原始: 来源群号
     * 3. 红包文本代码: 文本型; 原始: 红包文本代码
     * 4. 红包类型: 整数型; 原始: 红包类型
     */
    template <typename... Args>
    const char* Api150(Args&&... args) const {
        return this->CallText("获取红包领取详情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 151: 取好友文件下载地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. FileId: 文本型; 原始: FileId
     * 3. FileName: 文本型; 原始: FileName
     */
    template <typename... Args>
    const char* Api151(Args&&... args) const {
        return this->CallText("取好友文件下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 152: 删除群成员_批量
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 群成员QQ: 长整数型 (数组); 原始: 群成员QQ
     * 4. 拒绝加群申请: 逻辑型; 原始: 拒绝加群申请
     */
    template <typename... Args>
    bool Api152(Args&&... args) const {
        return this->CallBool("删除群成员_批量", std::forward<Args>(args)...);
    }

    /**
     * @brief API 153: 取扩列资料
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api153(Args&&... args) const {
        return this->CallText("取扩列资料", std::forward<Args>(args)...);
    }

    /**
     * @brief API 154: 取资料展示设置
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 数据: 资料展示设置数据 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    const char* Api154(Args&&... args) const {
        return this->CallText("取资料展示设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 155: 设置资料展示
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 数据: 资料展示设置数据; 原始: 数据
     */
    template <typename... Args>
    const char* Api155(Args&&... args) const {
        return this->CallText("设置资料展示", std::forward<Args>(args)...);
    }

    /**
     * @brief API 156: 获取当前登录设备信息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 信息: 登录设备信息 (传址/参考); 原始: 信息
     */
    template <typename... Args>
    const char* Api156(Args&&... args) const {
        return this->CallText("获取当前登录设备信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 157: 提取图片文字
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 图片地址: 文本型; 原始: 图片地址
     * 3. 识别结果: 文本型 (传址/参考); 原始: 识别结果
     */
    template <typename... Args>
    bool Api157(Args&&... args) const {
        return this->CallBool("提取图片文字", std::forward<Args>(args)...);
    }

    /**
     * @brief API 158: 取插件文件名
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api158(Args&&... args) const {
        return this->CallText("取插件文件名", std::forward<Args>(args)...);
    }

    /**
     * @brief API 159: TEA加密
     * @return 无
     * @param 参数顺序 1. 内容: 字节集 (传址/参考); 原始: 内容
     * 2. 秘钥: 字节集; 原始: 秘钥
     */
    template <typename... Args>
    void Api159(Args&&... args) const {
        this->CallVoid("TEA加密", std::forward<Args>(args)...);
    }

    /**
     * @brief API 160: TEA解密
     * @return 无
     * @param 参数顺序 1. 内容: 字节集 (传址/参考); 原始: 内容
     * 2. 秘钥: 字节集; 原始: 秘钥
     */
    template <typename... Args>
    void Api160(Args&&... args) const {
        this->CallVoid("TEA解密", std::forward<Args>(args)...);
    }

    /**
     * @brief API 161: 红包数据加密
     * @return 文本型
     * @param 参数顺序 1. str: 文本型; 原始: str
     * 2. random: 整数型; 原始: random
     */
    template <typename... Args>
    const char* Api161(Args&&... args) const {
        return this->CallText("红包数据加密", std::forward<Args>(args)...);
    }

    /**
     * @brief API 162: 红包数据解密
     * @return 文本型
     * @param 参数顺序 1. str: 文本型; 原始: str
     * 2. random: 整数型 (可省略); 原始: random
     */
    template <typename... Args>
    const char* Api162(Args&&... args) const {
        return this->CallText("红包数据解密", std::forward<Args>(args)...);
    }

    /**
     * @brief API 163: 红包msgno计算
     * @return 文本型
     * @param 参数顺序 1. 目标QQ: 长整数型; 原始: 目标QQ
     */
    template <typename... Args>
    const char* Api163(Args&&... args) const {
        return this->CallText("红包msgno计算", std::forward<Args>(args)...);
    }

    /**
     * @brief API 164: 取消精华
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 消息Req: 整数型; 原始: 消息Req
     * 4. 消息Random: 长整数型; 原始: 消息Random
     */
    template <typename... Args>
    bool Api164(Args&&... args) const {
        return this->CallBool("取消精华", std::forward<Args>(args)...);
    }

    /**
     * @brief API 165: 群权限_设置加群方式
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 加群方式: 整数型 (可省略); 原始: 加群方式
     * 4. 问题: 文本型 (可省略); 原始: 问题
     * 5. 答案: 文本型 (可省略); 原始: 答案
     */
    template <typename... Args>
    bool Api165(Args&&... args) const {
        return this->CallBool("群权限_设置加群方式", std::forward<Args>(args)...);
    }

    /**
     * @brief API 166: 群权限_群幸运字符
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否开启: 逻辑型; 原始: 是否开启
     */
    template <typename... Args>
    bool Api166(Args&&... args) const {
        return this->CallBool("群权限_群幸运字符", std::forward<Args>(args)...);
    }

    /**
     * @brief API 167: 群权限_一起写
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否允许: 逻辑型; 原始: 是否允许
     */
    template <typename... Args>
    bool Api167(Args&&... args) const {
        return this->CallBool("群权限_一起写", std::forward<Args>(args)...);
    }

    /**
     * @brief API 168: 取QQ空间cookie
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api168(Args&&... args) const {
        return this->CallText("取QQ空间cookie", std::forward<Args>(args)...);
    }

    /**
     * @brief API 169: 框架是否为单Q
     * @return 逻辑型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    bool Api169(Args&&... args) const {
        return this->CallBool("框架是否为单Q", std::forward<Args>(args)...);
    }

    /**
     * @brief API 170: 修改指定QQ缓存密码
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 新密码: 文本型; 原始: 新密码
     */
    template <typename... Args>
    bool Api170(Args&&... args) const {
        return this->CallBool("修改指定QQ缓存密码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 171: 处理群验证事件_风险号
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 触发QQ: 长整数型; 原始: 触发QQ
     * 4. 消息Seq: 长整数型; 原始: 消息Seq
     * 5. 操作类型: 整数型; 原始: 操作类型
     * 6. 事件类型: 整数型; 原始: 事件类型
     * 7. 拒绝理由: 文本型 (可省略); 原始: 拒绝理由
     */
    template <typename... Args>
    void Api171(Args&&... args) const {
        this->CallVoid("处理群验证事件_风险号", std::forward<Args>(args)...);
    }

    /**
     * @brief API 172: 查询网址安全性
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 网址: 文本型; 原始: 网址
     */
    template <typename... Args>
    std::int32_t Api172(Args&&... args) const {
        return this->CallInt32("查询网址安全性", std::forward<Args>(args)...);
    }

    /**
     * @brief API 173: 消息合并转发至好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 聊天记录: 群消息数据 (数组); 原始: 聊天记录
     * 4. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 5. Req: 整数型 (传址/参考, 可省略); 原始: Req
     * 6. 消息记录来源: 文本型 (可省略); 原始: 消息记录来源
     */
    template <typename... Args>
    const char* Api173(Args&&... args) const {
        return this->CallText("消息合并转发至好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 174: 消息合并转发至群
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 聊天记录: 群消息数据 (数组); 原始: 聊天记录
     * 4. 匿名发送: 逻辑型 (可省略); 原始: 匿名发送
     * 5. 消息记录来源: 文本型 (可省略); 原始: 消息记录来源
     */
    template <typename... Args>
    const char* Api174(Args&&... args) const {
        return this->CallText("消息合并转发至群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 175: 取卡片消息代码
     * @return 文本型
     * @param 参数顺序 1. 卡片消息文本代码: 文本型; 原始: 卡片消息文本代码
     */
    template <typename... Args>
    const char* Api175(Args&&... args) const {
        return this->CallText("取卡片消息代码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 176: 禁言群匿名
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 匿名昵称: 文本型; 原始: 匿名昵称
     * 4. 匿名标识: 字节集; 原始: 匿名标识
     * 5. 禁言时长: 整数型; 原始: 禁言时长
     */
    template <typename... Args>
    bool Api176(Args&&... args) const {
        return this->CallBool("禁言群匿名", std::forward<Args>(args)...);
    }

    /**
     * @brief API 177: 置文件下载
     * @return 整数型
     * @param 参数顺序 1. 文件下载地址: 文本型; 原始: 文件下载地址
     * 2. 文件保存路径: 文本型; 原始: 文件保存路径
     * 3. 下载回调函数: 子程序指针 (可省略); 原始: 下载回调函数
     * 4. 文件名: 文本型 (可省略); 原始: 文件名
     * 5. 下载起点: 整数型 (可省略); 原始: 下载起点
     */
    template <typename... Args>
    std::int32_t Api177(Args&&... args) const {
        return this->CallInt32("置文件下载", std::forward<Args>(args)...);
    }

    /**
     * @brief API 178: 领取私聊普通红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源QQ: 长整数型; 原始: 来源QQ
     * 3. 红包文本代码: 文本型; 原始: 红包文本代码
     * 4. 类型: 整数型 (可省略); 原始: 类型
     */
    template <typename... Args>
    const char* Api178(Args&&... args) const {
        return this->CallText("领取私聊普通红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 179: 领取群聊专属红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源群号: 长整数型; 原始: 来源群号
     * 3. 来源QQ: 长整数型; 原始: 来源QQ
     * 4. 红包文本代码: 文本型; 原始: 红包文本代码
     */
    template <typename... Args>
    const char* Api179(Args&&... args) const {
        return this->CallText("领取群聊专属红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 180: 加载网页
     * @return 逻辑型
     * @param 参数顺序 1. 网址: 文本型; 原始: 网址
     */
    template <typename... Args>
    bool Api180(Args&&... args) const {
        return this->CallBool("加载网页", std::forward<Args>(args)...);
    }

    /**
     * @brief API 181: 压缩包_7za解压
     * @return 无
     * @param 参数顺序 1. 压缩包路径: 文本型; 原始: 压缩包路径
     * 2. 解压保存路径: 文本型; 原始: 解压保存路径
     * 3. 解压密码: 文本型; 原始: 解压密码
     * 4. 跳过已存在的文件: 逻辑型; 原始: 跳过已存在的文件
     */
    template <typename... Args>
    void Api181(Args&&... args) const {
        this->CallVoid("压缩包_7za解压", std::forward<Args>(args)...);
    }

    /**
     * @brief API 182: 压缩包_7za压缩
     * @return 无
     * @param 参数顺序 1. 保存路径: 文本型; 原始: 保存路径
     * 2. 欲压缩的文件: 文本型; 原始: 欲压缩的文件
     * 3. 压缩格式: 文本型; 原始: 压缩格式
     * 4. 压缩等级: 整数型; 原始: 压缩等级
     * 5. 压缩密码: 文本型; 原始: 压缩密码
     */
    template <typename... Args>
    void Api182(Args&&... args) const {
        this->CallVoid("压缩包_7za压缩", std::forward<Args>(args)...);
    }

    /**
     * @brief API 183: 发送讨论组消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 消息内容: 文本型; 原始: 消息内容
     */
    template <typename... Args>
    const char* Api183(Args&&... args) const {
        return this->CallText("发送讨论组消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 184: 发送讨论组json消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. Json代码: 文本型; 原始: Json代码
     */
    template <typename... Args>
    const char* Api184(Args&&... args) const {
        return this->CallText("发送讨论组json消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 185: 发送讨论组xml消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. Xml代码: 文本型; 原始: Xml代码
     */
    template <typename... Args>
    const char* Api185(Args&&... args) const {
        return this->CallText("发送讨论组xml消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 186: 发送讨论组临时消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 消息内容: 文本型; 原始: 消息内容
     * 5. 消息Random: 长整数型 (传址/参考, 可省略); 原始: 消息Random
     * 6. 消息Req: 整数型 (传址/参考, 可省略); 原始: 消息Req
     */
    template <typename... Args>
    const char* Api186(Args&&... args) const {
        return this->CallText("发送讨论组临时消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 187: 撤回消息_讨论组
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 消息Random: 长整数型; 原始: 消息Random
     * 4. 消息Req: 整数型; 原始: 消息Req
     */
    template <typename... Args>
    bool Api187(Args&&... args) const {
        return this->CallBool("撤回消息_讨论组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 188: 回复QQ咨询会话
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 会话Token: 字节集; 原始: 会话Token
     * 4. 消息内容: 文本型; 原始: 消息内容
     * 5. 消息Random: 长整数型 (传址/参考, 可省略); 原始: 消息Random
     * 6. 消息Req: 整数型 (传址/参考, 可省略); 原始: 消息Req
     */
    template <typename... Args>
    const char* Api188(Args&&... args) const {
        return this->CallText("回复QQ咨询会话", std::forward<Args>(args)...);
    }

    /**
     * @brief API 189: 发送订阅号私聊消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 订阅号Id: 长整数型; 原始: 订阅号Id
     * 3. 消息内容: 文本型; 原始: 消息内容
     * 4. 消息Random: 长整数型 (传址/参考, 可省略); 原始: 消息Random
     * 5. 消息Req: 整数型 (传址/参考, 可省略); 原始: 消息Req
     */
    template <typename... Args>
    const char* Api189(Args&&... args) const {
        return this->CallText("发送订阅号私聊消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 190: 取讨论组名称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 讨论组Id: 文本型; 原始: 讨论组Id
     */
    template <typename... Args>
    const char* Api190(Args&&... args) const {
        return this->CallText("取讨论组名称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 191: 修改讨论组名称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 新名称: 文本型; 原始: 新名称
     */
    template <typename... Args>
    bool Api191(Args&&... args) const {
        return this->CallBool("修改讨论组名称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 192: 取讨论组成员列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 数据: 讨论组成员信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api192(Args&&... args) const {
        return this->CallInt32("取讨论组成员列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 193: 强制取自身匿名Id
     * @return 长整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    std::int64_t Api193(Args&&... args) const {
        return this->CallInt64("强制取自身匿名Id", std::forward<Args>(args)...);
    }

    /**
     * @brief API 194: 取订阅号列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 数据: 订阅号信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api194(Args&&... args) const {
        return this->CallInt32("取订阅号列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 195: 取讨论组列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 数据: 讨论组信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api195(Args&&... args) const {
        return this->CallInt32("取讨论组列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 196: 邀请好友加群_批量
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 目标群号: 长整数型; 原始: 目标群号
     * 3. 邀请QQ: 长整数型 (数组); 原始: 邀请QQ
     * 4. 来源群号: 长整数型 (可省略); 原始: 来源群号
     */
    template <typename... Args>
    bool Api196(Args&&... args) const {
        return this->CallBool("邀请好友加群_批量", std::forward<Args>(args)...);
    }

    /**
     * @brief API 197: 邀请好友加入讨论组_批量
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 目标讨论组Id: 长整数型; 原始: 目标讨论组Id
     * 3. 邀请QQ: 长整数型 (数组); 原始: 邀请QQ
     * 4. 来源群号: 长整数型 (可省略); 原始: 来源群号
     */
    template <typename... Args>
    bool Api197(Args&&... args) const {
        return this->CallBool("邀请好友加入讨论组_批量", std::forward<Args>(args)...);
    }

    /**
     * @brief API 198: 取框架到期时间
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api198(Args&&... args) const {
        return this->CallText("取框架到期时间", std::forward<Args>(args)...);
    }

    /**
     * @brief API 199: 讨论组口令红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 口令: 文本型; 原始: 口令
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api199(Args&&... args) const {
        return this->CallText("讨论组口令红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 200: 讨论组拼手气红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 祝福语: 文本型; 原始: 祝福语
     * 6. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 7. 支付密码: 文本型; 原始: 支付密码
     * 8. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 9. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api200(Args&&... args) const {
        return this->CallText("讨论组拼手气红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 201: 讨论组普通红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 祝福语: 文本型; 原始: 祝福语
     * 6. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 7. 支付密码: 文本型; 原始: 支付密码
     * 8. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 9. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api201(Args&&... args) const {
        return this->CallText("讨论组普通红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 202: 讨论组画图红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 题目名: 文本型; 原始: 题目名
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api202(Args&&... args) const {
        return this->CallText("讨论组画图红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 203: 讨论组语音红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 语音口令: 文本型; 原始: 语音口令
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api203(Args&&... args) const {
        return this->CallText("讨论组语音红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 204: 讨论组接龙红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 接龙内容: 文本型; 原始: 接龙内容
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api204(Args&&... args) const {
        return this->CallText("讨论组接龙红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 205: 讨论组专属红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 领取人: 文本型; 原始: 领取人
     * 6. 祝福语: 文本型; 原始: 祝福语
     * 7. 是否均分: 逻辑型 (可省略); 原始: 是否均分
     * 8. 支付密码: 文本型; 原始: 支付密码
     * 9. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 10. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api205(Args&&... args) const {
        return this->CallText("讨论组专属红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 206: 领取讨论组专属红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源讨论组Id: 长整数型; 原始: 来源讨论组Id
     * 3. 来源QQ: 长整数型; 原始: 来源QQ
     * 4. 红包文本代码: 文本型; 原始: 红包文本代码
     */
    template <typename... Args>
    const char* Api206(Args&&... args) const {
        return this->CallText("领取讨论组专属红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 207: 取讨论组未领红包
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 数据: 群未领红包数据 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api207(Args&&... args) const {
        return this->CallInt32("取讨论组未领红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 208: 取讨论组文件下载地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 文件id: 文本型; 原始: 文件id
     * 4. 文件名: 文本型; 原始: 文件名
     */
    template <typename... Args>
    const char* Api208(Args&&... args) const {
        return this->CallText("取讨论组文件下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 209: 发送QQ咨询会话
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 消息内容: 文本型; 原始: 消息内容
     * 4. 消息Random: 长整数型 (传址/参考, 可省略); 原始: 消息Random
     * 5. 消息Req: 整数型 (传址/参考, 可省略); 原始: 消息Req
     */
    template <typename... Args>
    const char* Api209(Args&&... args) const {
        return this->CallText("发送QQ咨询会话", std::forward<Args>(args)...);
    }

    /**
     * @brief API 210: 创建群聊
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 邀请QQ: 长整数型 (数组); 原始: 邀请QQ
     * 3. 来源群号: 长整数型 (可省略); 原始: 来源群号
     * 4. 新群群号: 长整数型 (传址/参考); 原始: 新群群号
     */
    template <typename... Args>
    const char* Api210(Args&&... args) const {
        return this->CallText("创建群聊", std::forward<Args>(args)...);
    }

    /**
     * @brief API 211: 取群应用列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 数据: 群应用信息 (传址/参考, 数组); 原始: 数据
     */
    template <typename... Args>
    std::int32_t Api211(Args&&... args) const {
        return this->CallInt32("取群应用列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 212: 退出讨论组
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     */
    template <typename... Args>
    bool Api212(Args&&... args) const {
        return this->CallBool("退出讨论组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 213: 群验证消息接收设置
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 接收验证消息: 逻辑型 (可省略); 原始: 接收验证消息
     */
    template <typename... Args>
    bool Api213(Args&&... args) const {
        return this->CallBool("群验证消息接收设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 214: 转让群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    bool Api214(Args&&... args) const {
        return this->CallBool("转让群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 215: 修改好友备注
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 备注: 文本型; 原始: 备注
     */
    template <typename... Args>
    bool Api215(Args&&... args) const {
        return this->CallBool("修改好友备注", std::forward<Args>(args)...);
    }

    /**
     * @brief API 216: 删除讨论组成员
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    bool Api216(Args&&... args) const {
        return this->CallBool("删除讨论组成员", std::forward<Args>(args)...);
    }

    /**
     * @brief API 217: 讨论组文件转发至群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源讨论组Id: 长整数型; 原始: 来源讨论组Id
     * 3. 目标群号: 长整数型; 原始: 目标群号
     * 4. fileId: 文本型; 原始: fileId
     * 5. filename: 文本型; 原始: filename
     * 6. filesize: 长整数型; 原始: filesize
     */
    template <typename... Args>
    bool Api217(Args&&... args) const {
        return this->CallBool("讨论组文件转发至群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 218: 讨论组文件转发至好友
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 来源讨论组Id: 长整数型; 原始: 来源讨论组Id
     * 3. 目标QQ: 长整数型; 原始: 目标QQ
     * 4. fileId: 文本型; 原始: fileId
     * 5. filename: 文本型; 原始: filename
     * 6. filesize: 长整数型; 原始: filesize
     * 7. Req: 整数型 (传址/参考, 可省略); 原始: Req
     * 8. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 9. time: 整数型 (传址/参考, 可省略); 原始: time
     */
    template <typename... Args>
    bool Api218(Args&&... args) const {
        return this->CallBool("讨论组文件转发至好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 219: 取QQ头像
     * @return 文本型
     * @param 参数顺序 1. 对方QQ: 长整数型; 原始: 对方QQ
     * 2. 高清原图: 逻辑型 (可省略); 原始: 高清原图
     */
    template <typename... Args>
    const char* Api219(Args&&... args) const {
        return this->CallText("取QQ头像", std::forward<Args>(args)...);
    }

    /**
     * @brief API 220: 取群头像
     * @return 文本型
     * @param 参数顺序 1. 目标群号: 长整数型; 原始: 目标群号
     */
    template <typename... Args>
    const char* Api220(Args&&... args) const {
        return this->CallText("取群头像", std::forward<Args>(args)...);
    }

    /**
     * @brief API 221: 取大表情图片下载地址
     * @return 文本型
     * @param 参数顺序 1. 大表情文本代码: 文本型; 原始: 大表情文本代码
     * 2. 长: 整数型 (可省略); 原始: 长
     * 3. 宽: 整数型 (可省略); 原始: 宽
     */
    template <typename... Args>
    const char* Api221(Args&&... args) const {
        return this->CallText("取大表情图片下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 222: 拉起群收款
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 待付款成员: 待付款者信息 (数组); 原始: 待付款成员
     * 4. 收款留言: 文本型; 原始: 收款留言
     * 5. 收款订单号: 文本型 (传址/参考, 可省略); 原始: 收款订单号
     */
    template <typename... Args>
    const char* Api222(Args&&... args) const {
        return this->CallText("拉起群收款", std::forward<Args>(args)...);
    }

    /**
     * @brief API 223: 结束群收款
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 收款订单号: 文本型; 原始: 收款订单号
     */
    template <typename... Args>
    const char* Api223(Args&&... args) const {
        return this->CallText("结束群收款", std::forward<Args>(args)...);
    }

    /**
     * @brief API 224: 查询群收款状态
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 收款订单号: 文本型; 原始: 收款订单号
     * 3. 收款数据: 群收款信息 (传址/参考, 可省略); 原始: 收款数据
     */
    template <typename... Args>
    const char* Api224(Args&&... args) const {
        return this->CallText("查询群收款状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 225: 支付群收款
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 收款发起人: 长整数型; 原始: 收款发起人
     * 3. 收款订单号: 文本型; 原始: 收款订单号
     * 4. 支付金额: 整数型; 原始: 支付金额
     * 5. 支付密码: 文本型; 原始: 支付密码
     * 6. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 7. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api225(Args&&... args) const {
        return this->CallText("支付群收款", std::forward<Args>(args)...);
    }

    /**
     * @brief API 226: 消息合并转发至讨论组
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 3. 聊天记录: 群消息数据 (数组); 原始: 聊天记录
     * 4. 消息记录来源: 文本型 (可省略); 原始: 消息记录来源
     */
    template <typename... Args>
    const char* Api226(Args&&... args) const {
        return this->CallText("消息合并转发至讨论组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 227: 群收款_催单
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 收款订单号: 文本型; 原始: 收款订单号
     */
    template <typename... Args>
    const char* Api227(Args&&... args) const {
        return this->CallText("群收款_催单", std::forward<Args>(args)...);
    }

    /**
     * @brief API 228: 取好友Diy名片数据
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. Diy名片数据: 文本型 (传址/参考); 原始: Diy名片数据
     */
    template <typename... Args>
    bool Api228(Args&&... args) const {
        return this->CallBool("取好友Diy名片数据", std::forward<Args>(args)...);
    }

    /**
     * @brief API 229: 设置Diy名片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. Diy名片数据: 文本型; 原始: Diy名片数据
     */
    template <typename... Args>
    const char* Api229(Args&&... args) const {
        return this->CallText("设置Diy名片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 230: 取框架主窗口句柄
     * @return 整数型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    std::int32_t Api230(Args&&... args) const {
        return this->CallInt32("取框架主窗口句柄", std::forward<Args>(args)...);
    }

    /**
     * @brief API 231: 好友生僻字红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 对方QQ: 长整数型; 原始: 对方QQ
     * 5. 生僻字: 文本型; 原始: 生僻字
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api231(Args&&... args) const {
        return this->CallText("好友生僻字红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 232: 群聊生僻字红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 生僻字: 文本型; 原始: 生僻字
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api232(Args&&... args) const {
        return this->CallText("群聊生僻字红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 233: 讨论组生僻字红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 讨论组Id: 长整数型; 原始: 讨论组Id
     * 5. 生僻字: 文本型; 原始: 生僻字
     * 6. 支付密码: 文本型; 原始: 支付密码
     * 7. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 8. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api233(Args&&... args) const {
        return this->CallText("讨论组生僻字红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 234: 支付代付请求
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 代付订单号: 文本型; 原始: 代付订单号
     * 3. 支付金额: 整数型; 原始: 支付金额
     * 4. 支付密码: 文本型; 原始: 支付密码
     * 5. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 6. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api234(Args&&... args) const {
        return this->CallText("支付代付请求", std::forward<Args>(args)...);
    }

    /**
     * @brief API 235: 查询代付状态
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 代付订单号: 文本型; 原始: 代付订单号
     * 3. 代付数据: 文本型; 原始: 代付数据
     */
    template <typename... Args>
    const char* Api235(Args&&... args) const {
        return this->CallText("查询代付状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 236: 拉起代付
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 订单号: 文本型; 原始: 订单号
     * 3. 代付QQ列表: 文本型; 原始: 代付QQ列表
     */
    template <typename... Args>
    const char* Api236(Args&&... args) const {
        return this->CallText("拉起代付", std::forward<Args>(args)...);
    }

    /**
     * @brief API 237: 取好友能量值与QID
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 能量值: 整数型 (传址/参考, 可省略); 原始: 能量值
     * 4. QID: 文本型 (传址/参考, 可省略); 原始: QID
     */
    template <typename... Args>
    bool Api237(Args&&... args) const {
        return this->CallBool("取好友能量值与QID", std::forward<Args>(args)...);
    }

    /**
     * @brief API 238: 创建小栗子文本代码解析类对象
     * @return 小栗子文本代码解析类
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    std::intptr_t Api238(Args&&... args) const {
        return this->CallRaw("创建小栗子文本代码解析类对象", std::forward<Args>(args)...);
    }

    /**
     * @brief API 239: 文字转语音
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 文本内容: 文本型; 原始: 文本内容
     * 3. 语音结果: 字节集 (传址/参考); 原始: 语音结果
     */
    template <typename... Args>
    const char* Api239(Args&&... args) const {
        return this->CallText("文字转语音", std::forward<Args>(args)...);
    }

    /**
     * @brief API 240: 翻译
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 源语言语种: 文本型; 原始: 源语言语种
     * 3. 目标语言语种: 文本型; 原始: 目标语言语种
     * 4. 原文: 文本型; 原始: 原文
     * 5. 翻译结果: 文本型 (传址/参考); 原始: 翻译结果
     */
    template <typename... Args>
    const char* Api240(Args&&... args) const {
        return this->CallText("翻译", std::forward<Args>(args)...);
    }

    /**
     * @brief API 241: 撤回消息_群聊s
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 消息Random: 长整数型; 原始: 消息Random
     * 4. 消息Req: 整数型; 原始: 消息Req
     */
    template <typename... Args>
    const char* Api241(Args&&... args) const {
        return this->CallText("撤回消息_群聊s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 242: QQ列表_添加手表协议QQ
     * @return 文本型
     * @param 参数顺序 1. QQ: 长整数型; 原始: QQ
     * 2. 品牌: 文本型 (可省略); 原始: 品牌
     * 3. 型号: 文本型 (可省略); 原始: 型号
     */
    template <typename... Args>
    const char* Api242(Args&&... args) const {
        return this->CallText("QQ列表_添加手表协议QQ", std::forward<Args>(args)...);
    }

    /**
     * @brief API 243: QQ列表_二维码登录_拉取二维码
     * @return 文本型
     * @param 参数顺序 1. QQ: 长整数型; 原始: QQ
     * 2. 二维码数据: 字节集 (传址/参考); 原始: 二维码数据
     */
    template <typename... Args>
    const char* Api243(Args&&... args) const {
        return this->CallText("QQ列表_二维码登录_拉取二维码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 244: QQ列表_二维码登录_查询二维码状态
     * @return 文本型
     * @param 参数顺序 1. QQ: 长整数型; 原始: QQ
     */
    template <typename... Args>
    const char* Api244(Args&&... args) const {
        return this->CallText("QQ列表_二维码登录_查询二维码状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 245: 拍一拍好友在线状态
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    bool Api245(Args&&... args) const {
        return this->CallBool("拍一拍好友在线状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 246: 发送验证消息会话消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 消息内容: 文本型; 原始: 消息内容
     * 4. 消息Random: 长整数型 (传址/参考, 可省略); 原始: 消息Random
     * 5. 消息Req: 整数型 (传址/参考, 可省略); 原始: 消息Req
     */
    template <typename... Args>
    const char* Api246(Args&&... args) const {
        return this->CallText("发送验证消息会话消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 247: 回复验证消息会话消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     * 3. 会话Token: 字节集; 原始: 会话Token
     * 4. 消息内容: 文本型; 原始: 消息内容
     * 5. 消息Random: 长整数型 (传址/参考, 可省略); 原始: 消息Random
     * 6. 消息Req: 整数型 (传址/参考, 可省略); 原始: 消息Req
     */
    template <typename... Args>
    const char* Api247(Args&&... args) const {
        return this->CallText("回复验证消息会话消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 248: 取群文件内存利用状态
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 已使用容量: 长整数型 (传址/参考); 原始: 已使用容量
     * 4. 总容量: 长整数型 (传址/参考); 原始: 总容量
     */
    template <typename... Args>
    const char* Api248(Args&&... args) const {
        return this->CallText("取群文件内存利用状态", std::forward<Args>(args)...);
    }

    /**
     * @brief API 249: 取群文件总数
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 已上传文件数: 长整数型 (传址/参考); 原始: 已上传文件数
     * 4. 文件数量上限: 长整数型 (传址/参考); 原始: 文件数量上限
     */
    template <typename... Args>
    const char* Api249(Args&&... args) const {
        return this->CallText("取群文件总数", std::forward<Args>(args)...);
    }

    /**
     * @brief API 250: 上传涂鸦
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 模型Id: 整数型 (可省略); 原始: 模型Id
     * 3. 涂鸦数据: 字节集; 原始: 涂鸦数据
     */
    template <typename... Args>
    const char* Api250(Args&&... args) const {
        return this->CallText("上传涂鸦", std::forward<Args>(args)...);
    }

    /**
     * @brief API 251: 删除群成员_批量s
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 欲移除群成员列表: 欲移除群成员列表 (数组); 原始: 欲移除群成员列表
     */
    template <typename... Args>
    bool Api251(Args&&... args) const {
        return this->CallBool("删除群成员_批量s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 252: 上传好友文件s
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. 文件路径: 文本型; 原始: 文件路径
     * 4. 上传进度回调函数: 整数型 (可省略); 原始: 上传进度回调函数
     * 5. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 6. Req: 整数型 (传址/参考, 可省略); 原始: Req
     */
    template <typename... Args>
    const char* Api252(Args&&... args) const {
        return this->CallText("上传好友文件s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 253: 上传群文件s
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 文件路径: 文本型; 原始: 文件路径
     * 4. 文件夹名: 文本型 (可省略); 原始: 文件夹名
     * 5. 上传进度回调函数: 整数型 (可省略); 原始: 上传进度回调函数
     */
    template <typename... Args>
    const char* Api253(Args&&... args) const {
        return this->CallText("上传群文件s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 254: 取群艾特全体剩余次数
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    std::int32_t Api254(Args&&... args) const {
        return this->CallInt32("取群艾特全体剩余次数", std::forward<Args>(args)...);
    }

    /**
     * @brief API 255: 是否已开启QQ咨询
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    std::int32_t Api255(Args&&... args) const {
        return this->CallInt32("是否已开启QQ咨询", std::forward<Args>(args)...);
    }

    /**
     * @brief API 256: 创建群相册
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 相册名: 文本型; 原始: 相册名
     * 4. 相册描述: 文本型; 原始: 相册描述
     */
    template <typename... Args>
    const char* Api256(Args&&... args) const {
        return this->CallText("创建群相册", std::forward<Args>(args)...);
    }

    /**
     * @brief API 257: 删除群相册
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 相册Id: 文本型; 原始: 相册Id
     */
    template <typename... Args>
    const char* Api257(Args&&... args) const {
        return this->CallText("删除群相册", std::forward<Args>(args)...);
    }

    /**
     * @brief API 258: 取群相册列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api258(Args&&... args) const {
        return this->CallText("取群相册列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 259: 取群相册照片列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 相册Id: 文本型; 原始: 相册Id
     * 4. 获取数量: 整数型; 原始: 获取数量
     */
    template <typename... Args>
    const char* Api259(Args&&... args) const {
        return this->CallText("取群相册照片列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 260: 删除群相册照片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 相册Id: 文本型; 原始: 相册Id
     * 4. 照片Id: 文本型; 原始: 照片Id
     */
    template <typename... Args>
    const char* Api260(Args&&... args) const {
        return this->CallText("删除群相册照片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 261: 修改群相册信息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 相册Id: 文本型; 原始: 相册Id
     * 4. 相册名: 文本型; 原始: 相册名
     * 5. 相册描述: 文本型; 原始: 相册描述
     * 6. 相册置顶: 逻辑型 (可省略); 原始: 相册置顶
     */
    template <typename... Args>
    const char* Api261(Args&&... args) const {
        return this->CallText("修改群相册信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 262: 取群Id_从缓存
     * @return 长整数型
     * @param 参数顺序 1. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    std::int64_t Api262(Args&&... args) const {
        return this->CallInt64("取群Id_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 263: 上传频道图片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. pic: 字节集; 原始: pic
     * 5. 宽度: 整数型 (可省略); 原始: 宽度
     * 6. 高度: 整数型 (可省略); 原始: 高度
     * 7. 动图: 逻辑型 (可省略); 原始: 动图
     */
    template <typename... Args>
    const char* Api263(Args&&... args) const {
        return this->CallText("上传频道图片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 264: 发送频道消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 消息内容: 文本型; 原始: 消息内容
     */
    template <typename... Args>
    const char* Api264(Args&&... args) const {
        return this->CallText("发送频道消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 265: 发送频道私信消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 私信频道Id: 长整数型; 原始: 私信频道Id
     * 3. 私信子频道Id: 长整数型; 原始: 私信子频道Id
     * 4. 消息内容: 文本型; 原始: 消息内容
     */
    template <typename... Args>
    const char* Api265(Args&&... args) const {
        return this->CallText("发送频道私信消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 266: 取私信频道Id
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 目标频道用户Id: 长整数型; 原始: 目标频道用户Id
     * 4. 私信频道Id: 长整数型 (传址/参考); 原始: 私信频道Id
     * 5. 私信子频道Id: 长整数型 (传址/参考); 原始: 私信子频道Id
     */
    template <typename... Args>
    bool Api266(Args&&... args) const {
        return this->CallBool("取私信频道Id", std::forward<Args>(args)...);
    }

    /**
     * @brief API 267: 频道消息粘贴表情
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 消息req: 整数型; 原始: 消息req
     * 5. 表情Id: 文本型; 原始: 表情Id
     * 6. 是否为emoji: 逻辑型 (可省略); 原始: 是否为emoji
     * 7. 取消粘贴: 逻辑型 (可省略); 原始: 取消粘贴
     */
    template <typename... Args>
    bool Api267(Args&&... args) const {
        return this->CallBool("频道消息粘贴表情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 268: 撤回频道消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 消息req: 整数型; 原始: 消息req
     */
    template <typename... Args>
    const char* Api268(Args&&... args) const {
        return this->CallText("撤回频道消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 269: 撤回频道私信消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 私信频道Id: 长整数型; 原始: 私信频道Id
     * 3. 私信子频道Id: 长整数型; 原始: 私信子频道Id
     * 4. 消息req: 整数型; 原始: 消息req
     */
    template <typename... Args>
    const char* Api269(Args&&... args) const {
        return this->CallText("撤回频道私信消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 270: 设置子频道精华消息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 消息req: 整数型; 原始: 消息req
     * 5. 移除: 逻辑型 (可省略); 原始: 移除
     */
    template <typename... Args>
    bool Api270(Args&&... args) const {
        return this->CallBool("设置子频道精华消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 271: 禁言频道成员
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 4. 禁言秒数: 整数型 (可省略); 原始: 禁言秒数
     */
    template <typename... Args>
    bool Api271(Args&&... args) const {
        return this->CallBool("禁言频道成员", std::forward<Args>(args)...);
    }

    /**
     * @brief API 272: 设置频道全员禁言
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 禁言秒数: 整数型 (可省略); 原始: 禁言秒数
     */
    template <typename... Args>
    bool Api272(Args&&... args) const {
        return this->CallBool("设置频道全员禁言", std::forward<Args>(args)...);
    }

    /**
     * @brief API 273: 移除频道成员
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 4. 拉入黑名单: 逻辑型 (可省略); 原始: 拉入黑名单
     */
    template <typename... Args>
    bool Api273(Args&&... args) const {
        return this->CallBool("移除频道成员", std::forward<Args>(args)...);
    }

    /**
     * @brief API 274: 移除频道成员_批量
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道用户Id列表: 长整数型 (数组); 原始: 频道用户Id列表
     * 4. 拉入黑名单: 逻辑型 (可省略); 原始: 拉入黑名单
     */
    template <typename... Args>
    bool Api274(Args&&... args) const {
        return this->CallBool("移除频道成员_批量", std::forward<Args>(args)...);
    }

    /**
     * @brief API 275: 退出频道
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     */
    template <typename... Args>
    bool Api275(Args&&... args) const {
        return this->CallBool("退出频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 276: 更改频道名称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 新名称: 文本型; 原始: 新名称
     * 4. 字色: 长整数型 (可省略); 原始: 字色
     */
    template <typename... Args>
    bool Api276(Args&&... args) const {
        return this->CallBool("更改频道名称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 277: 修改频道简介
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 新简介: 文本型; 原始: 新简介
     */
    template <typename... Args>
    bool Api277(Args&&... args) const {
        return this->CallBool("修改频道简介", std::forward<Args>(args)...);
    }

    /**
     * @brief API 278: 设置我的频道昵称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道昵称: 文本型; 原始: 频道昵称
     */
    template <typename... Args>
    bool Api278(Args&&... args) const {
        return this->CallBool("设置我的频道昵称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 279: 置子频道观看权限
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 类型: 整数型 (可省略); 原始: 类型
     * 5. 指定身份组Id: 长整数型 (可省略, 数组); 原始: 指定身份组Id
     * 6. 是否取消身份组观看权限: 逻辑型 (可省略); 原始: 是否取消身份组观看权限
     * 7. 指定频道成员Id: 长整数型 (可省略, 数组); 原始: 指定频道成员Id
     * 8. 是否取消频道成员观看权限: 逻辑型 (可省略); 原始: 是否取消频道成员观看权限
     */
    template <typename... Args>
    bool Api279(Args&&... args) const {
        return this->CallBool("置子频道观看权限", std::forward<Args>(args)...);
    }

    /**
     * @brief API 280: 置子频道发言权限
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 类型: 整数型 (可省略); 原始: 类型
     * 5. 指定身份组Id: 长整数型 (可省略, 数组); 原始: 指定身份组Id
     * 6. 是否取消身份组发言权限: 逻辑型 (可省略); 原始: 是否取消身份组发言权限
     * 7. 指定频道成员: 长整数型 (可省略, 数组); 原始: 指定频道成员
     * 8. 是否取消频道成员发言权限: 逻辑型 (可省略); 原始: 是否取消频道成员发言权限
     */
    template <typename... Args>
    bool Api280(Args&&... args) const {
        return this->CallBool("置子频道发言权限", std::forward<Args>(args)...);
    }

    /**
     * @brief API 281: 子频道消息提醒设置
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 对成员打开消息提醒: 逻辑型 (可省略); 原始: 对成员打开消息提醒
     */
    template <typename... Args>
    bool Api281(Args&&... args) const {
        return this->CallBool("子频道消息提醒设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 282: 子频道慢速模式设置
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 模式: 整数型 (可省略); 原始: 模式
     */
    template <typename... Args>
    bool Api282(Args&&... args) const {
        return this->CallBool("子频道慢速模式设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 283: 修改子频道名称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 新名称: 文本型; 原始: 新名称
     */
    template <typename... Args>
    bool Api283(Args&&... args) const {
        return this->CallBool("修改子频道名称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 284: 删除子频道
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     */
    template <typename... Args>
    bool Api284(Args&&... args) const {
        return this->CallBool("删除子频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 285: 修改我的频道用户信息_昵称
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 新昵称: 文本型; 原始: 新昵称
     */
    template <typename... Args>
    bool Api285(Args&&... args) const {
        return this->CallBool("修改我的频道用户信息_昵称", std::forward<Args>(args)...);
    }

    /**
     * @brief API 286: 修改我的频道用户信息_性别
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 性别: 整数型 (可省略); 原始: 性别
     */
    template <typename... Args>
    bool Api286(Args&&... args) const {
        return this->CallBool("修改我的频道用户信息_性别", std::forward<Args>(args)...);
    }

    /**
     * @brief API 287: 修改我的频道用户信息_年龄
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 年龄: 整数型 (可省略); 原始: 年龄
     */
    template <typename... Args>
    bool Api287(Args&&... args) const {
        return this->CallBool("修改我的频道用户信息_年龄", std::forward<Args>(args)...);
    }

    /**
     * @brief API 288: 修改我的频道用户信息_所在地
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 国家代码: 整数型; 原始: 国家代码
     * 3. 国家名称: 文本型; 原始: 国家名称
     * 4. 省份代码: 整数型; 原始: 省份代码
     * 5. 省份名称: 文本型; 原始: 省份名称
     * 6. 市区代码: 整数型; 原始: 市区代码
     * 7. 市区名称: 文本型; 原始: 市区名称
     */
    template <typename... Args>
    bool Api288(Args&&... args) const {
        return this->CallBool("修改我的频道用户信息_所在地", std::forward<Args>(args)...);
    }

    /**
     * @brief API 289: 设置是否允许别人私信我
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 不允许: 逻辑型 (可省略); 原始: 不允许
     */
    template <typename... Args>
    bool Api289(Args&&... args) const {
        return this->CallBool("设置是否允许别人私信我", std::forward<Args>(args)...);
    }

    /**
     * @brief API 290: 设置频道加入验证方式
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 验证方式: 整数型 (可省略); 原始: 验证方式
     * 4. 问题: 文本型 (可省略); 原始: 问题
     * 5. 答案: 文本型 (可省略); 原始: 答案
     */
    template <typename... Args>
    bool Api290(Args&&... args) const {
        return this->CallBool("设置频道加入验证方式", std::forward<Args>(args)...);
    }

    /**
     * @brief API 291: 搜索频道
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 关键词: 文本型; 原始: 关键词
     * 3. 第几页: 整数型 (可省略); 原始: 第几页
     * 4. 结果: 频道搜索结果 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api291(Args&&... args) const {
        return this->CallInt32("搜索频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 292: 取频道封面
     * @return 文本型
     * @param 参数顺序 1. 频道Id: 长整数型; 原始: 频道Id
     */
    template <typename... Args>
    const char* Api292(Args&&... args) const {
        return this->CallText("取频道封面", std::forward<Args>(args)...);
    }

    /**
     * @brief API 293: 取频道头像
     * @return 文本型
     * @param 参数顺序 1. 频道Id: 长整数型; 原始: 频道Id
     * 2. 高清大图: 逻辑型 (可省略); 原始: 高清大图
     */
    template <typename... Args>
    const char* Api293(Args&&... args) const {
        return this->CallText("取频道头像", std::forward<Args>(args)...);
    }

    /**
     * @brief API 294: 获取频道成员列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 结果: 频道成员信息 (传址/参考, 数组); 原始: 结果
     * 4. 翻页数据: 整数型 (传址/参考, 可省略); 原始: 翻页数据
     * 5. 翻页信息: 文本型 (传址/参考, 可省略); 原始: 翻页信息
     */
    template <typename... Args>
    std::int32_t Api294(Args&&... args) const {
        return this->CallInt32("获取频道成员列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 295: 取频道信息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 结果: 频道信息 (传址/参考); 原始: 结果
     */
    template <typename... Args>
    bool Api295(Args&&... args) const {
        return this->CallBool("取频道信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 296: 取频道加入验证方式
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 验证方式: 整数型 (传址/参考); 原始: 验证方式
     * 4. 问题: 文本型 (传址/参考, 可省略); 原始: 问题
     */
    template <typename... Args>
    bool Api296(Args&&... args) const {
        return this->CallBool("取频道加入验证方式", std::forward<Args>(args)...);
    }

    /**
     * @brief API 297: 申请加入频道
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 验证方式: 整数型; 原始: 验证方式
     * 3. 频道Id: 长整数型; 原始: 频道Id
     * 4. 频道Token: 文本型; 原始: 频道Token
     * 5. 答案: 文本型 (可省略); 原始: 答案
     */
    template <typename... Args>
    const char* Api297(Args&&... args) const {
        return this->CallText("申请加入频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 298: 取频道文件下载地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. fileid: 文本型; 原始: fileid
     * 5. filename: 文本型; 原始: filename
     */
    template <typename... Args>
    const char* Api298(Args&&... args) const {
        return this->CallText("取频道文件下载地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 299: 频道拼手气红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 频道Id: 长整数型; 原始: 频道Id
     * 5. 子频道Id: 长整数型; 原始: 子频道Id
     * 6. 祝福语: 文本型; 原始: 祝福语
     * 7. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 8. 支付密码: 文本型; 原始: 支付密码
     * 9. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 10. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api299(Args&&... args) const {
        return this->CallText("频道拼手气红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 300: 频道普通红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 频道Id: 长整数型; 原始: 频道Id
     * 5. 子频道Id: 长整数型; 原始: 子频道Id
     * 6. 祝福语: 文本型; 原始: 祝福语
     * 7. 红包皮肤Id: 整数型 (可省略); 原始: 红包皮肤Id
     * 8. 支付密码: 文本型; 原始: 支付密码
     * 9. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 10. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api300(Args&&... args) const {
        return this->CallText("频道普通红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 301: 频道专属红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 总数量: 整数型; 原始: 总数量
     * 3. 总金额: 整数型; 原始: 总金额
     * 4. 频道Id: 长整数型; 原始: 频道Id
     * 5. 子频道Id: 长整数型; 原始: 子频道Id
     * 6. 领取人频道用户Id: 长整数型; 原始: 领取人频道用户Id
     * 7. 祝福语: 文本型; 原始: 祝福语
     * 8. 支付密码: 文本型; 原始: 支付密码
     * 9. 银行卡序列: 整数型 (可省略); 原始: 银行卡序列
     * 10. 验证码信息: 验证码信息 (传址/参考, 可省略); 原始: 验证码信息
     */
    template <typename... Args>
    const char* Api301(Args&&... args) const {
        return this->CallText("频道专属红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 302: 领取频道专属红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 发送人频道用户Id: 长整数型; 原始: 发送人频道用户Id
     * 5. 红包文本代码: 文本型; 原始: 红包文本代码
     */
    template <typename... Args>
    const char* Api302(Args&&... args) const {
        return this->CallText("领取频道专属红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 303: 取频道成员身份组
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 4. 结果: 频道用户身份组信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api303(Args&&... args) const {
        return this->CallInt32("取频道成员身份组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 304: 设置频道成员身份组
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 4. 身份组Id列表: 长整数型 (数组); 原始: 身份组Id列表
     * 5. 是否取消身份组: 逻辑型 (可省略); 原始: 是否取消身份组
     */
    template <typename... Args>
    bool Api304(Args&&... args) const {
        return this->CallBool("设置频道成员身份组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 305: 修改身份组信息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 身份组Id: 长整数型; 原始: 身份组Id
     * 4. 身份组名: 文本型; 原始: 身份组名
     * 5. 身份组外显颜色代码: 长整数型 (可省略); 原始: 身份组外显颜色代码
     * 6. 是否在成员列表中单独展示: 逻辑型 (可省略); 原始: 是否在成员列表中单独展示
     */
    template <typename... Args>
    bool Api305(Args&&... args) const {
        return this->CallBool("修改身份组信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 306: 删除身份组
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 身份组Id: 长整数型; 原始: 身份组Id
     */
    template <typename... Args>
    bool Api306(Args&&... args) const {
        return this->CallBool("删除身份组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 307: 新增身份组
     * @return 长整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 身份组名: 文本型; 原始: 身份组名
     * 4. 身份组外显颜色代码: 长整数型 (可省略); 原始: 身份组外显颜色代码
     * 5. 是否在成员列表中单独展示: 逻辑型 (可省略); 原始: 是否在成员列表中单独展示
     */
    template <typename... Args>
    std::int64_t Api307(Args&&... args) const {
        return this->CallInt64("新增身份组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 308: 取频道身份组列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 结果: 频道身份组信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api308(Args&&... args) const {
        return this->CallInt32("取频道身份组列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 309: 取子频道列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 结果: 子频道信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api309(Args&&... args) const {
        return this->CallInt32("取子频道列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 310: 取频道用户个性档案
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 3. 结果: 频道用户个性档案信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api310(Args&&... args) const {
        return this->CallInt32("取频道用户个性档案", std::forward<Args>(args)...);
    }

    /**
     * @brief API 311: 取频道用户资料
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 3. 结果: 频道用户信息 (传址/参考); 原始: 结果
     */
    template <typename... Args>
    bool Api311(Args&&... args) const {
        return this->CallBool("取频道用户资料", std::forward<Args>(args)...);
    }

    /**
     * @brief API 312: 刷新频道列表缓存
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api312(Args&&... args) const {
        return this->CallBool("刷新频道列表缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 313: 取频道列表_从缓存
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api313(Args&&... args) const {
        return this->CallText("取频道列表_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 314: 取频道用户昵称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 频道用户Id: 文本型; 原始: 频道用户Id
     */
    template <typename... Args>
    const char* Api314(Args&&... args) const {
        return this->CallText("取频道用户昵称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 315: 取频道名称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 频道Id: 文本型; 原始: 频道Id
     */
    template <typename... Args>
    const char* Api315(Args&&... args) const {
        return this->CallText("取频道名称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 316: 取子频道名称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 频道Id: 文本型; 原始: 频道Id
     * 2. 子频道Id: 文本型; 原始: 子频道Id
     */
    template <typename... Args>
    const char* Api316(Args&&... args) const {
        return this->CallText("取子频道名称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 317: 取频道昵称_从缓存
     * @return 文本型
     * @param 参数顺序 1. 频道Id: 文本型; 原始: 频道Id
     * 2. 频道用户Id: 文本型; 原始: 频道用户Id
     */
    template <typename... Args>
    const char* Api317(Args&&... args) const {
        return this->CallText("取频道昵称_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 318: 取子频道分组列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 结果: 子频道分组信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api318(Args&&... args) const {
        return this->CallInt32("取子频道分组列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 319: 取私信频道列表_从缓存
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api319(Args&&... args) const {
        return this->CallText("取私信频道列表_从缓存", std::forward<Args>(args)...);
    }

    /**
     * @brief API 320: 上传频道文件
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 文件路径: 文本型; 原始: 文件路径
     * 5. 上传进度回调函数: 整数型 (可省略); 原始: 上传进度回调函数
     * 6. 图片宽度: 整数型 (可省略); 原始: 图片宽度
     * 7. 图片高度: 整数型 (可省略); 原始: 图片高度
     */
    template <typename... Args>
    const char* Api320(Args&&... args) const {
        return this->CallText("上传频道文件", std::forward<Args>(args)...);
    }

    /**
     * @brief API 321: 更改频道消息内容
     * @return 逻辑型
     * @param 参数顺序 1. 数据指针: 整数型; 原始: 数据指针
     * 2. 新消息内容: 文本型; 原始: 新消息内容
     */
    template <typename... Args>
    bool Api321(Args&&... args) const {
        return this->CallBool("更改频道消息内容", std::forward<Args>(args)...);
    }

    /**
     * @brief API 322: Emoji转频道EmojiId
     * @return 文本型
     * @param 参数顺序 1. Emoji代码: 文本型; 原始: Emoji代码
     */
    template <typename... Args>
    const char* Api322(Args&&... args) const {
        return this->CallText("Emoji转频道EmojiId", std::forward<Args>(args)...);
    }

    /**
     * @brief API 323: 频道EmojiId转Emoji
     * @return 文本型
     * @param 参数顺序 1. 频道EmojiId: 文本型; 原始: 频道EmojiId
     */
    template <typename... Args>
    const char* Api323(Args&&... args) const {
        return this->CallText("频道EmojiId转Emoji", std::forward<Args>(args)...);
    }

    /**
     * @brief API 324: Emoji转QQ空间EmId
     * @return 文本型
     * @param 参数顺序 1. Emoji代码: 文本型; 原始: Emoji代码
     */
    template <typename... Args>
    const char* Api324(Args&&... args) const {
        return this->CallText("Emoji转QQ空间EmId", std::forward<Args>(args)...);
    }

    /**
     * @brief API 325: QQ空间EmId转Emoji
     * @return 文本型
     * @param 参数顺序 1. QQ空间EmId: 文本型; 原始: QQ空间EmId
     */
    template <typename... Args>
    const char* Api325(Args&&... args) const {
        return this->CallText("QQ空间EmId转Emoji", std::forward<Args>(args)...);
    }

    /**
     * @brief API 326: 小黄豆Id转QQ空间EmId
     * @return 文本型
     * @param 参数顺序 1. 小黄豆Id: 文本型; 原始: 小黄豆Id
     */
    template <typename... Args>
    const char* Api326(Args&&... args) const {
        return this->CallText("小黄豆Id转QQ空间EmId", std::forward<Args>(args)...);
    }

    /**
     * @brief API 327: QQ空间EmId转小黄豆Id
     * @return 文本型
     * @param 参数顺序 1. QQ空间EmId: 文本型; 原始: QQ空间EmId
     */
    template <typename... Args>
    const char* Api327(Args&&... args) const {
        return this->CallText("QQ空间EmId转小黄豆Id", std::forward<Args>(args)...);
    }

    /**
     * @brief API 328: 取特定身份组成员列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 身份组Id: 长整数型; 原始: 身份组Id
     * 4. 结果: 特定身份组成员信息 (传址/参考, 数组); 原始: 结果
     * 5. 开始位置: 整数型 (可省略); 原始: 开始位置
     */
    template <typename... Args>
    std::int32_t Api328(Args&&... args) const {
        return this->CallInt32("取特定身份组成员列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 329: 取子频道分组结构
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     */
    template <typename... Args>
    const char* Api329(Args&&... args) const {
        return this->CallText("取子频道分组结构", std::forward<Args>(args)...);
    }

    /**
     * @brief API 330: 设置子频道分组结构
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道分组结构: 文本型; 原始: 子频道分组结构
     */
    template <typename... Args>
    const char* Api330(Args&&... args) const {
        return this->CallText("设置子频道分组结构", std::forward<Args>(args)...);
    }

    /**
     * @brief API 331: 删除子频道_批量
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id列表: 长整数型 (数组); 原始: 子频道Id列表
     */
    template <typename... Args>
    bool Api331(Args&&... args) const {
        return this->CallBool("删除子频道_批量", std::forward<Args>(args)...);
    }

    /**
     * @brief API 332: 创建子频道
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 原始子频道分组结构: 文本型; 原始: 原始子频道分组结构
     * 4. 子频道名称: 文本型; 原始: 子频道名称
     * 5. 消息提醒设置: 整数型 (可省略); 原始: 消息提醒设置
     * 6. 子频道类型: 整数型 (可省略); 原始: 子频道类型
     * 7. 子频道子类型: 整数型 (可省略); 原始: 子频道子类型
     * 8. 应用Id: 整数型 (可省略); 原始: 应用Id
     * 9. 可视类型: 整数型 (可省略); 原始: 可视类型
     * 10. 指定成员频道用户Id列表: 长整数型 (可省略, 数组); 原始: 指定成员频道用户Id列表
     * 11. 指定身份组Id: 长整数型 (可省略, 数组); 原始: 指定身份组Id
     * 12. 所属分组index: 整数型; 原始: 所属分组index
     * 13. 分组内位置: 整数型; 原始: 分组内位置
     */
    template <typename... Args>
    bool Api332(Args&&... args) const {
        return this->CallBool("创建子频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 333: 构造卡片消息文本代码
     * @return 文本型
     * @param 参数顺序 1. 卡片代码: 文本型; 原始: 卡片代码
     * 2. 类型: 整数型 (可省略); 原始: 类型
     * 3. 强制发送: 逻辑型 (可省略); 原始: 强制发送
     */
    template <typename... Args>
    const char* Api333(Args&&... args) const {
        return this->CallText("构造卡片消息文本代码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 334: 分享音乐_频道
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 歌曲名: 文本型; 原始: 歌曲名
     * 5. 歌手名: 文本型; 原始: 歌手名
     * 6. 跳转地址: 文本型; 原始: 跳转地址
     * 7. 封面地址: 文本型; 原始: 封面地址
     * 8. 文件地址: 文本型 (可省略); 原始: 文件地址
     * 9. 应用类型: 整数型 (可省略); 原始: 应用类型
     */
    template <typename... Args>
    bool Api334(Args&&... args) const {
        return this->CallBool("分享音乐_频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 335: 修改频道排序
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id列表: 长整数型 (数组); 原始: 频道Id列表
     */
    template <typename... Args>
    bool Api335(Args&&... args) const {
        return this->CallBool("修改频道排序", std::forward<Args>(args)...);
    }

    /**
     * @brief API 336: 处理频道加入申请
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道用户标识: 文本型; 原始: 频道用户标识
     * 3. 操作: 整数型 (可省略); 原始: 操作
     */
    template <typename... Args>
    bool Api336(Args&&... args) const {
        return this->CallBool("处理频道加入申请", std::forward<Args>(args)...);
    }

    /**
     * @brief API 337: 查询群设置
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api337(Args&&... args) const {
        return this->CallText("查询群设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 338: 取子频道管理列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 结果: 特定身份组成员信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api338(Args&&... args) const {
        return this->CallInt32("取子频道管理列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 339: 设置子频道管理
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 频道用户Id列表: 长整数型 (数组); 原始: 频道用户Id列表
     * 5. 是否取消子频道管理: 逻辑型 (可省略); 原始: 是否取消子频道管理
     */
    template <typename... Args>
    bool Api339(Args&&... args) const {
        return this->CallBool("设置子频道管理", std::forward<Args>(args)...);
    }

    /**
     * @brief API 340: 设置指定身份组子频道观看权限
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 身份组Id: 长整数型; 原始: 身份组Id
     * 4. 欲设置的子频道Id列表: 长整数型 (数组); 原始: 欲设置的子频道Id列表
     * 5. 是否取消观看权限: 逻辑型 (可省略); 原始: 是否取消观看权限
     */
    template <typename... Args>
    bool Api340(Args&&... args) const {
        return this->CallBool("设置指定身份组子频道观看权限", std::forward<Args>(args)...);
    }

    /**
     * @brief API 341: 设置指定身份组子频道发言权限
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 身份组Id: 长整数型; 原始: 身份组Id
     * 4. 欲设置的子频道Id列表: 长整数型 (数组); 原始: 欲设置的子频道Id列表
     * 5. 是否取消发言权限: 逻辑型 (可省略); 原始: 是否取消发言权限
     */
    template <typename... Args>
    bool Api341(Args&&... args) const {
        return this->CallBool("设置指定身份组子频道发言权限", std::forward<Args>(args)...);
    }

    /**
     * @brief API 342: 设置直播子频道主播
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 直播子频道Id: 长整数型; 原始: 直播子频道Id
     * 4. 欲设置的频道用户Id列表: 长整数型 (数组); 原始: 欲设置的频道用户Id列表
     * 5. 是否取消主播身份: 逻辑型 (可省略); 原始: 是否取消主播身份
     */
    template <typename... Args>
    bool Api342(Args&&... args) const {
        return this->CallBool("设置直播子频道主播", std::forward<Args>(args)...);
    }

    /**
     * @brief API 343: 获取频道分享链接
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     */
    template <typename... Args>
    const char* Api343(Args&&... args) const {
        return this->CallText("获取频道分享链接", std::forward<Args>(args)...);
    }

    /**
     * @brief API 344: 获取子频道分享链接
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     */
    template <typename... Args>
    const char* Api344(Args&&... args) const {
        return this->CallText("获取子频道分享链接", std::forward<Args>(args)...);
    }

    /**
     * @brief API 345: 子频道消息通知设置
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 开启消息通知: 逻辑型 (可省略); 原始: 开启消息通知
     */
    template <typename... Args>
    bool Api345(Args&&... args) const {
        return this->CallBool("子频道消息通知设置", std::forward<Args>(args)...);
    }

    /**
     * @brief API 346: 获取红包领取详情s
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 红包来源: 长整数型 (可省略); 原始: 红包来源
     * 3. 子频道Id: 长整数型 (可省略); 原始: 子频道Id
     * 4. 红包文本代码: 文本型; 原始: 红包文本代码
     * 5. 红包类型: 整数型; 原始: 红包类型
     * 6. 起始位置: 整数型 (可省略); 原始: 起始位置
     */
    template <typename... Args>
    const char* Api346(Args&&... args) const {
        return this->CallText("获取红包领取详情s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 347: 取话题子频道帖子列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 话题子频道Id: 长整数型; 原始: 话题子频道Id
     * 4. 结果: 话题帖子信息 (传址/参考, 数组); 原始: 结果
     * 5. 翻页信息: 文本型 (传址/参考, 可省略); 原始: 翻页信息
     */
    template <typename... Args>
    std::int32_t Api347(Args&&... args) const {
        return this->CallInt32("取话题子频道帖子列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 348: 获取日程列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 日程子频道Id: 长整数型; 原始: 日程子频道Id
     * 4. 时间戳: 长整数型; 原始: 时间戳
     * 5. 结果: 日程信息 (传址/参考, 数组); 原始: 结果
     */
    template <typename... Args>
    std::int32_t Api348(Args&&... args) const {
        return this->CallInt32("获取日程列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 349: 获取日程链接
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 日程子频道Id: 长整数型; 原始: 日程子频道Id
     * 4. 日程Id: 长整数型; 原始: 日程Id
     */
    template <typename... Args>
    const char* Api349(Args&&... args) const {
        return this->CallText("获取日程链接", std::forward<Args>(args)...);
    }

    /**
     * @brief API 350: 取日程信息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 日程子频道Id: 长整数型; 原始: 日程子频道Id
     * 4. 日程Id: 长整数型; 原始: 日程Id
     * 5. 信息: 日程信息 (传址/参考); 原始: 信息
     */
    template <typename... Args>
    bool Api350(Args&&... args) const {
        return this->CallBool("取日程信息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 351: 创建日程
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 日程子频道Id: 长整数型; 原始: 日程子频道Id
     * 4. 日程名: 文本型; 原始: 日程名
     * 5. 日程描述: 文本型; 原始: 日程描述
     * 6. 开始时间戳: 长整数型; 原始: 开始时间戳
     * 7. 结束时间戳: 长整数型; 原始: 结束时间戳
     * 8. 提醒: 整数型 (可省略); 原始: 提醒
     * 9. 开始时跳转的子频道Id: 长整数型 (可省略); 原始: 开始时跳转的子频道Id
     * 10. 信息: 日程信息 (传址/参考); 原始: 信息
     */
    template <typename... Args>
    bool Api351(Args&&... args) const {
        return this->CallBool("创建日程", std::forward<Args>(args)...);
    }

    /**
     * @brief API 352: 取QQ头像K值
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    const char* Api352(Args&&... args) const {
        return this->CallText("取QQ头像K值", std::forward<Args>(args)...);
    }

    /**
     * @brief API 353: 删除日程
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 日程子频道Id: 长整数型; 原始: 日程子频道Id
     * 4. 日程信息: 日程信息; 原始: 日程信息
     */
    template <typename... Args>
    bool Api353(Args&&... args) const {
        return this->CallBool("删除日程", std::forward<Args>(args)...);
    }

    /**
     * @brief API 354: 发送通行证到群
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 群号: 长整数型; 原始: 群号
     * 4. 通行证数量: 整数型; 原始: 通行证数量
     */
    template <typename... Args>
    bool Api354(Args&&... args) const {
        return this->CallBool("发送通行证到群", std::forward<Args>(args)...);
    }

    /**
     * @brief API 355: 发送通行证到好友
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     */
    template <typename... Args>
    bool Api355(Args&&... args) const {
        return this->CallBool("发送通行证到好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 356: 屏蔽频道用户私信
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 3. 解除屏蔽: 逻辑型 (可省略); 原始: 解除屏蔽
     */
    template <typename... Args>
    bool Api356(Args&&... args) const {
        return this->CallBool("屏蔽频道用户私信", std::forward<Args>(args)...);
    }

    /**
     * @brief API 357: 频道用户私信免打扰
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 3. 关闭免打扰: 逻辑型 (可省略); 原始: 关闭免打扰
     */
    template <typename... Args>
    bool Api357(Args&&... args) const {
        return this->CallBool("频道用户私信免打扰", std::forward<Args>(args)...);
    }

    /**
     * @brief API 358: QQ列表_添加QQ
     * @return 文本型
     * @param 参数顺序 1. QQ: 长整数型; 原始: QQ
     * 2. 密码: 文本型 (可省略); 原始: 密码
     * 3. 手机品牌: 文本型 (可省略); 原始: 手机品牌
     * 4. 手机型号: 文本型 (可省略); 原始: 手机型号
     * 5. 协议: 整数型 (可省略); 原始: 协议
     * 6. guid: 文本型 (可省略); 原始: guid
     */
    template <typename... Args>
    const char* Api358(Args&&... args) const {
        return this->CallText("QQ列表_添加QQ", std::forward<Args>(args)...);
    }

    /**
     * @brief API 359: QQ列表_删除QQ
     * @return 文本型
     * @param 参数顺序 1. QQ: 长整数型; 原始: QQ
     * 2. 彻底删除: 逻辑型 (可省略); 原始: 彻底删除
     */
    template <typename... Args>
    const char* Api359(Args&&... args) const {
        return this->CallText("QQ列表_删除QQ", std::forward<Args>(args)...);
    }

    /**
     * @brief API 360: 登录指定QQ_二次登录
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api360(Args&&... args) const {
        return this->CallBool("登录指定QQ_二次登录", std::forward<Args>(args)...);
    }

    /**
     * @brief API 361: 是否已设置QQ密码
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api361(Args&&... args) const {
        return this->CallBool("是否已设置QQ密码", std::forward<Args>(args)...);
    }

    /**
     * @brief API 362: 取框架插件列表
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api362(Args&&... args) const {
        return this->CallText("取框架插件列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 363: 取在线移动设备列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api363(Args&&... args) const {
        return this->CallText("取在线移动设备列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 364: 设置频道全局公告_指定消息
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 消息req: 整数型; 原始: 消息req
     */
    template <typename... Args>
    bool Api364(Args&&... args) const {
        return this->CallBool("设置频道全局公告_指定消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 365: 取频道号
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     */
    template <typename... Args>
    const char* Api365(Args&&... args) const {
        return this->CallText("取频道号", std::forward<Args>(args)...);
    }

    /**
     * @brief API 366: 设置位置共享s
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 目标: 长整数型; 原始: 目标
     * 3. 经度: 双精度小数型; 原始: 经度
     * 4. 纬度: 双精度小数型; 原始: 纬度
     * 5. 是否开启: 逻辑型 (可省略); 原始: 是否开启
     * 6. 类型: 整数型 (可省略); 原始: 类型
     */
    template <typename... Args>
    bool Api366(Args&&... args) const {
        return this->CallBool("设置位置共享s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 367: 上报当前位置s
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 目标: 长整数型; 原始: 目标
     * 3. 经度: 双精度小数型; 原始: 经度
     * 4. 纬度: 双精度小数型; 原始: 纬度
     * 5. 指针偏角: 双精度小数型 (可省略); 原始: 指针偏角
     */
    template <typename... Args>
    bool Api367(Args&&... args) const {
        return this->CallBool("上报当前位置s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 368: 移动好友分组
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. 分组Id: 整数型; 原始: 分组Id
     */
    template <typename... Args>
    bool Api368(Args&&... args) const {
        return this->CallBool("移动好友分组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 369: 修改好友分组名
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 分组Id: 整数型; 原始: 分组Id
     * 3. 分组名: 文本型; 原始: 分组名
     */
    template <typename... Args>
    bool Api369(Args&&... args) const {
        return this->CallBool("修改好友分组名", std::forward<Args>(args)...);
    }

    /**
     * @brief API 370: 删除好友分组
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 分组Id: 整数型; 原始: 分组Id
     */
    template <typename... Args>
    bool Api370(Args&&... args) const {
        return this->CallBool("删除好友分组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 371: 取好友分组列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api371(Args&&... args) const {
        return this->CallText("取好友分组列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 372: 新增好友分组
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 分组名: 文本型; 原始: 分组名
     */
    template <typename... Args>
    std::int32_t Api372(Args&&... args) const {
        return this->CallInt32("新增好友分组", std::forward<Args>(args)...);
    }

    /**
     * @brief API 373: 取频道红包pre_grap_token
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     * 4. 红包listid: 文本型; 原始: 红包listid
     * 5. 红包authkey: 文本型; 原始: 红包authkey
     * 6. 红包channel: 文本型; 原始: 红包channel
     * 7. 红包发送人频道用户Id: 长整数型; 原始: 红包发送人频道用户Id
     */
    template <typename... Args>
    const char* Api373(Args&&... args) const {
        return this->CallText("取频道红包pre_grap_token", std::forward<Args>(args)...);
    }

    /**
     * @brief API 374: 语音红包匹配
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 红包接收对象: 长整数型; 原始: 红包接收对象
     * 3. 红包标题: 文本型; 原始: 红包标题
     * 4. 匹配语音hash: 文本型; 原始: 匹配语音hash
     * 5. 红包listid: 文本型; 原始: 红包listid
     * 6. 红包authkey: 文本型; 原始: 红包authkey
     * 7. 红包发送者QQ: 长整数型; 原始: 红包发送者QQ
     * 8. 红包来源类型: 整数型 (可省略); 原始: 红包来源类型
     */
    template <typename... Args>
    const char* Api374(Args&&... args) const {
        return this->CallText("语音红包匹配", std::forward<Args>(args)...);
    }

    /**
     * @brief API 375: 上传群聊语音红包匹配语音
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 红包来源群号: 长整数型; 原始: 红包来源群号
     * 3. audio: 字节集; 原始: audio
     */
    template <typename... Args>
    const char* Api375(Args&&... args) const {
        return this->CallText("上传群聊语音红包匹配语音", std::forward<Args>(args)...);
    }

    /**
     * @brief API 376: 取合并转发消息内容
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. resId: 文本型; 原始: resId
     */
    template <typename... Args>
    const char* Api376(Args&&... args) const {
        return this->CallText("取合并转发消息内容", std::forward<Args>(args)...);
    }

    /**
     * @brief API 377: 上传合并转发消息
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 消息来源: 文本型; 原始: 消息来源
     * 3. 消息封面: 文本型; 原始: 消息封面
     * 4. 合并转发消息内容: 文本型; 原始: 合并转发消息内容
     */
    template <typename... Args>
    const char* Api377(Args&&... args) const {
        return this->CallText("上传合并转发消息", std::forward<Args>(args)...);
    }

    /**
     * @brief API 378: 语音转文字
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 语音hash: 文本型; 原始: 语音hash
     * 3. 语音token: 文本型; 原始: 语音token
     */
    template <typename... Args>
    const char* Api378(Args&&... args) const {
        return this->CallText("语音转文字", std::forward<Args>(args)...);
    }

    /**
     * @brief API 379: 发送功能包
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 功能cmd: 文本型; 原始: 功能cmd
     * 3. 最大等待时长: 整数型 (可省略); 原始: 最大等待时长
     * 4. 数据: 字节集 (传址/参考); 原始: 数据
     */
    template <typename... Args>
    bool Api379(Args&&... args) const {
        return this->CallBool("发送功能包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 380: 二维码扫一扫授权登录其他应用
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. k值: 文本型; 原始: k值
     */
    template <typename... Args>
    const char* Api380(Args&&... args) const {
        return this->CallText("二维码扫一扫授权登录其他应用", std::forward<Args>(args)...);
    }

    /**
     * @brief API 381: 取历史登录设备guid列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api381(Args&&... args) const {
        return this->CallText("取历史登录设备guid列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 382: 二维码扫一扫授权其他设备资料辅助验证登录
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. str_url: 文本型; 原始: str_url
     */
    template <typename... Args>
    const char* Api382(Args&&... args) const {
        return this->CallText("二维码扫一扫授权其他设备资料辅助验证登录", std::forward<Args>(args)...);
    }

    /**
     * @brief API 383: 关闭设备锁
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api383(Args&&... args) const {
        return this->CallBool("关闭设备锁", std::forward<Args>(args)...);
    }

    /**
     * @brief API 384: 恢复设备锁
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    bool Api384(Args&&... args) const {
        return this->CallBool("恢复设备锁", std::forward<Args>(args)...);
    }

    /**
     * @brief API 385: 余额提现
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 提现金额: 整数型; 原始: 提现金额
     * 3. 支付密码: 文本型; 原始: 支付密码
     * 4. 银行卡序列: 整数型; 原始: 银行卡序列
     */
    template <typename... Args>
    const char* Api385(Args&&... args) const {
        return this->CallText("余额提现", std::forward<Args>(args)...);
    }

    /**
     * @brief API 386: 取h5钱包cookie
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api386(Args&&... args) const {
        return this->CallText("取h5钱包cookie", std::forward<Args>(args)...);
    }

    /**
     * @brief API 387: 取QQ会员中心cookie
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api387(Args&&... args) const {
        return this->CallText("取QQ会员中心cookie", std::forward<Args>(args)...);
    }

    /**
     * @brief API 388: 说说点赞
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 说说发布者QQ: 长整数型; 原始: 说说发布者QQ
     * 3. 说说feedskey: 文本型; 原始: 说说feedskey
     * 4. 取消点赞: 逻辑型 (可省略); 原始: 取消点赞
     */
    template <typename... Args>
    bool Api388(Args&&... args) const {
        return this->CallBool("说说点赞", std::forward<Args>(args)...);
    }

    /**
     * @brief API 389: 说说评论
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 说说发布者QQ: 长整数型; 原始: 说说发布者QQ
     * 3. 说说feedskey: 文本型; 原始: 说说feedskey
     * 4. 评论内容: 文本型; 原始: 评论内容
     */
    template <typename... Args>
    bool Api389(Args&&... args) const {
        return this->CallBool("说说评论", std::forward<Args>(args)...);
    }

    /**
     * @brief API 390: 取最新动态列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 查询QQ: 长整数型 (可省略); 原始: 查询QQ
     */
    template <typename... Args>
    const char* Api390(Args&&... args) const {
        return this->CallText("取最新动态列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 391: 搜索表情包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 关键词: 文本型; 原始: 关键词
     */
    template <typename... Args>
    const char* Api391(Args&&... args) const {
        return this->CallText("搜索表情包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 392: 发布说说
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 内容: 文本型; 原始: 内容
     * 3. 是否TCP发送: 逻辑型; 原始: 是否TCP发送
     * 4. 是否私密: 逻辑型; 原始: 是否私密
     * 5. 是否发表24小时候自动删除: 逻辑型; 原始: 是否发表24小时候自动删除
     */
    template <typename... Args>
    const char* Api392(Args&&... args) const {
        return this->CallText("发布说说", std::forward<Args>(args)...);
    }

    /**
     * @brief API 393: 经纬度定位查询详细地址
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 经度: 双精度小数型; 原始: 经度
     * 3. 纬度: 双精度小数型; 原始: 纬度
     */
    template <typename... Args>
    const char* Api393(Args&&... args) const {
        return this->CallText("经纬度定位查询详细地址", std::forward<Args>(args)...);
    }

    /**
     * @brief API 394: 取插件自身版本号
     * @return 文本型
     * @param 参数顺序 无参数
     */
    template <typename... Args>
    const char* Api394(Args&&... args) const {
        return this->CallText("取插件自身版本号", std::forward<Args>(args)...);
    }

    /**
     * @brief API 395: 上传群临时文件s
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     * 3. 对方QQ: 长整数型; 原始: 对方QQ
     * 4. 群号: 长整数型; 原始: 群号
     * 5. 文件路径: 文本型; 原始: 文件路径
     * 6. 上传进度回调函数: 整数型 (可省略); 原始: 上传进度回调函数
     * 7. Random: 长整数型 (传址/参考, 可省略); 原始: Random
     * 8. Req: 整数型 (传址/参考, 可省略); 原始: Req
     */
    template <typename... Args>
    const char* Api395(Args&&... args) const {
        return this->CallText("上传群临时文件s", std::forward<Args>(args)...);
    }

    /**
     * @brief API 396: 删除说说
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 说说feedskey: 文本型; 原始: 说说feedskey
     */
    template <typename... Args>
    bool Api396(Args&&... args) const {
        return this->CallBool("删除说说", std::forward<Args>(args)...);
    }

    /**
     * @brief API 397: 上传QQ封面
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 图片: 字节集; 原始: 图片
     */
    template <typename... Args>
    const char* Api397(Args&&... args) const {
        return this->CallText("上传QQ封面", std::forward<Args>(args)...);
    }

    /**
     * @brief API 398: ark消息签名
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. json: 文本型; 原始: json
     */
    template <typename... Args>
    const char* Api398(Args&&... args) const {
        return this->CallText("ark消息签名", std::forward<Args>(args)...);
    }

    /**
     * @brief API 399: 取收藏表情列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. ptr: struct_expression (传址/参考, 数组); 原始: ptr
     */
    template <typename... Args>
    std::int32_t Api399(Args&&... args) const {
        return this->CallInt32("取收藏表情列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 400: 删除收藏表情
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. ptr: 文本型 (数组); 原始: ptr
     */
    template <typename... Args>
    bool Api400(Args&&... args) const {
        return this->CallBool("删除收藏表情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 401: 增加收藏表情
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. ptr: 字节集; 原始: ptr
     */
    template <typename... Args>
    const char* Api401(Args&&... args) const {
        return this->CallText("增加收藏表情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 402: 取个性标签列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. ptr: struct_tags (传址/参考, 数组); 原始: ptr
     */
    template <typename... Args>
    std::int32_t Api402(Args&&... args) const {
        return this->CallInt32("取个性标签列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 403: 上传个性标签图片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 标签Id: 长整数型; 原始: 标签Id
     * 3. ptr: 字节集; 原始: ptr
     */
    template <typename... Args>
    const char* Api403(Args&&... args) const {
        return this->CallText("上传个性标签图片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 404: 取推荐消息气泡列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. ptr: struct_bubble (传址/参考, 数组); 原始: ptr
     */
    template <typename... Args>
    std::int32_t Api404(Args&&... args) const {
        return this->CallInt32("取推荐消息气泡列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 405: 移除频道成员并撤回发言
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道用户Id: 长整数型; 原始: 频道用户Id
     * 4. 拉入黑名单: 逻辑型; 原始: 拉入黑名单
     * 5. 撤回发言: 逻辑型; 原始: 撤回发言
     * 6. 撤回类型: 整数型; 原始: 撤回类型
     */
    template <typename... Args>
    bool Api405(Args&&... args) const {
        return this->CallBool("移除频道成员并撤回发言", std::forward<Args>(args)...);
    }

    /**
     * @brief API 406: 设置频道发言规则
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 设置类型: 整数型; 原始: 设置类型
     * 4. 是否禁止: 逻辑型; 原始: 是否禁止
     */
    template <typename... Args>
    bool Api406(Args&&... args) const {
        return this->CallBool("设置频道发言规则", std::forward<Args>(args)...);
    }

    /**
     * @brief API 407: 设置频道发言门槛
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 频道内发言需要人脸实名认证: 逻辑型; 原始: 频道内发言需要人脸实名认证
     * 4. 频道内发言需要加入任意身份组: 逻辑型; 原始: 频道内发言需要加入任意身份组
     * 5. 频道内发言需要加入本频道指定时长: 整数型; 原始: 频道内发言需要加入本频道指定时长
     * 6. 频道内私信需要人脸实名认证: 逻辑型; 原始: 频道内私信需要人脸实名认证
     * 7. 频道内私信需要加入任意身份组: 逻辑型; 原始: 频道内私信需要加入任意身份组
     * 8. 频道内私信需要加入本频道指定时长: 整数型; 原始: 频道内私信需要加入本频道指定时长
     */
    template <typename... Args>
    bool Api407(Args&&... args) const {
        return this->CallBool("设置频道发言门槛", std::forward<Args>(args)...);
    }

    /**
     * @brief API 408: 设置精选展示子频道
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 频道Id: 长整数型; 原始: 频道Id
     * 3. 子频道Id: 长整数型; 原始: 子频道Id
     */
    template <typename... Args>
    bool Api408(Args&&... args) const {
        return this->CallBool("设置精选展示子频道", std::forward<Args>(args)...);
    }

    /**
     * @brief API 409: 取表情包列表
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. ptr: struct_facepack (传址/参考, 数组); 原始: ptr
     */
    template <typename... Args>
    std::int32_t Api409(Args&&... args) const {
        return this->CallInt32("取表情包列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 410: 取表情包内表情
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 表情包Id: 长整数型; 原始: 表情包Id
     * 3. ptr: 表情包信息 (传址/参考, 数组); 原始: ptr
     */
    template <typename... Args>
    std::int32_t Api410(Args&&... args) const {
        return this->CallInt32("取表情包内表情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 411: 回应表情
     * @return 逻辑型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 消息ID: 整数型; 原始: 消息ID
     * 4. 表情ID: 整数型; 原始: 表情ID
     * 5. 取消粘贴: 逻辑型 (可省略); 原始: 取消粘贴
     */
    template <typename... Args>
    bool Api411(Args&&... args) const {
        return this->CallBool("回应表情", std::forward<Args>(args)...);
    }

    /**
     * @brief API 412: 字符_抽字符_群聊
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api412(Args&&... args) const {
        return this->CallText("字符_抽字符_群聊", std::forward<Args>(args)...);
    }

    /**
     * @brief API 413: 字符_抽字符_好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     */
    template <typename... Args>
    const char* Api413(Args&&... args) const {
        return this->CallText("字符_抽字符_好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 414: 字符_取可抽取次数_好友
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     */
    template <typename... Args>
    std::int32_t Api414(Args&&... args) const {
        return this->CallInt32("字符_取可抽取次数_好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 415: 字符_取可抽取次数_群聊
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    std::int32_t Api415(Args&&... args) const {
        return this->CallInt32("字符_取可抽取次数_群聊", std::forward<Args>(args)...);
    }

    /**
     * @brief API 416: 发送_管机主动
     * @return 无
     * @param 参数顺序 1. myUin: 长整数型; 原始: myUin
     * 2. Appid: 长整数型; 原始: Appid
     * 3. Group: 长整数型; 原始: Group
     * 4. BOTID: 文本型; 原始: BOTID
     */
    template <typename... Args>
    void Api416(Args&&... args) const {
        this->CallVoid("发送_管机主动", std::forward<Args>(args)...);
    }

    /**
     * @brief API 417: 查看群未领红包
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api417(Args&&... args) const {
        return this->CallText("查看群未领红包", std::forward<Args>(args)...);
    }

    /**
     * @brief API 418: 查看黑名单
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     */
    template <typename... Args>
    const char* Api418(Args&&... args) const {
        return this->CallText("查看黑名单", std::forward<Args>(args)...);
    }

    /**
     * @brief API 419: 加入黑名单
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对象QQ: 长整数型; 原始: 对象QQ
     */
    template <typename... Args>
    void Api419(Args&&... args) const {
        this->CallVoid("加入黑名单", std::forward<Args>(args)...);
    }

    /**
     * @brief API 420: 移出黑名单
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 对象QQ: 长整数型; 原始: 对象QQ
     */
    template <typename... Args>
    void Api420(Args&&... args) const {
        this->CallVoid("移出黑名单", std::forward<Args>(args)...);
    }

    /**
     * @brief API 421: 查询群是否支持临时会话
     * @return 整数型
     * @param 参数顺序 1. myUin: 长整数型; 原始: myUin
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    std::int32_t Api421(Args&&... args) const {
        return this->CallInt32("查询群是否支持临时会话", std::forward<Args>(args)...);
    }

    /**
     * @brief API 422: 查询群是否支持群成员邀请
     * @return 逻辑型
     * @param 参数顺序 1. myUin: 长整数型; 原始: myUin
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    bool Api422(Args&&... args) const {
        return this->CallBool("查询群是否支持群成员邀请", std::forward<Args>(args)...);
    }

    /**
     * @brief API 423: 群聊_展示成员群头衔
     * @return 逻辑型
     * @param 参数顺序 1. myUin: 长整数型; 原始: myUin
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 是否开启: 逻辑型; 原始: 是否开启
     */
    template <typename... Args>
    bool Api423(Args&&... args) const {
        return this->CallBool("群聊_展示成员群头衔", std::forward<Args>(args)...);
    }

    /**
     * @brief API 424: 群聊_发言频率限制
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 限制条数: 整数型; 原始: 限制条数
     */
    template <typename... Args>
    void Api424(Args&&... args) const {
        this->CallVoid("群聊_发言频率限制", std::forward<Args>(args)...);
    }

    /**
     * @brief API 425: 群聊_取被禁言成员列表
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api425(Args&&... args) const {
        return this->CallText("群聊_取被禁言成员列表", std::forward<Args>(args)...);
    }

    /**
     * @brief API 426: 群聊_取分享卡片
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api426(Args&&... args) const {
        return this->CallText("群聊_取分享卡片", std::forward<Args>(args)...);
    }

    /**
     * @brief API 427: 群聊_取分享链接
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api427(Args&&... args) const {
        return this->CallText("群聊_取分享链接", std::forward<Args>(args)...);
    }

    /**
     * @brief API 428: 群聊_取今日打卡的人
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     */
    template <typename... Args>
    const char* Api428(Args&&... args) const {
        return this->CallText("群聊_取今日打卡的人", std::forward<Args>(args)...);
    }

    /**
     * @brief API 429: 群聊_添加机器人
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 机器人QQ: 长整数型; 原始: 机器人QQ
     */
    template <typename... Args>
    void Api429(Args&&... args) const {
        this->CallVoid("群聊_添加机器人", std::forward<Args>(args)...);
    }

    /**
     * @brief API 430: 群聊_移除机器人
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 机器人QQ: 长整数型; 原始: 机器人QQ
     */
    template <typename... Args>
    void Api430(Args&&... args) const {
        this->CallVoid("群聊_移除机器人", std::forward<Args>(args)...);
    }

    /**
     * @brief API 431: 添加机器人好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 机器人QQ: 长整数型; 原始: 机器人QQ
     */
    template <typename... Args>
    const char* Api431(Args&&... args) const {
        return this->CallText("添加机器人好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 432: 删除机器人好友
     * @return 文本型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 机器人QQ: 长整数型; 原始: 机器人QQ
     */
    template <typename... Args>
    const char* Api432(Args&&... args) const {
        return this->CallText("删除机器人好友", std::forward<Args>(args)...);
    }

    /**
     * @brief API 433: 邀请好友助力等级加速
     * @return 无
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 好友QQ: 长整数型; 原始: 好友QQ
     */
    template <typename... Args>
    void Api433(Args&&... args) const {
        this->CallVoid("邀请好友助力等级加速", std::forward<Args>(args)...);
    }

    /**
     * @brief API 434: 取群语音人数
     * @return 整数型
     * @param 参数顺序 1. 框架QQ: 长整数型; 原始: 框架QQ
     * 2. 群号: 长整数型; 原始: 群号
     * 3. 参考文本: 文本型 (传址/参考); 原始: 参考文本
     */
    template <typename... Args>
    std::int32_t Api434(Args&&... args) const {
        return this->CallInt32("取群语音人数", std::forward<Args>(args)...);
    };
};

} // namespace xlz
