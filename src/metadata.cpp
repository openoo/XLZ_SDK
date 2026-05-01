#include "xlz/metadata.hpp"

#include <cstring>

namespace xlz {

static const ApiParamSpec kParams_1[] = {
    {"日志", "文本型", false, false, false, "日志"},
    {"文字颜色", "整数型", false, true, false, "文字颜色"},
    {"背景颜色", "整数型", false, true, false, "背景颜色"},
};

static const ApiParamSpec kParams_2[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"发送内容", "文本型", false, false, false, "发送内容"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
};

static const ApiParamSpec kParams_3[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"发送内容", "文本型", false, false, false, "发送内容"},
    {"匿名发送", "逻辑型", false, true, false, "匿名发送"},
};

static const ApiParamSpec kParams_4[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群ID", "长整数型", false, false, false, "群ID"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"发送内容", "文本型", false, false, false, "发送内容"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
};

static const ApiParamSpec kParams_5[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"问题答案", "文本型", false, false, false, "问题答案"},
    {"备注", "文本型", false, false, false, "备注"},
};

static const ApiParamSpec kParams_6[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"验证消息", "文本型", false, false, false, "验证消息"},
};

static const ApiParamSpec kParams_7[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_8[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"是否屏蔽", "逻辑型", false, false, false, "是否屏蔽"},
};

static const ApiParamSpec kParams_9[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"是否关心", "逻辑型", false, false, false, "是否关心"},
};

static const ApiParamSpec kParams_10[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"json代码", "文本型", false, false, false, "json代码"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
};

static const ApiParamSpec kParams_11[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"json代码", "文本型", false, false, false, "json代码"},
    {"匿名发送", "逻辑型", false, true, false, "匿名发送"},
};

static const ApiParamSpec kParams_12[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"是否闪照", "逻辑型", false, true, false, "是否闪照"},
    {"pic", "字节集", false, false, false, "取变量数据地址 (pic)"},
    {"宽度", "整数型", false, true, false, "取字节集长度 (pic)"},
    {"高度", "整数型", false, true, false, "高度"},
    {"动图", "逻辑型", false, true, false, "动图"},
    {"预览文字", "文本型", false, true, false, "预览文字"},
};

static const ApiParamSpec kParams_13[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否闪照", "逻辑型", false, true, false, "是否闪照"},
    {"pic", "字节集", false, false, false, "取变量数据地址 (pic)"},
    {"宽度", "整数型", false, true, false, "取字节集长度 (pic)"},
    {"高度", "整数型", false, true, false, "高度"},
    {"动图", "逻辑型", false, true, false, "动图"},
    {"预览文字", "文本型", false, true, false, "预览文字"},
};

static const ApiParamSpec kParams_14[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"语音类型", "整数型", false, true, false, "语音类型"},
    {"语音文字", "文本型", false, true, false, "语音文字"},
    {"audio", "字节集", false, false, false, "取变量数据地址 (audio)"},
    {"时长", "整数型", false, true, false, "取字节集长度 (audio)"},
};

static const ApiParamSpec kParams_15[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"语音类型", "整数型", false, true, false, "语音类型"},
    {"语音文字", "文本型", false, true, false, "语音文字"},
    {"audio", "字节集", false, false, false, "取变量数据地址 (audio)"},
    {"时长", "整数型", false, true, false, "取字节集长度 (audio)"},
};

static const ApiParamSpec kParams_16[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"pic", "字节集", false, false, false, "取变量数据地址 (pic)"},
};

static const ApiParamSpec kParams_17[] = {
    {"音频文件路径", "文本型", false, false, false, "音频文件路径"},
};

static const ApiParamSpec kParams_18[] = {
    {"音频文件路径", "文本型", false, false, false, "音频文件路径"},
};

static const ApiParamSpec kParams_19[] = {
    {"音频文件路径", "文本型", false, false, false, "音频文件路径"},
};

static const ApiParamSpec kParams_20[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"群成员QQ", "长整数型", false, false, false, "群成员QQ"},
    {"新名片", "文本型", false, false, false, "新名片"},
};

static const ApiParamSpec kParams_21[] = {
    {"对方QQ", "文本型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_22[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "文本型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_23[] = {
    {"群号", "文本型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_24[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_25[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"域", "文本型", false, false, false, "域"},
};

static const ApiParamSpec kParams_26[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_27[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_28[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"数据", "好友信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_29[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"数据", "群信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_30[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"数据", "群成员信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_31[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"群成员QQ", "长整数型", false, false, false, "群成员QQ"},
    {"取消管理", "逻辑型", false, false, false, "取消管理"},
};

static const ApiParamSpec kParams_32[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_33[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"群成员QQ", "长整数型", false, false, false, "群成员QQ"},
};

static const ApiParamSpec kParams_34[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_35[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"昵称", "文本型", false, false, false, "昵称"},
};

static const ApiParamSpec kParams_36[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"签名", "文本型", false, false, false, "签名"},
    {"签名地点", "文本型", false, true, false, "签名地点"},
};

static const ApiParamSpec kParams_37[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"群成员QQ", "长整数型", false, false, false, "群成员QQ"},
    {"拒绝加群申请", "逻辑型", false, false, false, "拒绝加群申请"},
};

static const ApiParamSpec kParams_38[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"群成员QQ", "长整数型", false, false, false, "群成员QQ"},
    {"禁言时长", "整数型", false, false, false, "禁言时长"},
};

static const ApiParamSpec kParams_39[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_40[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_41[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"pic", "字节集", false, false, false, "取变量数据地址 (pic)"},
};

static const ApiParamSpec kParams_42[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否开启", "逻辑型", false, false, false, "是否开启"},
};

static const ApiParamSpec kParams_43[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_44[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_45[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_46[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_47[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_48[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_49[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_50[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_51[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"方式", "整数型", false, false, false, "方式"},
};

static const ApiParamSpec kParams_52[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"消息Random", "长整数型", false, false, false, "消息Random"},
    {"消息Req", "整数型", false, false, false, "消息Req"},
};

static const ApiParamSpec kParams_53[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"消息Random", "长整数型", false, false, false, "消息Random"},
    {"消息Req", "整数型", false, false, false, "消息Req"},
    {"消息接收时间", "整数型", false, false, false, "消息接收时间"},
};

static const ApiParamSpec kParams_54[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"经度", "双精度小数型", false, false, false, "经度"},
    {"纬度", "双精度小数型", false, false, false, "纬度"},
    {"是否开启", "逻辑型", false, false, false, "是否开启"},
};

static const ApiParamSpec kParams_55[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"经度", "双精度小数型", false, false, false, "经度"},
    {"纬度", "双精度小数型", false, false, false, "纬度"},
};

static const ApiParamSpec kParams_56[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_57[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"触发QQ", "长整数型", false, false, false, "触发QQ"},
    {"消息Seq", "长整数型", false, false, false, "消息Seq"},
    {"操作类型", "整数型", false, false, false, "操作类型"},
    {"事件类型", "整数型", false, false, false, "事件类型"},
    {"拒绝理由", "文本型", false, true, false, "拒绝理由"},
};

static const ApiParamSpec kParams_58[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"触发QQ", "长整数型", false, false, false, "触发QQ"},
    {"消息Seq", "长整数型", false, false, false, "消息Seq"},
    {"操作类型", "整数型", false, false, false, "操作类型"},
};

static const ApiParamSpec kParams_59[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"resId", "文本型", false, false, false, "resId"},
    {"消息内容", "群消息数据", true, false, true, "取变量地址 (消息内容)"},
};

static const ApiParamSpec kParams_60[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件路径", "文本型", false, false, false, "文件路径"},
    {"文件夹名", "文本型", false, true, false, "文件夹名"},
};

static const ApiParamSpec kParams_61[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件夹名", "文本型", false, false, false, "文件夹名"},
};

static const ApiParamSpec kParams_62[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"旧文件夹名", "文本型", false, false, false, "旧文件夹名"},
    {"新文件夹名", "文本型", false, false, false, "新文件夹名"},
};

static const ApiParamSpec kParams_63[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件夹名", "文本型", false, false, false, "文件夹名"},
};

static const ApiParamSpec kParams_64[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件fileid", "文本型", false, false, false, "文件fileid"},
    {"文件夹名", "文本型", false, true, false, "文件夹名"},
};

static const ApiParamSpec kParams_65[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件fileid", "文本型", false, false, false, "文件fileid"},
};

static const ApiParamSpec kParams_66[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件fileid", "文本型", false, false, false, "文件fileid"},
    {"当前文件夹名", "文本型", false, true, false, "当前文件夹名"},
    {"目标文件夹名", "文本型", false, true, false, "目标文件夹名"},
};

static const ApiParamSpec kParams_67[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件夹名", "文本型", false, true, false, "文件夹名"},
    {"数据", "群文件信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_68[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"main", "整数型", false, false, false, "main"},
    {"sun", "整数型", false, true, false, "sun"},
    {"电量", "整数型", false, true, false, "电量"},
};

static const ApiParamSpec kParams_69[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_70[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_71[] = {
    {"图片代码", "文本型", false, false, false, "图片代码"},
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_72[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"数据", "好友信息", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_73[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"数据", "群卡片信息", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_74[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_75[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"目标群号", "长整数型", false, false, false, "目标群号"},
    {"fileId", "文本型", false, false, false, "fileId"},
};

static const ApiParamSpec kParams_76[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"目标QQ", "长整数型", false, false, false, "目标QQ"},
    {"fileId", "文本型", false, false, false, "fileId"},
    {"filename", "文本型", false, false, false, "filename"},
    {"filesize", "长整数型", false, false, false, "filesize"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"time", "整数型", true, true, false, "取变量地址 (time)"},
};

static const ApiParamSpec kParams_77[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"目标QQ", "长整数型", false, false, false, "目标QQ"},
    {"fileId", "文本型", false, false, false, "fileId"},
    {"filename", "文本型", false, false, false, "filename"},
    {"filesize", "长整数型", false, false, false, "filesize"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"time", "整数型", true, true, false, "取变量地址 (time)"},
};

static const ApiParamSpec kParams_78[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"设置类型", "整数型", false, false, false, "设置类型"},
};

static const ApiParamSpec kParams_79[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_80[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"数据", "QQ钱包信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_81[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"订单号", "文本型", false, false, false, "订单号"},
    {"数据", "订单详情", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_82[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"验证码信息", "验证码信息", false, false, false, "取变量地址 (验证码信息)"},
    {"验证码", "文本型", false, false, false, "验证码"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
};

static const ApiParamSpec kParams_83[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"分享对象", "长整数型", false, false, false, "分享对象"},
    {"歌曲名", "文本型", false, false, false, "歌曲名"},
    {"歌手名", "文本型", false, false, false, "歌手名"},
    {"跳转地址", "文本型", false, false, false, "跳转地址"},
    {"封面地址", "文本型", false, false, false, "封面地址"},
    {"文件地址", "文本型", false, true, false, "文件地址"},
    {"应用类型", "整数型", false, true, false, "应用类型"},
    {"分享类型", "整数型", false, true, false, "分享类型"},
};

static const ApiParamSpec kParams_84[] = {
    {"数据指针", "整数型", false, false, false, "数据指针"},
    {"新消息内容", "文本型", false, false, false, "新消息内容"},
};

static const ApiParamSpec kParams_85[] = {
    {"数据指针", "整数型", false, false, false, "数据指针"},
    {"新消息内容", "文本型", false, false, false, "新消息内容"},
};

static const ApiParamSpec kParams_86[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"口令", "文本型", false, false, false, "口令"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_87[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_88[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_89[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"题目名", "文本型", false, false, false, "题目名"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_90[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"语音口令", "文本型", false, false, false, "语音口令"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_91[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"接龙内容", "文本型", false, false, false, "接龙内容"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_92[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"领取人", "文本型", false, false, false, "领取人"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"是否均分", "逻辑型", false, true, false, "是否均分"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_93[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"口令", "文本型", false, false, false, "口令"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_94[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_95[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"题目名", "文本型", false, false, false, "题目名"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_96[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"语音口令", "文本型", false, false, false, "语音口令"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_97[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"接龙内容", "文本型", false, false, false, "接龙内容"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_98[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"头衔", "文本型", false, false, false, "头衔"},
};

static const ApiParamSpec kParams_99[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_100[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_101[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"数据", "群未领红包数据", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_102[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"输入状态", "整数型", false, true, false, "输入状态"},
};

static const ApiParamSpec kParams_103[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"昵称", "文本型", false, true, false, "s.取文本 (, )"},
    {"性别", "整数型", false, true, false, "性别"},
    {"生日", "文本型", false, true, false, "生日"},
    {"职业", "整数型", false, true, false, "职业"},
    {"公司名", "文本型", false, true, false, "公司名"},
    {"所在地", "文本型", false, true, false, "所在地"},
    {"家乡", "文本型", false, true, false, "家乡"},
    {"邮箱", "文本型", false, true, false, "邮箱"},
    {"个人说明", "文本型", false, true, false, "个人说明"},
};

static const ApiParamSpec kParams_104[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"文件id", "文本型", false, false, false, "文件id"},
    {"文件名", "文本型", false, false, false, "文件名"},
};

static const ApiParamSpec kParams_105[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_106[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_107[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_108[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"数据", "群成员状况简略信息", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_109[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"置顶", "逻辑型", false, true, false, "置顶"},
};

static const ApiParamSpec kParams_110[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"置顶", "逻辑型", false, false, false, "置顶"},
};

static const ApiParamSpec kParams_111[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_112[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"消息Req", "整数型", false, false, false, "消息Req"},
    {"消息Random", "长整数型", false, false, false, "消息Random"},
};

static const ApiParamSpec kParams_113[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"名片规则", "文本型", false, false, false, "名片规则"},
};

static const ApiParamSpec kParams_114[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"限制条数", "整数型", false, false, false, "限制条数"},
};

static const ApiParamSpec kParams_115[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"查找方式", "整数型", false, true, false, "查找方式"},
};

static const ApiParamSpec kParams_116[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"目标群号", "长整数型", false, false, false, "目标群号"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"来源群号", "长整数型", false, true, false, "来源群号"},
};

static const ApiParamSpec kParams_117[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"通知类型", "整数型", false, true, false, "通知类型"},
};

static const ApiParamSpec kParams_118[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"名称", "文本型", false, false, false, "名称"},
};

static const ApiParamSpec kParams_119[] = {
    {"新文件路径", "文本型", false, true, false, "新文件路径"},
};

static const ApiParamSpec kParams_120[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"移动设备", "逻辑型", false, true, false, "移动设备"},
    {"appid", "整数型", false, true, false, "appid"},
};

static const ApiParamSpec kParams_121[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"回调跳转地址", "文本型", false, false, false, "回调跳转地址"},
    {"appid", "文本型", false, false, false, "appid"},
    {"daid", "文本型", false, false, false, "daid"},
    {"cookie", "文本型", true, false, false, "取变量地址 (cookie)"},
};

static const ApiParamSpec kParams_122[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"标题", "文本型", false, false, false, "标题"},
    {"内容", "文本型", false, false, false, "内容"},
    {"图片", "字节集", false, true, false, "视频"},
    {"视频", "文本型", false, true, false, "弹窗展示"},
    {"弹窗展示", "逻辑型", false, true, false, "需要确认"},
    {"需要确认", "逻辑型", false, true, false, "置顶"},
    {"置顶", "逻辑型", false, true, false, "发送给新成员"},
    {"发送给新成员", "逻辑型", false, true, false, "引导修改群昵称"},
    {"引导修改群昵称", "逻辑型", false, true, false, "取变量数据地址 (图片)"},
};

static const ApiParamSpec kParams_123[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_124[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"数据", "群成员信息V2", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_125[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_126[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_127[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"转账金额", "整数型", false, false, false, "转账金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"转账留言", "文本型", false, true, false, "转账留言"},
    {"转账类型", "整数型", false, false, false, "转账类型"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_128[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"收款金额", "整数型", false, true, false, "收款金额"},
    {"说明文本", "文本型", false, false, false, "说明文本"},
};

static const ApiParamSpec kParams_129[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"来源QQ", "长整数型", false, false, false, "来源QQ"},
    {"param", "文本型", false, true, false, "param"},
    {"hash1", "文本型", false, true, false, "hash1"},
    {"文件名", "文本型", false, true, false, "文件名"},
    {"小视频代码", "文本型", false, false, false, "小视频代码"},
};

static const ApiParamSpec kParams_130[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源QQ", "长整数型", false, false, false, "来源QQ"},
    {"param", "文本型", false, false, false, "param"},
    {"hash1", "文本型", false, false, false, "hash1"},
    {"文件名", "文本型", false, false, false, "文件名"},
};

static const ApiParamSpec kParams_131[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"本地小视频路径", "文本型", false, false, false, "本地小视频路径"},
    {"小视频封面图", "字节集", false, false, false, "取变量数据地址 (小视频封面图)"},
    {"宽度", "整数型", false, true, false, "取字节集长度 (小视频封面图)"},
    {"高度", "整数型", false, true, false, "高度"},
    {"时长", "整数型", false, true, false, "时长"},
};

static const ApiParamSpec kParams_132[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"xml代码", "文本型", false, false, false, "xml代码"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
};

static const ApiParamSpec kParams_133[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"xml代码", "文本型", false, false, false, "xml代码"},
    {"匿名发送", "逻辑型", false, true, false, "匿名发送"},
};

static const ApiParamSpec kParams_134[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_135[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_136[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_137[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"附加参数", "文本型", false, true, false, "附加参数"},
};

static const ApiParamSpec kParams_138[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"备注", "文本型", false, false, false, "备注"},
};

static const ApiParamSpec kParams_139[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"红包ID", "文本型", false, false, false, "红包ID"},
    {"目标对象", "长整数型", false, false, false, "目标对象"},
    {"Type", "整数型", false, false, false, "Type"},
};

static const ApiParamSpec kParams_140[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"包体序号", "整数型", false, false, false, "包体序号"},
    {"最大等待时长", "整数型", false, true, false, "最大等待时长"},
    {"数据", "字节集", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_141[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_142[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_143[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"自定义bkn_gtk", "文本型", false, true, false, "自定义bkn_gtk"},
};

static const ApiParamSpec kParams_144[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"验证方式", "整数型", false, false, false, "验证方式"},
    {"Q_and_A", "文本型", false, true, false, "Q_and_A"},
};

static const ApiParamSpec kParams_145[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"pic", "字节集", false, false, false, "取变量数据地址 (pic)"},
};

static const ApiParamSpec kParams_146[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"QrcodeUrl", "文本型", false, false, false, "QrcodeUrl"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_147[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"原密码", "文本型", false, false, false, "原密码"},
    {"新密码", "文本型", false, false, false, "新密码"},
};

static const ApiParamSpec kParams_148[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"关键词", "文本型", false, false, false, "关键词"},
};

static const ApiParamSpec kParams_149[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_150[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, true, false, "来源群号"},
    {"红包文本代码", "文本型", false, false, false, "红包文本代码"},
    {"红包类型", "整数型", false, false, false, "红包类型"},
};

static const ApiParamSpec kParams_151[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"FileId", "文本型", false, false, false, "FileId"},
    {"FileName", "文本型", false, false, false, "FileName"},
};

static const ApiParamSpec kParams_152[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"群成员QQ", "长整数型", false, false, true, "取变量地址 (群成员QQ)"},
    {"拒绝加群申请", "逻辑型", false, false, false, "拒绝加群申请"},
};

static const ApiParamSpec kParams_153[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_154[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"数据", "资料展示设置数据", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_155[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"数据", "资料展示设置数据", false, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_156[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"信息", "登录设备信息", true, false, false, "取变量地址 (信息)"},
};

static const ApiParamSpec kParams_157[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"图片地址", "文本型", false, false, false, "图片地址"},
    {"识别结果", "文本型", true, false, false, "取变量地址 (识别结果)"},
};

static const ApiParamSpec kParams_158[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_159[] = {
    {"内容", "字节集", true, false, false, "取变量地址 (内容)"},
    {"秘钥", "字节集", false, false, false, "取变量地址 (秘钥)"},
};

static const ApiParamSpec kParams_160[] = {
    {"内容", "字节集", true, false, false, "取变量地址 (内容)"},
    {"秘钥", "字节集", false, false, false, "取变量地址 (秘钥)"},
};

static const ApiParamSpec kParams_161[] = {
    {"str", "文本型", false, false, false, "str"},
    {"random", "整数型", false, false, false, "random"},
};

static const ApiParamSpec kParams_162[] = {
    {"str", "文本型", false, false, false, "str"},
    {"random", "整数型", false, true, false, "random"},
};

static const ApiParamSpec kParams_163[] = {
    {"目标QQ", "长整数型", false, false, false, "目标QQ"},
};

static const ApiParamSpec kParams_164[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"消息Req", "整数型", false, false, false, "消息Req"},
    {"消息Random", "长整数型", false, false, false, "消息Random"},
};

static const ApiParamSpec kParams_165[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"加群方式", "整数型", false, true, false, "加群方式"},
    {"问题", "文本型", false, true, false, "问题"},
    {"答案", "文本型", false, true, false, "答案"},
};

static const ApiParamSpec kParams_166[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否开启", "逻辑型", false, false, false, "是否开启"},
};

static const ApiParamSpec kParams_167[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否允许", "逻辑型", false, false, false, "是否允许"},
};

static const ApiParamSpec kParams_168[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_169[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_170[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"新密码", "文本型", false, false, false, "新密码"},
};

static const ApiParamSpec kParams_171[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"触发QQ", "长整数型", false, false, false, "触发QQ"},
    {"消息Seq", "长整数型", false, false, false, "消息Seq"},
    {"操作类型", "整数型", false, false, false, "操作类型"},
    {"事件类型", "整数型", false, false, false, "事件类型"},
    {"拒绝理由", "文本型", false, true, false, "拒绝理由"},
};

static const ApiParamSpec kParams_172[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"网址", "文本型", false, false, false, "网址"},
};

static const ApiParamSpec kParams_173[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"聊天记录", "群消息数据", false, false, true, "取变量地址 (聊天记录)"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
    {"消息记录来源", "文本型", false, true, false, "消息记录来源"},
};

static const ApiParamSpec kParams_174[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"聊天记录", "群消息数据", false, false, true, "取变量地址 (聊天记录)"},
    {"匿名发送", "逻辑型", false, true, false, "匿名发送"},
    {"消息记录来源", "文本型", false, true, false, "消息记录来源"},
};

static const ApiParamSpec kParams_175[] = {
    {"卡片消息文本代码", "文本型", false, false, false, "卡片消息文本代码"},
};

static const ApiParamSpec kParams_176[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"匿名昵称", "文本型", false, false, false, "匿名昵称"},
    {"匿名标识", "字节集", false, false, false, "取变量地址 (匿名标识)"},
    {"禁言时长", "整数型", false, false, false, "禁言时长"},
};

static const ApiParamSpec kParams_177[] = {
    {"文件下载地址", "文本型", false, false, false, "文件下载地址"},
    {"文件保存路径", "文本型", false, false, false, "文件保存路径"},
    {"下载回调函数", "子程序指针", false, true, false, "到整数 (下载回调函数)"},
    {"文件名", "文本型", false, true, false, "文件名"},
    {"下载起点", "整数型", false, true, false, "下载起点"},
};

static const ApiParamSpec kParams_178[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源QQ", "长整数型", false, false, false, "来源QQ"},
    {"红包文本代码", "文本型", false, false, false, "红包文本代码"},
    {"类型", "整数型", false, true, false, "类型"},
};

static const ApiParamSpec kParams_179[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源群号", "长整数型", false, false, false, "来源群号"},
    {"来源QQ", "长整数型", false, false, false, "来源QQ"},
    {"红包文本代码", "文本型", false, false, false, "红包文本代码"},
};

static const ApiParamSpec kParams_180[] = {
    {"网址", "文本型", false, false, false, "网址"},
};

static const ApiParamSpec kParams_181[] = {
    {"压缩包路径", "文本型", false, false, false, "压缩包路径"},
    {"解压保存路径", "文本型", false, false, false, "解压保存路径"},
    {"解压密码", "文本型", false, false, false, "解压密码"},
    {"跳过已存在的文件", "逻辑型", false, false, false, "跳过已存在的文件"},
};

static const ApiParamSpec kParams_182[] = {
    {"保存路径", "文本型", false, false, false, "保存路径"},
    {"欲压缩的文件", "文本型", false, false, false, "欲压缩的文件"},
    {"压缩格式", "文本型", false, false, false, "压缩格式"},
    {"压缩等级", "整数型", false, false, false, "压缩等级"},
    {"压缩密码", "文本型", false, false, false, "压缩密码"},
};

static const ApiParamSpec kParams_183[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
};

static const ApiParamSpec kParams_184[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"Json代码", "文本型", false, false, false, "Json代码"},
};

static const ApiParamSpec kParams_185[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"Xml代码", "文本型", false, false, false, "Xml代码"},
};

static const ApiParamSpec kParams_186[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
    {"消息Random", "长整数型", true, true, false, "取变量地址 (消息Random)"},
    {"消息Req", "整数型", true, true, false, "取变量地址 (消息Req)"},
};

static const ApiParamSpec kParams_187[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"消息Random", "长整数型", false, false, false, "消息Random"},
    {"消息Req", "整数型", false, false, false, "消息Req"},
};

static const ApiParamSpec kParams_188[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"会话Token", "字节集", false, false, false, "取变量地址 (会话Token)"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
    {"消息Random", "长整数型", true, true, false, "取变量地址 (消息Random)"},
    {"消息Req", "整数型", true, true, false, "取变量地址 (消息Req)"},
};

static const ApiParamSpec kParams_189[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"订阅号Id", "长整数型", false, false, false, "订阅号Id"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
    {"消息Random", "长整数型", true, true, false, "取变量地址 (消息Random)"},
    {"消息Req", "整数型", true, true, false, "取变量地址 (消息Req)"},
};

static const ApiParamSpec kParams_190[] = {
    {"讨论组Id", "文本型", false, false, false, "讨论组Id"},
};

static const ApiParamSpec kParams_191[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"新名称", "文本型", false, false, false, "新名称"},
};

static const ApiParamSpec kParams_192[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"数据", "讨论组成员信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_193[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_194[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"数据", "订阅号信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_195[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"数据", "讨论组信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_196[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"目标群号", "长整数型", false, false, false, "目标群号"},
    {"邀请QQ", "长整数型", false, false, true, "取变量地址 (邀请QQ)"},
    {"来源群号", "长整数型", false, true, false, "来源群号"},
};

static const ApiParamSpec kParams_197[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"目标讨论组Id", "长整数型", false, false, false, "目标讨论组Id"},
    {"邀请QQ", "长整数型", false, false, true, "取变量地址 (邀请QQ)"},
    {"来源群号", "长整数型", false, true, false, "来源群号"},
};

static const ApiParamSpec kParams_198[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_199[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"口令", "文本型", false, false, false, "口令"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_200[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_201[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_202[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"题目名", "文本型", false, false, false, "题目名"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_203[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"语音口令", "文本型", false, false, false, "语音口令"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_204[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"接龙内容", "文本型", false, false, false, "接龙内容"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_205[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"领取人", "文本型", false, false, false, "领取人"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"是否均分", "逻辑型", false, true, false, "是否均分"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_206[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源讨论组Id", "长整数型", false, false, false, "来源讨论组Id"},
    {"来源QQ", "长整数型", false, false, false, "来源QQ"},
    {"红包文本代码", "文本型", false, false, false, "红包文本代码"},
};

static const ApiParamSpec kParams_207[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"数据", "群未领红包数据", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_208[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"文件id", "文本型", false, false, false, "文件id"},
    {"文件名", "文本型", false, false, false, "文件名"},
};

static const ApiParamSpec kParams_209[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
    {"消息Random", "长整数型", true, true, false, "取变量地址 (消息Random)"},
    {"消息Req", "整数型", true, true, false, "取变量地址 (消息Req)"},
};

static const ApiParamSpec kParams_210[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"邀请QQ", "长整数型", false, false, true, "取变量地址 (邀请QQ)"},
    {"来源群号", "长整数型", false, true, false, "来源群号"},
    {"新群群号", "长整数型", true, false, false, "取变量地址 (新群群号)"},
};

static const ApiParamSpec kParams_211[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"数据", "群应用信息", true, false, true, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_212[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
};

static const ApiParamSpec kParams_213[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"接收验证消息", "逻辑型", false, true, false, "接收验证消息"},
};

static const ApiParamSpec kParams_214[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_215[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"备注", "文本型", false, false, false, "备注"},
};

static const ApiParamSpec kParams_216[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_217[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源讨论组Id", "长整数型", false, false, false, "来源讨论组Id"},
    {"目标群号", "长整数型", false, false, false, "目标群号"},
    {"fileId", "文本型", false, false, false, "fileId"},
    {"filename", "文本型", false, false, false, "filename"},
    {"filesize", "长整数型", false, false, false, "filesize"},
};

static const ApiParamSpec kParams_218[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"来源讨论组Id", "长整数型", false, false, false, "来源讨论组Id"},
    {"目标QQ", "长整数型", false, false, false, "目标QQ"},
    {"fileId", "文本型", false, false, false, "fileId"},
    {"filename", "文本型", false, false, false, "filename"},
    {"filesize", "长整数型", false, false, false, "filesize"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"time", "整数型", true, true, false, "取变量地址 (time)"},
};

static const ApiParamSpec kParams_219[] = {
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"高清原图", "逻辑型", false, true, false, "高清原图"},
};

static const ApiParamSpec kParams_220[] = {
    {"目标群号", "长整数型", false, false, false, "目标群号"},
};

static const ApiParamSpec kParams_221[] = {
    {"大表情文本代码", "文本型", false, false, false, "大表情文本代码"},
    {"长", "整数型", false, true, false, "长"},
    {"宽", "整数型", false, true, false, "宽"},
};

static const ApiParamSpec kParams_222[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"待付款成员", "待付款者信息", false, false, true, "取变量地址 (待付款成员)"},
    {"收款留言", "文本型", false, false, false, "收款留言"},
    {"收款订单号", "文本型", true, true, false, "取变量地址 (收款订单号)"},
};

static const ApiParamSpec kParams_223[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"收款订单号", "文本型", false, false, false, "收款订单号"},
};

static const ApiParamSpec kParams_224[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"收款订单号", "文本型", false, false, false, "收款订单号"},
    {"收款数据", "群收款信息", true, true, false, "取变量地址 (收款数据)"},
};

static const ApiParamSpec kParams_225[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"收款发起人", "长整数型", false, false, false, "收款发起人"},
    {"收款订单号", "文本型", false, false, false, "收款订单号"},
    {"支付金额", "整数型", false, false, false, "支付金额"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_226[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"聊天记录", "群消息数据", false, false, true, "取变量地址 (聊天记录)"},
    {"消息记录来源", "文本型", false, true, false, "消息记录来源"},
};

static const ApiParamSpec kParams_227[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"收款订单号", "文本型", false, false, false, "收款订单号"},
};

static const ApiParamSpec kParams_228[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"Diy名片数据", "文本型", true, false, false, "取变量地址 (Diy名片数据)"},
};

static const ApiParamSpec kParams_229[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"Diy名片数据", "文本型", false, false, false, "Diy名片数据"},
};

static const ApiParamSpec kParams_230[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_231[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"生僻字", "文本型", false, false, false, "生僻字"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量数据地址 (验证码信息)"},
};

static const ApiParamSpec kParams_232[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"生僻字", "文本型", false, false, false, "生僻字"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_233[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"讨论组Id", "长整数型", false, false, false, "讨论组Id"},
    {"生僻字", "文本型", false, false, false, "生僻字"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_234[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"代付订单号", "文本型", false, false, false, "代付订单号"},
    {"支付金额", "整数型", false, false, false, "支付金额"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_235[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"代付订单号", "文本型", false, false, false, "代付订单号"},
    {"代付数据", "文本型", false, false, false, "代付数据"},
};

static const ApiParamSpec kParams_236[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"订单号", "文本型", false, false, false, "订单号"},
    {"代付QQ列表", "文本型", false, false, false, "代付QQ列表"},
};

static const ApiParamSpec kParams_237[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"能量值", "整数型", true, true, false, "取变量地址 (能量值)"},
    {"QID", "文本型", true, true, false, "取变量地址 (QID)"},
};

static const ApiParamSpec kParams_238[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_239[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"文本内容", "文本型", false, false, false, "文本内容"},
    {"语音结果", "字节集", true, false, false, "取变量地址 (语音结果)"},
};

static const ApiParamSpec kParams_240[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"源语言语种", "文本型", false, false, false, "源语言语种"},
    {"目标语言语种", "文本型", false, false, false, "目标语言语种"},
    {"原文", "文本型", false, false, false, "原文"},
    {"翻译结果", "文本型", true, false, false, "取变量地址 (翻译结果)"},
};

static const ApiParamSpec kParams_241[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"消息Random", "长整数型", false, false, false, "消息Random"},
    {"消息Req", "整数型", false, false, false, "消息Req"},
};

static const ApiParamSpec kParams_242[] = {
    {"QQ", "长整数型", false, false, false, "QQ"},
    {"品牌", "文本型", false, true, false, "品牌"},
    {"型号", "文本型", false, true, false, "型号"},
};

static const ApiParamSpec kParams_243[] = {
    {"QQ", "长整数型", false, false, false, "QQ"},
    {"二维码数据", "字节集", true, false, false, "取变量地址 (bin)"},
};

static const ApiParamSpec kParams_244[] = {
    {"QQ", "长整数型", false, false, false, "QQ"},
};

static const ApiParamSpec kParams_245[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_246[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
    {"消息Random", "长整数型", true, true, false, "取变量地址 (消息Random)"},
    {"消息Req", "整数型", true, true, false, "取变量地址 (消息Req)"},
};

static const ApiParamSpec kParams_247[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"会话Token", "字节集", false, false, false, "取变量地址 (会话Token)"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
    {"消息Random", "长整数型", true, true, false, "取变量地址 (消息Random)"},
    {"消息Req", "整数型", true, true, false, "取变量地址 (消息Req)"},
};

static const ApiParamSpec kParams_248[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"已使用容量", "长整数型", true, false, false, "取变量地址 (已使用容量)"},
    {"总容量", "长整数型", true, false, false, "取变量地址 (总容量)"},
};

static const ApiParamSpec kParams_249[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"已上传文件数", "长整数型", true, false, false, "取变量地址 (已上传文件数)"},
    {"文件数量上限", "长整数型", true, false, false, "取变量地址 (文件数量上限)"},
};

static const ApiParamSpec kParams_250[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"模型Id", "整数型", false, true, false, "模型Id"},
    {"涂鸦数据", "字节集", false, false, false, "取变量地址 (涂鸦数据)"},
};

static const ApiParamSpec kParams_251[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"欲移除群成员列表", "欲移除群成员列表", false, false, true, "取变量地址 (欲移除群成员列表)"},
};

static const ApiParamSpec kParams_252[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"文件路径", "文本型", false, false, false, "文件路径"},
    {"上传进度回调函数", "整数型", false, true, false, "上传进度回调函数"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
};

static const ApiParamSpec kParams_253[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件路径", "文本型", false, false, false, "文件路径"},
    {"文件夹名", "文本型", false, true, false, "文件夹名"},
    {"上传进度回调函数", "整数型", false, true, false, "上传进度回调函数"},
};

static const ApiParamSpec kParams_254[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_255[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_256[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"相册名", "文本型", false, false, false, "相册名"},
    {"相册描述", "文本型", false, false, false, "相册描述"},
};

static const ApiParamSpec kParams_257[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"相册Id", "文本型", false, false, false, "相册Id"},
};

static const ApiParamSpec kParams_258[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_259[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"相册Id", "文本型", false, false, false, "相册Id"},
    {"获取数量", "整数型", false, false, false, "获取数量"},
};

static const ApiParamSpec kParams_260[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"相册Id", "文本型", false, false, false, "相册Id"},
    {"照片Id", "文本型", false, false, false, "照片Id"},
};

static const ApiParamSpec kParams_261[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"相册Id", "文本型", false, false, false, "相册Id"},
    {"相册名", "文本型", false, false, false, "相册名"},
    {"相册描述", "文本型", false, false, false, "相册描述"},
    {"相册置顶", "逻辑型", false, true, false, "相册置顶"},
};

static const ApiParamSpec kParams_262[] = {
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_263[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"pic", "字节集", false, false, false, "取变量数据地址 (pic)"},
    {"宽度", "整数型", false, true, false, "取字节集长度 (pic)"},
    {"高度", "整数型", false, true, false, "高度"},
    {"动图", "逻辑型", false, true, false, "动图"},
};

static const ApiParamSpec kParams_264[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
};

static const ApiParamSpec kParams_265[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"私信频道Id", "长整数型", false, false, false, "私信频道Id"},
    {"私信子频道Id", "长整数型", false, false, false, "私信子频道Id"},
    {"消息内容", "文本型", false, false, false, "消息内容"},
};

static const ApiParamSpec kParams_266[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"目标频道用户Id", "长整数型", false, false, false, "目标频道用户Id"},
    {"私信频道Id", "长整数型", true, false, false, "取变量地址 (_私信频道Id)"},
    {"私信子频道Id", "长整数型", true, false, false, "取变量地址 (_私信子频道Id)"},
};

static const ApiParamSpec kParams_267[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"消息req", "整数型", false, false, false, "消息req"},
    {"表情Id", "文本型", false, false, false, "表情Id"},
    {"是否为emoji", "逻辑型", false, true, false, "是否为emoji"},
    {"取消粘贴", "逻辑型", false, true, false, "取消粘贴"},
};

static const ApiParamSpec kParams_268[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"消息req", "整数型", false, false, false, "消息req"},
};

static const ApiParamSpec kParams_269[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"私信频道Id", "长整数型", false, false, false, "私信频道Id"},
    {"私信子频道Id", "长整数型", false, false, false, "私信子频道Id"},
    {"消息req", "整数型", false, false, false, "消息req"},
};

static const ApiParamSpec kParams_270[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"消息req", "整数型", false, false, false, "消息req"},
    {"移除", "逻辑型", false, true, false, "移除"},
};

static const ApiParamSpec kParams_271[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"禁言秒数", "整数型", false, true, false, "禁言秒数"},
};

static const ApiParamSpec kParams_272[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"禁言秒数", "整数型", false, true, false, "禁言秒数"},
};

static const ApiParamSpec kParams_273[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"拉入黑名单", "逻辑型", false, true, false, "拉入黑名单"},
};

static const ApiParamSpec kParams_274[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道用户Id列表", "长整数型", false, false, true, "取变量地址 (频道用户Id列表)"},
    {"拉入黑名单", "逻辑型", false, true, false, "拉入黑名单"},
};

static const ApiParamSpec kParams_275[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
};

static const ApiParamSpec kParams_276[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"新名称", "文本型", false, false, false, "新名称"},
    {"字色", "长整数型", false, true, false, "字色"},
};

static const ApiParamSpec kParams_277[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"新简介", "文本型", false, false, false, "新简介"},
};

static const ApiParamSpec kParams_278[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道昵称", "文本型", false, false, false, "频道昵称"},
};

static const ApiParamSpec kParams_279[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"类型", "整数型", false, true, false, "类型"},
    {"指定身份组Id", "长整数型", false, true, true, "取变量地址 (指定身份组Id)"},
    {"是否取消身份组观看权限", "逻辑型", false, true, false, "是否取消身份组观看权限"},
    {"指定频道成员Id", "长整数型", false, true, true, "取变量地址 (指定频道成员Id)"},
    {"是否取消频道成员观看权限", "逻辑型", false, true, false, "是否取消频道成员观看权限"},
};

static const ApiParamSpec kParams_280[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"类型", "整数型", false, true, false, "类型"},
    {"指定身份组Id", "长整数型", false, true, true, "取变量地址 (指定身份组Id)"},
    {"是否取消身份组发言权限", "逻辑型", false, true, false, "是否取消身份组发言权限"},
    {"指定频道成员", "长整数型", false, true, true, "取变量地址 (指定频道成员)"},
    {"是否取消频道成员发言权限", "逻辑型", false, true, false, "是否取消频道成员发言权限"},
};

static const ApiParamSpec kParams_281[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"对成员打开消息提醒", "逻辑型", false, true, false, "对成员打开消息提醒"},
};

static const ApiParamSpec kParams_282[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"模式", "整数型", false, true, false, "模式"},
};

static const ApiParamSpec kParams_283[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"新名称", "文本型", false, false, false, "新名称"},
};

static const ApiParamSpec kParams_284[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
};

static const ApiParamSpec kParams_285[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"新昵称", "文本型", false, false, false, "新昵称"},
};

static const ApiParamSpec kParams_286[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"性别", "整数型", false, true, false, "性别"},
};

static const ApiParamSpec kParams_287[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"年龄", "整数型", false, true, false, "年龄"},
};

static const ApiParamSpec kParams_288[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"国家代码", "整数型", false, false, false, "国家代码"},
    {"国家名称", "文本型", false, false, false, "国家名称"},
    {"省份代码", "整数型", false, false, false, "省份代码"},
    {"省份名称", "文本型", false, false, false, "省份名称"},
    {"市区代码", "整数型", false, false, false, "市区代码"},
    {"市区名称", "文本型", false, false, false, "市区名称"},
};

static const ApiParamSpec kParams_289[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"不允许", "逻辑型", false, true, false, "不允许"},
};

static const ApiParamSpec kParams_290[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"验证方式", "整数型", false, true, false, "验证方式"},
    {"问题", "文本型", false, true, false, "问题"},
    {"答案", "文本型", false, true, false, "答案"},
};

static const ApiParamSpec kParams_291[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"关键词", "文本型", false, false, false, "关键词"},
    {"第几页", "整数型", false, true, false, "第几页"},
    {"结果", "频道搜索结果", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_292[] = {
    {"频道Id", "长整数型", false, false, false, "频道Id"},
};

static const ApiParamSpec kParams_293[] = {
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"高清大图", "逻辑型", false, true, false, "高清大图"},
};

static const ApiParamSpec kParams_294[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"结果", "频道成员信息", true, false, true, "取变量地址 (结果)"},
    {"翻页数据", "整数型", true, true, false, "取变量地址 (翻页数据)"},
    {"翻页信息", "文本型", true, true, false, "取变量地址 (翻页信息)"},
};

static const ApiParamSpec kParams_295[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"结果", "频道信息", true, false, false, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_296[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"验证方式", "整数型", true, false, false, "取变量地址 (验证方式)"},
    {"问题", "文本型", true, true, false, "取变量地址 (问题)"},
};

static const ApiParamSpec kParams_297[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"验证方式", "整数型", false, false, false, "验证方式"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道Token", "文本型", false, false, false, "频道Token"},
    {"答案", "文本型", false, true, false, "答案"},
};

static const ApiParamSpec kParams_298[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"fileid", "文本型", false, false, false, "fileid"},
    {"filename", "文本型", false, false, false, "filename"},
};

static const ApiParamSpec kParams_299[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_300[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"红包皮肤Id", "整数型", false, true, false, "红包皮肤Id"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_301[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"总数量", "整数型", false, false, false, "总数量"},
    {"总金额", "整数型", false, false, false, "总金额"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"领取人频道用户Id", "长整数型", false, false, false, "领取人频道用户Id"},
    {"祝福语", "文本型", false, false, false, "祝福语"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, true, false, "银行卡序列"},
    {"验证码信息", "验证码信息", true, true, false, "取变量地址 (验证码信息)"},
};

static const ApiParamSpec kParams_302[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"发送人频道用户Id", "长整数型", false, false, false, "发送人频道用户Id"},
    {"红包文本代码", "文本型", false, false, false, "红包文本代码"},
};

static const ApiParamSpec kParams_303[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"结果", "频道用户身份组信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_304[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"身份组Id列表", "长整数型", false, false, true, "取变量地址 (身份组Id列表)"},
    {"是否取消身份组", "逻辑型", false, true, false, "是否取消身份组"},
};

static const ApiParamSpec kParams_305[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"身份组Id", "长整数型", false, false, false, "身份组Id"},
    {"身份组名", "文本型", false, false, false, "身份组名"},
    {"身份组外显颜色代码", "长整数型", false, true, false, "身份组外显颜色代码"},
    {"是否在成员列表中单独展示", "逻辑型", false, true, false, "是否在成员列表中单独展示"},
};

static const ApiParamSpec kParams_306[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"身份组Id", "长整数型", false, false, false, "身份组Id"},
};

static const ApiParamSpec kParams_307[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"身份组名", "文本型", false, false, false, "身份组名"},
    {"身份组外显颜色代码", "长整数型", false, true, false, "身份组外显颜色代码"},
    {"是否在成员列表中单独展示", "逻辑型", false, true, false, "是否在成员列表中单独展示"},
};

static const ApiParamSpec kParams_308[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"结果", "频道身份组信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_309[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"结果", "子频道信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_310[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"结果", "频道用户个性档案信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_311[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"结果", "频道用户信息", true, false, false, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_312[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_313[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_314[] = {
    {"频道用户Id", "文本型", false, false, false, "频道用户Id"},
};

static const ApiParamSpec kParams_315[] = {
    {"频道Id", "文本型", false, false, false, "频道Id"},
};

static const ApiParamSpec kParams_316[] = {
    {"频道Id", "文本型", false, false, false, "频道Id"},
    {"子频道Id", "文本型", false, false, false, "子频道Id"},
};

static const ApiParamSpec kParams_317[] = {
    {"频道Id", "文本型", false, false, false, "频道Id"},
    {"频道用户Id", "文本型", false, false, false, "频道用户Id"},
};

static const ApiParamSpec kParams_318[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"结果", "子频道分组信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_319[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_320[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "文件路径"},
    {"子频道Id", "长整数型", false, false, false, "频道Id"},
    {"文件路径", "文本型", false, false, false, "子频道Id"},
    {"上传进度回调函数", "整数型", false, true, false, "图片宽度"},
    {"图片宽度", "整数型", false, true, false, "图片高度"},
    {"图片高度", "整数型", false, true, false, "上传进度回调函数"},
};

static const ApiParamSpec kParams_321[] = {
    {"数据指针", "整数型", false, false, false, "数据指针"},
    {"新消息内容", "文本型", false, false, false, "新消息内容"},
};

static const ApiParamSpec kParams_322[] = {
    {"Emoji代码", "文本型", false, false, false, "Emoji代码"},
};

static const ApiParamSpec kParams_323[] = {
    {"频道EmojiId", "文本型", false, false, false, "频道EmojiId"},
};

static const ApiParamSpec kParams_324[] = {
    {"Emoji代码", "文本型", false, false, false, "Emoji代码"},
};

static const ApiParamSpec kParams_325[] = {
    {"QQ空间EmId", "文本型", false, false, false, "QQ空间EmId"},
};

static const ApiParamSpec kParams_326[] = {
    {"小黄豆Id", "文本型", false, false, false, "小黄豆Id"},
};

static const ApiParamSpec kParams_327[] = {
    {"QQ空间EmId", "文本型", false, false, false, "QQ空间EmId"},
};

static const ApiParamSpec kParams_328[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"身份组Id", "长整数型", false, false, false, "身份组Id"},
    {"结果", "特定身份组成员信息", true, false, true, "取变量地址 (结果)"},
    {"开始位置", "整数型", false, true, false, "开始位置"},
};

static const ApiParamSpec kParams_329[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
};

static const ApiParamSpec kParams_330[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道分组结构", "文本型", false, false, false, "子频道分组结构"},
};

static const ApiParamSpec kParams_331[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id列表", "长整数型", false, false, true, "取变量地址 (子频道Id列表)"},
};

static const ApiParamSpec kParams_332[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"原始子频道分组结构", "文本型", false, false, false, "原始子频道分组结构"},
    {"子频道名称", "文本型", false, false, false, "子频道名称"},
    {"消息提醒设置", "整数型", false, true, false, "消息提醒设置"},
    {"子频道类型", "整数型", false, true, false, "子频道类型"},
    {"子频道子类型", "整数型", false, true, false, "子频道子类型"},
    {"应用Id", "整数型", false, true, false, "应用Id"},
    {"可视类型", "整数型", false, true, false, "可视类型"},
    {"指定成员频道用户Id列表", "长整数型", false, true, true, "取变量地址 (指定成员频道用户Id列表)"},
    {"指定身份组Id", "长整数型", false, true, true, "取变量地址 (指定身份组Id)"},
    {"所属分组index", "整数型", false, false, false, "所属分组index"},
    {"分组内位置", "整数型", false, false, false, "分组内位置"},
};

static const ApiParamSpec kParams_333[] = {
    {"卡片代码", "文本型", false, false, false, "卡片代码"},
    {"类型", "整数型", false, true, false, "类型"},
    {"强制发送", "逻辑型", false, true, false, "强制发送"},
};

static const ApiParamSpec kParams_334[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"歌曲名", "文本型", false, false, false, "歌曲名"},
    {"歌手名", "文本型", false, false, false, "歌手名"},
    {"跳转地址", "文本型", false, false, false, "跳转地址"},
    {"封面地址", "文本型", false, false, false, "封面地址"},
    {"文件地址", "文本型", false, true, false, "文件地址"},
    {"应用类型", "整数型", false, true, false, "应用类型"},
};

static const ApiParamSpec kParams_335[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id列表", "长整数型", false, false, true, "取变量地址 (频道Id列表)"},
};

static const ApiParamSpec kParams_336[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道用户标识", "文本型", false, false, false, "频道用户标识"},
    {"操作", "整数型", false, true, false, "操作"},
};

static const ApiParamSpec kParams_337[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_338[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"结果", "特定身份组成员信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_339[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"频道用户Id列表", "长整数型", false, false, true, "取变量地址 (频道用户Id列表)"},
    {"是否取消子频道管理", "逻辑型", false, true, false, "是否取消子频道管理"},
};

static const ApiParamSpec kParams_340[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"身份组Id", "长整数型", false, false, false, "身份组Id"},
    {"欲设置的子频道Id列表", "长整数型", false, false, true, "取变量地址 (欲设置的子频道Id列表)"},
    {"是否取消观看权限", "逻辑型", false, true, false, "是否取消观看权限"},
};

static const ApiParamSpec kParams_341[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"身份组Id", "长整数型", false, false, false, "身份组Id"},
    {"欲设置的子频道Id列表", "长整数型", false, false, true, "取变量地址 (欲设置的子频道Id列表)"},
    {"是否取消发言权限", "逻辑型", false, true, false, "是否取消发言权限"},
};

static const ApiParamSpec kParams_342[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"直播子频道Id", "长整数型", false, false, false, "直播子频道Id"},
    {"欲设置的频道用户Id列表", "长整数型", false, false, true, "取变量地址 (欲设置的频道用户Id列表)"},
    {"是否取消主播身份", "逻辑型", false, true, false, "是否取消主播身份"},
};

static const ApiParamSpec kParams_343[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
};

static const ApiParamSpec kParams_344[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
};

static const ApiParamSpec kParams_345[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"开启消息通知", "逻辑型", false, true, false, "开启消息通知"},
};

static const ApiParamSpec kParams_346[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"红包来源", "长整数型", false, true, false, "红包来源"},
    {"子频道Id", "长整数型", false, true, false, "子频道Id"},
    {"红包文本代码", "文本型", false, false, false, "红包文本代码"},
    {"红包类型", "整数型", false, false, false, "红包类型"},
    {"起始位置", "整数型", false, true, false, "起始位置"},
};

static const ApiParamSpec kParams_347[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"话题子频道Id", "长整数型", false, false, false, "话题子频道Id"},
    {"结果", "话题帖子信息", true, false, true, "取变量地址 (结果)"},
    {"翻页信息", "文本型", true, true, false, "取变量地址 (翻页信息)"},
};

static const ApiParamSpec kParams_348[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"日程子频道Id", "长整数型", false, false, false, "日程子频道Id"},
    {"时间戳", "长整数型", false, false, false, "时间戳"},
    {"结果", "日程信息", true, false, true, "取变量地址 (结果)"},
};

static const ApiParamSpec kParams_349[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"日程子频道Id", "长整数型", false, false, false, "日程子频道Id"},
    {"日程Id", "长整数型", false, false, false, "日程Id"},
};

static const ApiParamSpec kParams_350[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"日程子频道Id", "长整数型", false, false, false, "日程子频道Id"},
    {"日程Id", "长整数型", false, false, false, "日程Id"},
    {"信息", "日程信息", true, false, false, "取变量地址 (信息)"},
};

static const ApiParamSpec kParams_351[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"日程子频道Id", "长整数型", false, false, false, "日程子频道Id"},
    {"日程名", "文本型", false, false, false, "日程名"},
    {"日程描述", "文本型", false, false, false, "日程描述"},
    {"开始时间戳", "长整数型", false, false, false, "开始时间戳"},
    {"结束时间戳", "长整数型", false, false, false, "结束时间戳"},
    {"提醒", "整数型", false, true, false, "提醒"},
    {"开始时跳转的子频道Id", "长整数型", false, true, false, "开始时跳转的子频道Id"},
    {"信息", "日程信息", true, false, false, "取变量地址 (信息)"},
};

static const ApiParamSpec kParams_352[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_353[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"日程子频道Id", "长整数型", false, false, false, "日程子频道Id"},
    {"日程信息", "日程信息", false, false, false, "取变量地址 (日程信息)"},
};

static const ApiParamSpec kParams_354[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"通行证数量", "整数型", false, false, false, "通行证数量"},
};

static const ApiParamSpec kParams_355[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
};

static const ApiParamSpec kParams_356[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"解除屏蔽", "逻辑型", false, true, false, "解除屏蔽"},
};

static const ApiParamSpec kParams_357[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"关闭免打扰", "逻辑型", false, true, false, "关闭免打扰"},
};

static const ApiParamSpec kParams_358[] = {
    {"QQ", "长整数型", false, false, false, "QQ"},
    {"密码", "文本型", false, true, false, "密码"},
    {"手机品牌", "文本型", false, true, false, "手机品牌"},
    {"手机型号", "文本型", false, true, false, "手机型号"},
    {"协议", "整数型", false, true, false, "协议"},
    {"guid", "文本型", false, true, false, "guid"},
};

static const ApiParamSpec kParams_359[] = {
    {"QQ", "长整数型", false, false, false, "QQ"},
    {"彻底删除", "逻辑型", false, true, false, "彻底删除"},
};

static const ApiParamSpec kParams_360[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_361[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_362[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_363[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_364[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"消息req", "整数型", false, false, false, "消息req"},
};

static const ApiParamSpec kParams_365[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
};

static const ApiParamSpec kParams_366[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"目标", "长整数型", false, false, false, "目标"},
    {"经度", "双精度小数型", false, false, false, "经度"},
    {"纬度", "双精度小数型", false, false, false, "纬度"},
    {"是否开启", "逻辑型", false, true, false, "是否开启"},
    {"类型", "整数型", false, true, false, "类型"},
};

static const ApiParamSpec kParams_367[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"目标", "长整数型", false, false, false, "目标"},
    {"经度", "双精度小数型", false, false, false, "经度"},
    {"纬度", "双精度小数型", false, false, false, "纬度"},
    {"指针偏角", "双精度小数型", false, true, false, "指针偏角"},
};

static const ApiParamSpec kParams_368[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"分组Id", "整数型", false, false, false, "分组Id"},
};

static const ApiParamSpec kParams_369[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"分组Id", "整数型", false, false, false, "分组Id"},
    {"分组名", "文本型", false, false, false, "分组名"},
};

static const ApiParamSpec kParams_370[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"分组Id", "整数型", false, false, false, "分组Id"},
};

static const ApiParamSpec kParams_371[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_372[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"分组名", "文本型", false, false, false, "分组名"},
};

static const ApiParamSpec kParams_373[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
    {"红包listid", "文本型", false, false, false, "红包listid"},
    {"红包authkey", "文本型", false, false, false, "红包authkey"},
    {"红包channel", "文本型", false, false, false, "红包channel"},
    {"红包发送人频道用户Id", "长整数型", false, false, false, "红包发送人频道用户Id"},
};

static const ApiParamSpec kParams_374[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"红包接收对象", "长整数型", false, false, false, "红包接收对象"},
    {"红包标题", "文本型", false, false, false, "红包标题"},
    {"匹配语音hash", "文本型", false, false, false, "匹配语音hash"},
    {"红包listid", "文本型", false, false, false, "红包listid"},
    {"红包authkey", "文本型", false, false, false, "红包authkey"},
    {"红包发送者QQ", "长整数型", false, false, false, "红包发送者QQ"},
    {"红包来源类型", "整数型", false, true, false, "红包来源类型"},
};

static const ApiParamSpec kParams_375[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"红包来源群号", "长整数型", false, false, false, "红包来源群号"},
    {"audio", "字节集", false, false, false, "取变量数据地址 (audio)"},
};

static const ApiParamSpec kParams_376[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"resId", "文本型", false, false, false, "resId"},
};

static const ApiParamSpec kParams_377[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"消息来源", "文本型", false, false, false, "消息来源"},
    {"消息封面", "文本型", false, false, false, "消息封面"},
    {"合并转发消息内容", "文本型", false, false, false, "合并转发消息内容"},
};

static const ApiParamSpec kParams_378[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"语音hash", "文本型", false, false, false, "语音hash"},
    {"语音token", "文本型", false, false, false, "语音token"},
};

static const ApiParamSpec kParams_379[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"功能cmd", "文本型", false, false, false, "功能cmd"},
    {"最大等待时长", "整数型", false, true, false, "最大等待时长"},
    {"数据", "字节集", true, false, false, "取变量地址 (数据)"},
};

static const ApiParamSpec kParams_380[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"k值", "文本型", false, false, false, "k值"},
};

static const ApiParamSpec kParams_381[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_382[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"str_url", "文本型", false, false, false, "str_url"},
};

static const ApiParamSpec kParams_383[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_384[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_385[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"提现金额", "整数型", false, false, false, "提现金额"},
    {"支付密码", "文本型", false, false, false, "支付密码"},
    {"银行卡序列", "整数型", false, false, false, "银行卡序列"},
};

static const ApiParamSpec kParams_386[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_387[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_388[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"说说发布者QQ", "长整数型", false, false, false, "说说发布者QQ"},
    {"说说feedskey", "文本型", false, false, false, "说说feedskey"},
    {"取消点赞", "逻辑型", false, true, false, "取消点赞"},
};

static const ApiParamSpec kParams_389[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"说说发布者QQ", "长整数型", false, false, false, "说说发布者QQ"},
    {"说说feedskey", "文本型", false, false, false, "说说feedskey"},
    {"评论内容", "文本型", false, false, false, "评论内容"},
};

static const ApiParamSpec kParams_390[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"查询QQ", "长整数型", false, true, false, "查询QQ"},
};

static const ApiParamSpec kParams_391[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"关键词", "文本型", false, false, false, "关键词"},
};

static const ApiParamSpec kParams_392[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"内容", "文本型", false, false, false, "内容"},
    {"是否TCP发送", "逻辑型", false, false, false, "是否TCP发送"},
    {"是否私密", "逻辑型", false, false, false, "是否私密"},
    {"是否发表24小时候自动删除", "逻辑型", false, false, false, "是否发表24小时候自动删除"},
};

static const ApiParamSpec kParams_393[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"经度", "双精度小数型", false, false, false, "经度"},
    {"纬度", "双精度小数型", false, false, false, "纬度"},
};

static const ApiParamSpec kParams_394[] = {
    {nullptr, nullptr, false, false, false, nullptr},
};

static const ApiParamSpec kParams_395[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
    {"对方QQ", "长整数型", false, false, false, "对方QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"文件路径", "文本型", false, false, false, "文件路径"},
    {"上传进度回调函数", "整数型", false, true, false, "上传进度回调函数"},
    {"Random", "长整数型", true, true, false, "取变量地址 (Random)"},
    {"Req", "整数型", true, true, false, "取变量地址 (Req)"},
};

static const ApiParamSpec kParams_396[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"说说feedskey", "文本型", false, false, false, "说说feedskey"},
};

static const ApiParamSpec kParams_397[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"图片", "字节集", false, false, false, "取变量地址 (图片)"},
};

static const ApiParamSpec kParams_398[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"json", "文本型", false, false, false, "json"},
};

static const ApiParamSpec kParams_399[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"ptr", "struct_expression", true, false, true, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_400[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"ptr", "文本型", false, false, true, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_401[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"ptr", "字节集", false, false, false, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_402[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"ptr", "struct_tags", true, false, true, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_403[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"标签Id", "长整数型", false, false, false, "标签Id"},
    {"ptr", "字节集", false, false, false, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_404[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"ptr", "struct_bubble", true, false, true, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_405[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道用户Id", "长整数型", false, false, false, "频道用户Id"},
    {"拉入黑名单", "逻辑型", false, false, false, "拉入黑名单"},
    {"撤回发言", "逻辑型", false, false, false, "撤回发言"},
    {"撤回类型", "整数型", false, false, false, "撤回类型"},
};

static const ApiParamSpec kParams_406[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"设置类型", "整数型", false, false, false, "设置类型"},
    {"是否禁止", "逻辑型", false, false, false, "是否禁止"},
};

static const ApiParamSpec kParams_407[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"频道内发言需要人脸实名认证", "逻辑型", false, false, false, "频道内发言需要人脸实名认证"},
    {"频道内发言需要加入任意身份组", "逻辑型", false, false, false, "频道内发言需要加入任意身份组"},
    {"频道内发言需要加入本频道指定时长", "整数型", false, false, false, "频道内发言需要加入本频道指定时长"},
    {"频道内私信需要人脸实名认证", "逻辑型", false, false, false, "频道内私信需要人脸实名认证"},
    {"频道内私信需要加入任意身份组", "逻辑型", false, false, false, "频道内私信需要加入任意身份组"},
    {"频道内私信需要加入本频道指定时长", "整数型", false, false, false, "频道内私信需要加入本频道指定时长"},
};

static const ApiParamSpec kParams_408[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"频道Id", "长整数型", false, false, false, "频道Id"},
    {"子频道Id", "长整数型", false, false, false, "子频道Id"},
};

static const ApiParamSpec kParams_409[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"ptr", "struct_facepack", true, false, true, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_410[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"表情包Id", "长整数型", false, false, false, "表情包Id"},
    {"ptr", "表情包信息", true, false, true, "取变量地址 (ptr)"},
};

static const ApiParamSpec kParams_411[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"消息ID", "整数型", false, false, false, "消息ID"},
    {"表情ID", "整数型", false, false, false, "表情ID"},
    {"取消粘贴", "逻辑型", false, true, false, "取消粘贴"},
};

static const ApiParamSpec kParams_412[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_413[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
};

static const ApiParamSpec kParams_414[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
};

static const ApiParamSpec kParams_415[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_416[] = {
    {"myUin", "长整数型", false, false, false, "myUin"},
    {"Appid", "长整数型", false, false, false, "Appid"},
    {"Group", "长整数型", false, false, false, "Group"},
    {"BOTID", "文本型", false, false, false, "Group"},
};

static const ApiParamSpec kParams_417[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_418[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
};

static const ApiParamSpec kParams_419[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对象QQ", "长整数型", false, false, false, "对象QQ"},
};

static const ApiParamSpec kParams_420[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"对象QQ", "长整数型", false, false, false, "对象QQ"},
};

static const ApiParamSpec kParams_421[] = {
    {"myUin", "长整数型", false, false, false, "myUin"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_422[] = {
    {"myUin", "长整数型", false, false, false, "myUin"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_423[] = {
    {"myUin", "长整数型", false, false, false, "myUin"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"是否开启", "逻辑型", false, false, false, "是否开启"},
};

static const ApiParamSpec kParams_424[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"限制条数", "整数型", false, false, false, "限制条数"},
};

static const ApiParamSpec kParams_425[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_426[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_427[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_428[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
};

static const ApiParamSpec kParams_429[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"机器人QQ", "长整数型", false, false, false, "机器人QQ"},
};

static const ApiParamSpec kParams_430[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"机器人QQ", "长整数型", false, false, false, "机器人QQ"},
};

static const ApiParamSpec kParams_431[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"机器人QQ", "长整数型", false, false, false, "机器人QQ"},
};

static const ApiParamSpec kParams_432[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"机器人QQ", "长整数型", false, false, false, "机器人QQ"},
};

static const ApiParamSpec kParams_433[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"好友QQ", "长整数型", false, false, false, "好友QQ"},
};

static const ApiParamSpec kParams_434[] = {
    {"框架QQ", "长整数型", false, false, false, "框架QQ"},
    {"群号", "长整数型", false, false, false, "群号"},
    {"参考文本", "文本型", true, false, false, "取变量地址 (参考文本)"},
};

const ApiSpec kApiSpecs[] = {
    {1, "输出日志", "文本型", "", kParams_1, 3},
    {2, "发送好友消息", "文本型", "成功返回的time用于撤回消息", kParams_2, 5},
    {3, "发送群消息", "文本型", "", kParams_3, 4},
    {4, "发送群临时消息", "文本型", "成功返回的time用于撤回消息", kParams_4, 6},
    {5, "添加好友", "文本型", "", kParams_5, 4},
    {6, "添加群", "文本型", "注意加群腾讯不会判断你是否在群内，你在群内或需要付费入群都会直接发送验证消息", kParams_6, 3},
    {7, "删除好友", "文本型", "", kParams_7, 2},
    {8, "置屏蔽好友", "文本型", "", kParams_8, 3},
    {9, "置特别关心好友", "文本型", "", kParams_9, 3},
    {10, "发送好友json消息", "文本型", "成功返回的time用于撤回消息", kParams_10, 5},
    {11, "发送群json消息", "文本型", "", kParams_11, 4},
    {12, "上传好友图片", "文本型", "成功返回图片代码", kParams_12, 8},
    {13, "上传群图片", "文本型", "成功返回图片代码(支持讨论组)", kParams_13, 8},
    {14, "上传好友语音", "文本型", "成功返回语音代码", kParams_14, 6},
    {15, "上传群语音", "文本型", "成功返回语音代码(支持讨论组)", kParams_15, 6},
    {16, "上传头像", "文本型", "", kParams_16, 2},
    {17, "silk解码", "字节集", "无权限要求", kParams_17, 1},
    {18, "silk编码", "字节集", "无权限要求", kParams_18, 1},
    {19, "amr编码", "字节集", "无权限要求", kParams_19, 1},
    {20, "设置群名片", "文本型", "置群名片", kParams_20, 4},
    {21, "取昵称_从缓存", "文本型", "成功返回昵称", kParams_21, 1},
    {22, "强制取昵称", "文本型", "成功返回昵称", kParams_22, 2},
    {23, "取群名称_从缓存", "文本型", "成功返回群名称，如果是框架QQ没加的群，请使用[查询群信息]，查询后也会记录缓存", kParams_23, 1},
    {24, "获取skey", "文本型", "成功返回skey", kParams_24, 1},
    {25, "获取pskey", "文本型", "成功返回pskey", kParams_25, 2},
    {26, "获取clientkey", "文本型", "成功返回clientkey", kParams_26, 1},
    {27, "取框架QQ", "文本型", "返回的数据是json格式, 自行进行解析", kParams_27, 0},
    {28, "取好友列表", "整数型", "失败或无权限返回数量0", kParams_28, 2},
    {29, "取群列表", "整数型", "失败或无权限返回数量0", kParams_29, 2},
    {30, "取群成员列表", "整数型", "失败或无权限返回数量0", kParams_30, 3},
    {31, "设置管理员", "逻辑型", "失败或无权限返回假", kParams_31, 4},
    {32, "取管理层列表", "文本型", "仅针对群聊, 讨论组有其他Api, 第一行是群主，剩下的是管理员", kParams_32, 2},
    {33, "取群名片", "文本型", "成功返回群名片，注意，如果群成员的群名片未设置或群名片为空白，返回结果均为空", kParams_33, 3},
    {34, "取个性签名", "文本型", "成功返回个性签名", kParams_34, 2},
    {35, "修改昵称", "逻辑型", "失败或无权限返回假", kParams_35, 2},
    {36, "修改个性签名", "逻辑型", "失败或无权限返回假", kParams_36, 3},
    {37, "删除群成员", "逻辑型", "失败或无权限返回假", kParams_37, 4},
    {38, "禁言群成员", "逻辑型", "失败或无权限返回假", kParams_38, 4},
    {39, "退群", "逻辑型", "失败或无权限返回假", kParams_39, 2},
    {40, "解散群", "逻辑型", "失败或无权限返回假", kParams_40, 2},
    {41, "上传群头像", "逻辑型", "失败或无权限返回假", kParams_41, 3},
    {42, "全员禁言", "逻辑型", "失败或无权限返回假", kParams_42, 3},
    {43, "群权限_发起新的群聊", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_43, 3},
    {44, "群权限_发起临时会话", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_44, 3},
    {45, "群权限_上传文件", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_45, 3},
    {46, "群权限_上传相册", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_46, 3},
    {47, "群权限_邀请好友加群", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_47, 3},
    {48, "群权限_匿名聊天", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_48, 3},
    {49, "群权限_坦白说", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_49, 3},
    {50, "群权限_新成员查看历史消息", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_50, 3},
    {51, "群权限_邀请方式设置", "逻辑型", "设置群聊权限, 机器人必须是管理员或群主, 失败或无权限返回假", kParams_51, 3},
    {52, "撤回消息_群聊", "逻辑型", "在群消息事件中使用，能收到并撤回自己发的消息，管理员可撤回其他人的，失败或无权限返回假", kParams_52, 4},
    {53, "撤回消息_私聊本身", "逻辑型", "用于撤回自己发的消息，其他设备的个人消息通知也可以撤回(只能撤回自己的消息)", kParams_53, 5},
    {54, "设置位置共享", "逻辑型", "开启后需要上报位置，大约3s上报一次，否则会自动关闭，失败或无权限返回假", kParams_54, 5},
    {55, "上报当前位置", "逻辑型", "大约3s上报一次，不得过快，失败或无权限返回假", kParams_55, 4},
    {56, "是否被禁言", "长整数型", "返回禁言时长，单位秒，[失败/无权限/未被禁言]返回0", kParams_56, 2},
    {57, "处理群验证事件", "", "在群验证事件下使用，无权限时不执行", kParams_57, 7},
    {58, "处理好友验证事件", "", "在好友验证事件下使用，无权限时不执行", kParams_58, 4},
    {59, "查看转发聊天记录内容", "", "私聊消息也可以使用此命令解析，无权限时不执行", kParams_59, 3},
    {60, "上传群文件", "文本型", "本命令为耗时操作，请另开线程执行，上传的文件长度不得超过int32，如需回调，请使用【上传群文件s】，无权限时不执行(首次上传较慢，之后可实现秒发)", kParams_60, 4},
    {61, "创建群文件夹", "文本型", "", kParams_61, 3},
    {62, "重命名群文件夹", "文本型", "", kParams_62, 4},
    {63, "删除群文件夹", "文本型", "", kParams_63, 3},
    {64, "删除群文件", "文本型", "", kParams_64, 4},
    {65, "保存文件到微云", "文本型", "", kParams_65, 3},
    {66, "移动群文件", "文本型", "", kParams_66, 5},
    {67, "取群文件列表", "文本型", "", kParams_67, 4},
    {68, "设置在线状态", "逻辑型", "失败或无权限返回假", kParams_68, 4},
    {69, "取插件数据目录", "文本型", "没有权限限制，建议将设置文件之类的都写这里面，结果结尾带\\", kParams_69, 0},
    {70, "QQ点赞", "文本型", "注意，非好友情况下进行点赞时返回成功，但不一定真正点上了，对方开启陌生人点赞时才能点上(手Q默认关闭陌生人点赞)", kParams_70, 2},
    {71, "取图片下载地址", "文本型", "支持群聊、私聊、讨论组、闪照、秀图", kParams_71, 3},
    {72, "查询好友信息", "逻辑型", "支持陌生人查询", kParams_72, 3},
    {73, "查询群信息", "逻辑型", "", kParams_73, 3},
    {74, "框架重启", "", "有权限限制，建议使用前检查是否具有权限", kParams_74, 0},
    {75, "群文件转发至群", "逻辑型", "失败或无权限返回假", kParams_75, 4},
    {76, "群文件转发至好友", "逻辑型", "失败或无权限返回假", kParams_76, 9},
    {77, "好友文件转发至好友", "逻辑型", "失败或无权限返回假", kParams_77, 8},
    {78, "置群消息接收", "逻辑型", "失败或无权限返回假，此API未对返回结果进行分析，返回真不一定成功", kParams_78, 3},
    {79, "取好友在线状态", "文本型", "失败或无权限返回空，支持查询陌生人", kParams_79, 2},
    {80, "取QQ钱包个人信息", "文本型", "包括余额、名字、银行卡等", kParams_80, 2},
    {81, "获取订单详情", "文本型", "通过此API可以查询QQ转账详情，查询人只能是转账方或接收方，当转账未能被接收人成功接收时，只能由转账方进行查询", kParams_81, 3},
    {82, "提交支付验证码", "文本型", "用银行卡支付时需要验证，只需要验证一次", kParams_82, 4},
    {83, "分享音乐", "逻辑型", "失败或无权限返回假", kParams_83, 9},
    {84, "更改群聊消息内容", "逻辑型", "使用此命令可以更改当前群聊消息内容，并使更改后的内容投递给之后的插件，无权限返回假", kParams_84, 2},
    {85, "更改私聊消息内容", "逻辑型", "使用此命令可以更改当前私聊消息内容，并使更改后的内容投递给之后的插件，无权限返回假", kParams_85, 2},
    {86, "群聊口令红包", "文本型", "", kParams_86, 8},
    {87, "群聊拼手气红包", "文本型", "", kParams_87, 9},
    {88, "群聊普通红包", "文本型", "", kParams_88, 9},
    {89, "群聊画图红包", "文本型", "", kParams_89, 8},
    {90, "群聊语音红包", "文本型", "", kParams_90, 8},
    {91, "群聊接龙红包", "文本型", "", kParams_91, 8},
    {92, "群聊专属红包", "文本型", "", kParams_92, 10},
    {93, "好友口令红包", "文本型", "不支持非好友！", kParams_93, 8},
    {94, "好友普通红包", "文本型", "不支持非好友！", kParams_94, 9},
    {95, "好友画图红包", "文本型", "不支持非好友！", kParams_95, 8},
    {96, "好友语音红包", "文本型", "不支持非好友！", kParams_96, 8},
    {97, "好友接龙红包", "文本型", "不支持非好友！", kParams_97, 8},
    {98, "设置专属头衔", "逻辑型", "只能群主调用", kParams_98, 4},
    {99, "下线指定QQ", "逻辑型", "返回真表示成功投递下线任务，不代表对应QQ下线成功", kParams_99, 1},
    {100, "登录指定QQ", "逻辑型", "返回真表示成功投递密码登录任务，不代表对应QQ登录成功，未设置QQ密码的QQ无法投递密码登录任务", kParams_100, 1},
    {101, "取群未领红包", "整数型", "成功返回未领红包数量，注意：使用此API获取的红包只能用手Q上\"群未领红包\"入口的http请求领取", kParams_101, 3},
    {102, "发送输入状态", "逻辑型", "在与他人私聊时，在发消息前使用，显得更有真实感，输入状态默认为1", kParams_102, 3},
    {103, "修改资料", "逻辑型", "生日、家乡、所在地 参数格式和子参数数量必须正确，否则修改资料无法成功，不需要修改的项就不要填", kParams_103, 10},
    {104, "取群文件下载地址", "文本型", "文件下载地址在返回的json里面，同时也返回了必要的Header，具有时效性，请及时下载", kParams_104, 4},
    {105, "打好友电话", "", "不建议频繁使用", kParams_105, 2},
    {106, "头像双击_好友", "逻辑型", "触发 拍一拍", kParams_106, 2},
    {107, "头像双击_群", "逻辑型", "触发 拍一拍 动作, 被禁言时无效", kParams_107, 3},
    {108, "取群成员简略信息", "文本型", "http，可取群上限、群主、管理员", kParams_108, 3},
    {109, "群聊置顶", "逻辑型", "成功返回真，失败或无权限返回假", kParams_109, 3},
    {110, "私聊置顶", "逻辑型", "成功返回真，失败或无权限返回假", kParams_110, 3},
    {111, "取加群链接", "文本型", "不支持讨论组, 失败返回空", kParams_111, 2},
    {112, "设为精华", "逻辑型", "置指定群消息为精华内容, 成功返回真, 失败或无权限返回假, 需要管理员权限", kParams_112, 4},
    {113, "群权限_设置群昵称规则", "逻辑型", "成功返回真, 失败或无权限返回假, 需要管理员权限", kParams_113, 3},
    {114, "群权限_设置群发言频率", "逻辑型", "成功返回真, 失败或无权限返回假, 需要管理员权限", kParams_114, 3},
    {115, "群权限_设置群查找方式", "逻辑型", "成功返回真, 失败或无权限返回假, 需要管理员权限", kParams_115, 3},
    {116, "邀请好友加群", "逻辑型", "拉好友或群友入群, 成功返回真, 失败或无权限返回假, 需要群聊开启了邀请", kParams_116, 4},
    {117, "置群内消息通知", "逻辑型", "置群内指定QQ消息通知类型, 成功返回真, 失败或无权限返回假", kParams_117, 4},
    {118, "修改群名称", "逻辑型", "修改群名称, 成功返回真, 失败或无权限返回假, 需要管理员权限", kParams_118, 3},
    {119, "重载自身", "", "无权限限制", kParams_119, 1},
    {120, "下线其他设备", "", "下线本QQ的其他已登录设备", kParams_120, 3},
    {121, "登录网页取ck", "逻辑型", "失败或无权限返回空白", kParams_121, 5},
    {122, "发送群公告", "文本型", "http", kParams_122, 11},
    {123, "取框架版本", "文本型", "无权限限制", kParams_123, 0},
    {124, "取群成员信息", "文本型", "获取一个群成员的相关信息", kParams_124, 4},
    {125, "取钱包cookie", "文本型", "tenpay, 敏感API, 框架会自动刷新", kParams_125, 1},
    {126, "取群网页cookie", "文本型", "qun.qq, 敏感API, 框架会自动刷新", kParams_126, 1},
    {127, "转账", "文本型", "支持向陌生人转账", kParams_127, 8},
    {128, "取收款链接", "文本型", "返回收款链接, 可借此生成收款二维码", kParams_128, 3},
    {129, "取群小视频下载地址", "文本型", "支持讨论组、频道、群聊, 成功返回json含下载链接", kParams_129, 7},
    {130, "取私聊小视频下载地址", "文本型", "成功返回json含下载链接", kParams_130, 5},
    {131, "上传小视频", "文本型", "支持讨论组、频道、群聊, 成功返回文本代码, 请另开线程调用本API, 使用的手机录小视频入口, 因此不支持较大文件", kParams_131, 7},
    {132, "发送好友xml消息", "文本型", "成功返回的time用于撤回消息", kParams_132, 5},
    {133, "发送群xml消息", "文本型", "若xml代码内存在html代码, 需自己提前处理, 不能在尾部附带链接等", kParams_133, 4},
    {134, "取群成员概况", "文本型", "成功返回json, 含有群上限、群人数、群成员统计概况", kParams_134, 2},
    {135, "添加好友_取验证类型", "文本型", "成功返回验证类型json, 失败返回403无权限或404未找到对应框架QQ或405框架QQ未登录, ret：101已是好友 2拒绝添加 1需要身份验证 0任何人可添加 4需要回答问题, 并返回所有需要回答的问题 3需要正确回答问题, 并返回需要回答的问题", kParams_135, 2},
    {136, "群聊打卡", "文本型", "返回json", kParams_136, 2},
    {137, "群聊签到", "逻辑型", "成功返回真, 失败或无权限返回假, 传入附加参数自定义签到内容(附加参数可抓旧版QQhttp数据获得)", kParams_137, 3},
    {138, "置群聊备注", "逻辑型", "成功返回真, 失败返回假, 无权限返回假", kParams_138, 3},
    {139, "红包转发", "文本型", "转发自己的红包到其他群或好友或讨论组", kParams_139, 4},
    {140, "发送数据包", "逻辑型", "向腾讯服务器发送数据包(完整的原始包), 无权限等返回假, 加密秘钥通过【取sessionkey】API获取", kParams_140, 4},
    {141, "请求ssoseq", "整数型", "无权限等返回0", kParams_141, 1},
    {142, "取sessionkey", "文本型", "成功返回16进制秘钥, 敏感权限", kParams_142, 1},
    {143, "获取bkn_gtk", "文本型", "返回网页用到的bkn或者gtk, 也可以自定义计算的值", kParams_143, 2},
    {144, "置好友验证方式", "逻辑型", "修改添加好友的方式, 成功返回真, 失败或无权限返回假", kParams_144, 3},
    {145, "上传照片墙图片", "文本型", "上传一照片至照片墙, 成功返回带有‘上传成功’字样的json, 失败或无权限返回json", kParams_145, 2},
    {146, "付款", "文本型", "扫描QQ钱包支付二维码来付款(购买QB,游戏道具等), 成功返回json retcode=0, 失败或无权限返回其他值", kParams_146, 5},
    {147, "修改支付密码", "文本型", "修改QQ钱包支付密码, 成功返回json retcode=0, 失败或无权限返回其他值", kParams_147, 3},
    {148, "账号搜索", "文本型", "对一个关键词进行简略搜索, 通过关键词一般返回3个QQ号信息和群信息, 成功返回json retcode=0, 失败或无权限返回其他值", kParams_148, 2},
    {149, "添加群_取验证类型", "文本型", "获取群的加群验证信息, 成功返回json retcode：1允许任何人加群 2需要验证消息 3不允许任何人加群 4回答正确问题 5回答问题并审核 如果retcode=4或5那么返回的json中retmsg有验证文本", kParams_149, 2},
    {150, "获取红包领取详情", "文本型", "只有领取过该红包才能成功查询, 返回腾讯原始json数据", kParams_150, 4},
    {151, "取好友文件下载地址", "文本型", "支持好友、群临时、讨论组临时, 获取好友分享的文件的下载地址(此方法只能用于好友文件获取下载链接,如果是群请调用<取群文件下载地址>)", kParams_151, 3},
    {152, "删除群成员_批量", "逻辑型", "失败或无权限返回假", kParams_152, 4},
    {153, "取扩列资料", "文本型", "取对方的扩列资料, 即使对方隐藏也可以查询", kParams_153, 2},
    {154, "取资料展示设置", "文本型", "支持查询他人的设置", kParams_154, 3},
    {155, "设置资料展示", "文本型", "设置QQ资料卡显示什么、不显示什么", kParams_155, 2},
    {156, "获取当前登录设备信息", "文本型", "有权限限制", kParams_156, 2},
    {157, "提取图片文字", "逻辑型", "tcp", kParams_157, 3},
    {158, "取插件文件名", "文本型", "无权限限制, 可取到自身的真实插件文件名", kParams_158, 0},
    {159, "TEA加密", "", "无权限限制, 参考传回结果", kParams_159, 2},
    {160, "TEA解密", "", "无权限限制, 参考传回结果", kParams_160, 2},
    {161, "红包数据加密", "文本型", "无权限限制 DES ECB No Padding", kParams_161, 2},
    {162, "红包数据解密", "文本型", "无权限限制 DES ECB No Padding", kParams_162, 2},
    {163, "红包msgno计算", "文本型", "无权限限制", kParams_163, 1},
    {164, "取消精华", "逻辑型", "取消某条精华群消息, 成功返回真, 失败或无权限返回假, 需要管理员权限", kParams_164, 4},
    {165, "群权限_设置加群方式", "逻辑型", "失败或无权限或非管理员返回假", kParams_165, 5},
    {166, "群权限_群幸运字符", "逻辑型", "失败或无权限或非管理员返回假", kParams_166, 3},
    {167, "群权限_一起写", "逻辑型", "失败或无权限或非管理员返回假", kParams_167, 3},
    {168, "取QQ空间cookie", "文本型", "qzone, 敏感API, 框架会自动刷新", kParams_168, 1},
    {169, "框架是否为单Q", "逻辑型", "判断框架是否为单Q版, 无权限限制", kParams_169, 0},
    {170, "修改指定QQ缓存密码", "逻辑型", "敏感权限, 无权限返回假, 修改成功后, 指定QQ将被下线, 需要调用API【登录指定QQ】来重新登录", kParams_170, 2},
    {171, "处理群验证事件_风险号", "", "专门处理被过滤的加群申请, 在群验证事件下使用, 无权限时不执行", kParams_171, 7},
    {172, "查询网址安全性", "整数型", "403无权限, 404框架QQ不存在, 405框架QQ未登录, 0正常访问, -1查询失败, 1包含不安全内容, 2非官方页面, 3未知状态", kParams_172, 2},
    {173, "消息合并转发至好友", "文本型", "可将聊天记录合并转发给好友, 支持各种消息类型, 支持循环嵌套, 成功返回的time可用于撤回消息, 循环嵌套情况下, 请手动将机器人的消息转发一遍, 否则手Q无法显示嵌套内容", kParams_173, 6},
    {174, "消息合并转发至群", "文本型", "可将聊天记录合并转发到群, 支持各种消息类型, 支持循环嵌套, 循环嵌套情况下, 请手动将机器人的消息转发一遍, 否则手Q无法显示嵌套内容", kParams_174, 5},
    {175, "取卡片消息代码", "文本型", "无权限限制, 传入卡片消息文本代码, 返回卡片消息代码", kParams_175, 1},
    {176, "禁言群匿名", "逻辑型", "失败或无权限返回假", kParams_176, 5},
    {177, "置文件下载", "整数型", "!!!!!!该API必须另开线程进行调用, 否则会卡死框架!!!!!!!!0下载完成, -1Internet创建失败, -2下载地址无效, -3保存路径无效, -4查询网络文件尺寸失败, -5框架关闭，下载被迫终止, -6下载网络文件片段出错", kParams_177, 5},
    {178, "领取私聊普通红包", "文本型", "仅仅支持好友、群临时，仅限于普通红包", kParams_178, 4},
    {179, "领取群聊专属红包", "文本型", "仅仅支持群聊下的专属红包(当然指的是给自己的专属红包)", kParams_179, 4},
    {180, "加载网页", "逻辑型", "调用框架内置浏览器加载显示指定网页, 无权限限制", kParams_180, 1},
    {181, "压缩包_7za解压", "", "无权限限制, 耗时操作, 请另开线程调用, 支持:7z, XZ, BZIP2, GZIP, TAR, ZIP, ARJ, CAB, CHM, CPIO, DEB, DMG, FAT, HFS, ISO, LZH, LZMA, MBR, MSI, NSIS, NTFS, RPM, UDF, VHD, WIM, XAR, Z", kParams_181, 4},
    {182, "压缩包_7za压缩", "", "无权限限制, 耗时操作, 请另开线程调用, 支持:7z, XZ, BZIP2, GZIP, TAR, ZIP", kParams_182, 5},
    {183, "发送讨论组消息", "文本型", "", kParams_183, 3},
    {184, "发送讨论组json消息", "文本型", "", kParams_184, 3},
    {185, "发送讨论组xml消息", "文本型", "", kParams_185, 3},
    {186, "发送讨论组临时消息", "文本型", "", kParams_186, 6},
    {187, "撤回消息_讨论组", "逻辑型", "失败或无权限返回假, 讨论组只能撤回自身的消息, 不能撤回其他人的消息", kParams_187, 4},
    {188, "回复QQ咨询会话", "文本型", "当对方通过QQ咨询联系你, 但是对方未开启QQ咨询时, 只能通过此API进行回复", kParams_188, 6},
    {189, "发送订阅号私聊消息", "文本型", "", kParams_189, 5},
    {190, "取讨论组名称_从缓存", "文本型", "失败或无权限返回空, 从缓存取讨论组名(当取出为空时,先使用【取讨论组成员列表】,之后缓存内便有讨论组的名称)", kParams_190, 1},
    {191, "修改讨论组名称", "逻辑型", "失败或无权限返回假", kParams_191, 3},
    {192, "取讨论组成员列表", "整数型", "返回成员数, 失败或无权限返回0, 传回数据的第一个QQ账号是讨论组的拥有者", kParams_192, 3},
    {193, "强制取自身匿名Id", "长整数型", "失败或无权限返回0, 禁止在其他设备更换匿名, 否则匿名相关功能无效", kParams_193, 2},
    {194, "取订阅号列表", "整数型", "返回订阅号数, 失败或无权限返回0", kParams_194, 2},
    {195, "取讨论组列表", "整数型", "返回讨论组数, 失败或无权限返回0", kParams_195, 2},
    {196, "邀请好友加群_批量", "逻辑型", "失败或无权限返回假", kParams_196, 4},
    {197, "邀请好友加入讨论组_批量", "逻辑型", "失败或无权限返回假", kParams_197, 4},
    {198, "取框架到期时间", "文本型", "无权限限制, 返回示例：2025/1/1 00:00:00, 年月日无补零, 时分秒有补零", kParams_198, 0},
    {199, "讨论组口令红包", "文本型", "", kParams_199, 8},
    {200, "讨论组拼手气红包", "文本型", "", kParams_200, 9},
    {201, "讨论组普通红包", "文本型", "", kParams_201, 9},
    {202, "讨论组画图红包", "文本型", "", kParams_202, 8},
    {203, "讨论组语音红包", "文本型", "", kParams_203, 8},
    {204, "讨论组接龙红包", "文本型", "", kParams_204, 8},
    {205, "讨论组专属红包", "文本型", "", kParams_205, 10},
    {206, "领取讨论组专属红包", "文本型", "仅仅支持讨论组下的专属红包(当然指的是给自己的专属红包)", kParams_206, 4},
    {207, "取讨论组未领红包", "整数型", "成功返回未领红包数量，注意：使用此API获取的红包只能用手Q上\"讨论组未领红包\"入口的http请求领取", kParams_207, 3},
    {208, "取讨论组文件下载地址", "文本型", "文件下载地址在返回的json里面，具有时效性，请及时下载", kParams_208, 4},
    {209, "发送QQ咨询会话", "文本型", "当对方开启了QQ咨询, 则可通过QQ咨询主动向对方发送消息, 若对方没有开启QQ咨询, 则只能使用API【回复QQ咨询会话】进行回复", kParams_209, 5},
    {210, "创建群聊", "文本型", "成功参考传回新群群号", kParams_210, 4},
    {211, "取群应用列表", "整数型", "成功返回群应用数量", kParams_211, 3},
    {212, "退出讨论组", "逻辑型", "失败或无权限返回假", kParams_212, 2},
    {213, "群验证消息接收设置", "逻辑型", "设置指定管理员是否接收群验证消息, 失败或无权限返回假, 需要机器人为群主, 否则无法设置", kParams_213, 4},
    {214, "转让群", "逻辑型", "失败或无权限返回假, 需要机器人为群主, 需要新群主具备转让资格", kParams_214, 3},
    {215, "修改好友备注", "逻辑型", "失败或无权限返回假", kParams_215, 3},
    {216, "删除讨论组成员", "逻辑型", "失败或无权限返回假, 需要机器人为讨论组拥有者, 否则没有权重", kParams_216, 3},
    {217, "讨论组文件转发至群", "逻辑型", "失败或无权限返回假", kParams_217, 6},
    {218, "讨论组文件转发至好友", "逻辑型", "失败或无权限返回假", kParams_218, 9},
    {219, "取QQ头像", "文本型", "获取QQ头像, 无权限限制, 默认返回低像素链接, 注意:部分QQ, 比如透明头像的QQ, 是没有高清头像的, 取出来是鹅, 只能取低像素头像", kParams_219, 2},
    {220, "取群头像", "文本型", "无权限限制", kParams_220, 1},
    {221, "取大表情图片下载地址", "文本型", "无权限限制, 支持付费表情包", kParams_221, 3},
    {222, "拉起群收款", "文本型", "成功时, 参考传回收款订单号(不支持讨论组,讨论组相关功能[AA收款]已被腾讯下架)", kParams_222, 5},
    {223, "结束群收款", "文本型", "只能结束自己拉起的", kParams_223, 2},
    {224, "查询群收款状态", "文本型", "支持查询他人拉起的群收款, 成功时, 参考传回数据", kParams_224, 3},
    {225, "支付群收款", "文本型", "支付方式同QQ红包类", kParams_225, 7},
    {226, "消息合并转发至讨论组", "文本型", "可将聊天记录合并转发到讨论组, 支持各种消息类型, 支持循环嵌套, 循环嵌套情况下, 请手动将机器人的消息转发一遍, 否则手Q无法显示嵌套内容", kParams_226, 4},
    {227, "群收款_催单", "文本型", "", kParams_227, 2},
    {228, "取好友Diy名片数据", "逻辑型", "支持陌生人, 失败或无权限或对方未设置返回假, 参考传回Diy名片数据", kParams_228, 3},
    {229, "设置Diy名片", "文本型", "", kParams_229, 2},
    {230, "取框架主窗口句柄", "整数型", "无权限限制, 可用于取消框架窗口的皮肤", kParams_230, 0},
    {231, "好友生僻字红包", "文本型", "不支持非好友！", kParams_231, 8},
    {232, "群聊生僻字红包", "文本型", "", kParams_232, 8},
    {233, "讨论组生僻字红包", "文本型", "", kParams_233, 8},
    {234, "支付代付请求", "文本型", "支付方式同QQ红包类", kParams_234, 6},
    {235, "查询代付状态", "文本型", "成功返回原始json数据, 自行解析", kParams_235, 3},
    {236, "拉起代付", "文本型", "成功返回原始json数据, 自行解析", kParams_236, 3},
    {237, "取好友能量值与QID", "逻辑型", "支持陌生人, 失败或无权限返回假, 只要对方设置了QID显示或能量值显示则返回真", kParams_237, 4},
    {238, "创建小栗子文本代码解析类对象", "小栗子文本代码解析类", "创建一个小栗子文本代码解析类对象, 无权限限制", kParams_238, 0},
    {239, "文字转语音", "文本型", "音源与登录QQ的性别有关", kParams_239, 3},
    {240, "翻译", "文本型", "语种代码列表:http://www.lingoes.cn/zh/translator/langcode.htm", kParams_240, 5},
    {241, "撤回消息_群聊s", "文本型", "在群消息事件中使用，能收到并撤回自己发的消息，管理员可撤回其他人的，失败或无权限返回假", kParams_241, 4},
    {242, "QQ列表_添加手表协议QQ", "文本型", "返回情况过多，请自行参考 使用实例->框架扫码登录", kParams_242, 3},
    {243, "QQ列表_二维码登录_拉取二维码", "文本型", "返回情况过多，请自行参考 使用实例->框架扫码登录", kParams_243, 2},
    {244, "QQ列表_二维码登录_查询二维码状态", "文本型", "返回情况过多，请自行参考 使用实例->框架扫码登录", kParams_244, 1},
    {245, "拍一拍好友在线状态", "逻辑型", "失败或无权限返回假", kParams_245, 2},
    {246, "发送验证消息会话消息", "文本型", "当对方给你发送添加好友验证消息时, 可通过这个API主动向对方发送消息, 若是你尝试添加对方为好友, 则只能使用API【回复验证消息会话消息】进行回复", kParams_246, 5},
    {247, "回复验证消息会话消息", "文本型", "当你尝试添加对方为好友并发送了好友验证消息时, 若对方给你发了临时消息, 则可通过此API进行回复", kParams_247, 6},
    {248, "取群文件内存利用状态", "文本型", "可以查询群文件总容量和已使用容量", kParams_248, 4},
    {249, "取群文件总数", "文本型", "可以查询群文件数量上限和当前文件总数", kParams_249, 4},
    {250, "上传涂鸦", "文本型", "上传涂鸦，成功返回涂鸦文本代码", kParams_250, 3},
    {251, "删除群成员_批量s", "逻辑型", "", kParams_251, 3},
    {252, "上传好友文件s", "文本型", "成功返回的time用于撤回消息，本命令为耗时操作，请另开线程执行，上传的文件长度不得超过int32，无权限时不执行(首次上传较慢，之后可实现秒发)", kParams_252, 6},
    {253, "上传群文件s", "文本型", "本命令为耗时操作，请另开线程执行，上传的文件长度不得超过int32，无权限时不执行(首次上传较慢，之后可实现秒发)", kParams_253, 5},
    {254, "取群艾特全体剩余次数", "整数型", "查询机器人QQ当日在某群剩余的艾特全体次数, 失败或无权限返回负数", kParams_254, 2},
    {255, "是否已开启QQ咨询", "整数型", "查询其他人是否已开启QQ咨询, 失败或无权限返回负数, 0未开启, 1已开启", kParams_255, 2},
    {256, "创建群相册", "文本型", "成功返回原始json数据", kParams_256, 4},
    {257, "删除群相册", "文本型", "成功返回原始json数据", kParams_257, 3},
    {258, "取群相册列表", "文本型", "成功返回原始json", kParams_258, 2},
    {259, "取群相册照片列表", "文本型", "成功返回原始json", kParams_259, 4},
    {260, "删除群相册照片", "文本型", "成功返回原始json数据", kParams_260, 4},
    {261, "修改群相册信息", "文本型", "成功返回原始json数据", kParams_261, 6},
    {262, "取群Id_从缓存", "长整数型", "无权限返回-403, 不存在缓存数据返回0, 调用【取群列表】更新缓存", kParams_262, 1},
    {263, "上传频道图片", "文本型", "支持私信频道, 失败或无权限返回空, 成功返回带url参数的图片代码, 可以直接取到图片链接", kParams_263, 7},
    {264, "发送频道消息", "文本型", "成功返回json, 含有time、Random、Req, QQ频道官方不支持长消息, 长消息需要自己分段发送", kParams_264, 4},
    {265, "发送频道私信消息", "文本型", "成功返回json, 含有time、Random、Req, QQ频道官方不支持长消息, 长消息需要自己分段发送", kParams_265, 4},
    {266, "取私信频道Id", "逻辑型", "失败或无权限返回假", kParams_266, 5},
    {267, "频道消息粘贴表情", "逻辑型", "失败或无权限返回假", kParams_267, 7},
    {268, "撤回频道消息", "文本型", "", kParams_268, 4},
    {269, "撤回频道私信消息", "文本型", "", kParams_269, 4},
    {270, "设置子频道精华消息", "逻辑型", "将一条消息设置为子频道精华消息或取消某个子频道精华消息", kParams_270, 5},
    {271, "禁言频道成员", "逻辑型", "失败或无权限返回假, 频道没有成员被禁言、被解除禁言的事件", kParams_271, 4},
    {272, "设置频道全员禁言", "逻辑型", "失败或无权限返回假", kParams_272, 3},
    {273, "移除频道成员", "逻辑型", "", kParams_273, 4},
    {274, "移除频道成员_批量", "逻辑型", "", kParams_274, 4},
    {275, "退出频道", "逻辑型", "", kParams_275, 2},
    {276, "更改频道名称", "逻辑型", "", kParams_276, 4},
    {277, "修改频道简介", "逻辑型", "", kParams_277, 3},
    {278, "设置我的频道昵称", "逻辑型", "", kParams_278, 3},
    {279, "置子频道观看权限", "逻辑型", "", kParams_279, 8},
    {280, "置子频道发言权限", "逻辑型", "", kParams_280, 8},
    {281, "子频道消息提醒设置", "逻辑型", "", kParams_281, 4},
    {282, "子频道慢速模式设置", "逻辑型", "", kParams_282, 4},
    {283, "修改子频道名称", "逻辑型", "", kParams_283, 4},
    {284, "删除子频道", "逻辑型", "", kParams_284, 3},
    {285, "修改我的频道用户信息_昵称", "逻辑型", "", kParams_285, 2},
    {286, "修改我的频道用户信息_性别", "逻辑型", "", kParams_286, 2},
    {287, "修改我的频道用户信息_年龄", "逻辑型", "", kParams_287, 2},
    {288, "修改我的频道用户信息_所在地", "逻辑型", "", kParams_288, 7},
    {289, "设置是否允许别人私信我", "逻辑型", "", kParams_289, 2},
    {290, "设置频道加入验证方式", "逻辑型", "", kParams_290, 5},
    {291, "搜索频道", "整数型", "成功返回搜索结果数", kParams_291, 4},
    {292, "取频道封面", "文本型", "", kParams_292, 1},
    {293, "取频道头像", "文本型", "", kParams_293, 2},
    {294, "获取频道成员列表", "整数型", "成功返回结果数, 该Api无法获取完整的成员列表, 若要取完整, 可尝试使用API【取特定身份组成员列表】, 身份组1、2各取一遍, 即可获取完整的成员列表", kParams_294, 5},
    {295, "取频道信息", "逻辑型", "", kParams_295, 3},
    {296, "取频道加入验证方式", "逻辑型", "", kParams_296, 4},
    {297, "申请加入频道", "文本型", "errcode=22010是申请成功", kParams_297, 5},
    {298, "取频道文件下载地址", "文本型", "返回json包含链接和Cookie、header, 但貌似无法直接下载, 目前尚不清楚具体下载方式, 手Q客户端貌似不是直接走http协议下载的", kParams_298, 5},
    {299, "频道拼手气红包", "文本型", "返回原始json数据", kParams_299, 10},
    {300, "频道普通红包", "文本型", "返回原始json数据", kParams_300, 10},
    {301, "频道专属红包", "文本型", "返回原始json数据", kParams_301, 10},
    {302, "领取频道专属红包", "文本型", "返回原始json数据", kParams_302, 5},
    {303, "取频道成员身份组", "整数型", "返回结果数(一个频道成员可有多个身份组)", kParams_303, 4},
    {304, "设置频道成员身份组", "逻辑型", "暂不支持子频道管理员", kParams_304, 5},
    {305, "修改身份组信息", "逻辑型", "", kParams_305, 6},
    {306, "删除身份组", "逻辑型", "", kParams_306, 3},
    {307, "新增身份组", "长整数型", "成功返回新增的身份组Id", kParams_307, 5},
    {308, "取频道身份组列表", "整数型", "成功返回结果数", kParams_308, 3},
    {309, "取子频道列表", "整数型", "成功返回结果数", kParams_309, 3},
    {310, "取频道用户个性档案", "整数型", "成功返回结果数, 一个频道用户的个性档案有多个平台内容", kParams_310, 3},
    {311, "取频道用户资料", "逻辑型", "", kParams_311, 3},
    {312, "刷新频道列表缓存", "逻辑型", "框架登录时已经刷新过一次了, 非必要情况下请勿调用此Api, 异步刷新, 这里返回真时不代表缓存一定被刷新了, 请勿频繁使用, 可能导致封号", kParams_312, 1},
    {313, "取频道列表_从缓存", "文本型", "频道列表比较特殊, 不能直接取, 只能通过缓存来, 不会自动刷新, 需要自行刷新(使用API【刷新频道列表缓存】), 返回json数据", kParams_313, 1},
    {314, "取频道用户昵称_从缓存", "文本型", "原始昵称", kParams_314, 1},
    {315, "取频道名称_从缓存", "文本型", "", kParams_315, 1},
    {316, "取子频道名称_从缓存", "文本型", "", kParams_316, 2},
    {317, "取频道昵称_从缓存", "文本型", "相当于群名片", kParams_317, 2},
    {318, "取子频道分组列表", "整数型", "成功返回结果数", kParams_318, 3},
    {319, "取私信频道列表_从缓存", "文本型", "私信频道列表比较特殊, 不能直接取, 只能通过缓存来, 不会自动刷新, 需要自行刷新(使用API【刷新频道列表缓存】), 返回json数据", kParams_319, 1},
    {320, "上传频道文件", "文本型", "本命令为耗时操作，请另开线程执行，上传的文件长度不得超过int32，无权限时不执行(首次上传较慢，之后可实现秒发)", kParams_320, 7},
    {321, "更改频道消息内容", "逻辑型", "使用此命令可以更改当前频道消息内容，并使更改后的内容投递给之后的插件，无权限返回假", kParams_321, 2},
    {322, "Emoji转频道EmojiId", "文本型", "失败或无权限返回空", kParams_322, 1},
    {323, "频道EmojiId转Emoji", "文本型", "失败或无权限返回空", kParams_323, 1},
    {324, "Emoji转QQ空间EmId", "文本型", "失败或无权限返回空", kParams_324, 1},
    {325, "QQ空间EmId转Emoji", "文本型", "失败或无权限返回空", kParams_325, 1},
    {326, "小黄豆Id转QQ空间EmId", "文本型", "失败或无权限返回空", kParams_326, 1},
    {327, "QQ空间EmId转小黄豆Id", "文本型", "失败或无权限返回空", kParams_327, 1},
    {328, "取特定身份组成员列表", "整数型", "成功返回结果数量, 成功返回数量永远大于0, 所以需要自己判断是否已经获取到尾部了(比如判断cnt>1), 注意防止死循环, 重复的数据自己处理掉", kParams_328, 5},
    {329, "取子频道分组结构", "文本型", "成功返回分组结构(json)", kParams_329, 2},
    {330, "设置子频道分组结构", "文本型", "成功返回新的分组结构(json), 结构有误会失败(比如同一个子频道Id出现在多个分组)", kParams_330, 3},
    {331, "删除子频道_批量", "逻辑型", "", kParams_331, 3},
    {332, "创建子频道", "逻辑型", "必须正确填写[所属分组index]、[分组内位置]、[原始子频道分组结构]否则无法创建成功", kParams_332, 13},
    {333, "构造卡片消息文本代码", "文本型", "", kParams_333, 3},
    {334, "分享音乐_频道", "逻辑型", "失败或无权限返回假", kParams_334, 9},
    {335, "修改频道排序", "逻辑型", "修改各个频道的排序", kParams_335, 2},
    {336, "处理频道加入申请", "逻辑型", "失败或无权限返回假", kParams_336, 3},
    {337, "查询群设置", "文本型", "成功返回原始json数据, 需要自行解析", kParams_337, 2},
    {338, "取子频道管理列表", "整数型", "成功返回数量", kParams_338, 4},
    {339, "设置子频道管理", "逻辑型", "失败或无权限返回假", kParams_339, 5},
    {340, "设置指定身份组子频道观看权限", "逻辑型", "失败或无权限返回假", kParams_340, 5},
    {341, "设置指定身份组子频道发言权限", "逻辑型", "失败或无权限返回假", kParams_341, 5},
    {342, "设置直播子频道主播", "逻辑型", "失败或无权限返回假", kParams_342, 5},
    {343, "获取频道分享链接", "文本型", "成功返回链接, 失败返回包含错误信息的json", kParams_343, 2},
    {344, "获取子频道分享链接", "文本型", "成功返回链接, 失败返回包含错误信息的json", kParams_344, 3},
    {345, "子频道消息通知设置", "逻辑型", "失败或无权限返回假", kParams_345, 4},
    {346, "获取红包领取详情s", "文本型", "只有领取过该红包才能成功查询, 返回腾讯原始json数据", kParams_346, 6},
    {347, "取话题子频道帖子列表", "整数型", "成功返回结果数(翻页后若返回0代表已无结果)", kParams_347, 5},
    {348, "获取日程列表", "整数型", "成功返回结果数, 此Api返回的结果当中[创建者频道昵称]为空白", kParams_348, 5},
    {349, "获取日程链接", "文本型", "", kParams_349, 4},
    {350, "取日程信息", "逻辑型", "", kParams_350, 5},
    {351, "创建日程", "逻辑型", "", kParams_351, 10},
    {352, "取QQ头像K值", "文本型", "", kParams_352, 2},
    {353, "删除日程", "逻辑型", "", kParams_353, 4},
    {354, "发送通行证到群", "逻辑型", "仅频道主有效", kParams_354, 4},
    {355, "发送通行证到好友", "逻辑型", "仅频道主有效", kParams_355, 3},
    {356, "屏蔽频道用户私信", "逻辑型", "", kParams_356, 3},
    {357, "频道用户私信免打扰", "逻辑型", "", kParams_357, 3},
    {358, "QQ列表_添加QQ", "文本型", "成功retcode为0, 框架存在其他相关冲突操作时, 此Api会失败", kParams_358, 6},
    {359, "QQ列表_删除QQ", "文本型", "成功retcode为0, 框架存在其他相关冲突操作时, 此Api会失败", kParams_359, 2},
    {360, "登录指定QQ_二次登录", "逻辑型", "返回真表示成功投递二次登录任务，不代表对应QQ登录成功，二次登录数据不存在或无效的，无法进行二次登录", kParams_360, 1},
    {361, "是否已设置QQ密码", "逻辑型", "无权限或未设置或QQ不在框架缓存返回假", kParams_361, 1},
    {362, "取框架插件列表", "文本型", "成功返回json", kParams_362, 0},
    {363, "取在线移动设备列表", "文本型", "不包括电脑", kParams_363, 1},
    {364, "设置频道全局公告_指定消息", "逻辑型", "将指定消息设置为频道全局公告, 无权限或失败返回假", kParams_364, 4},
    {365, "取频道号", "文本型", "成功返回频道号, 失败返回json格式错误信息", kParams_365, 2},
    {366, "设置位置共享s", "逻辑型", "开启后需要上报位置，大约3s上报一次，否则会自动关闭，失败或无权限返回假", kParams_366, 6},
    {367, "上报当前位置s", "逻辑型", "大约3s上报一次，不得过快，失败或无权限返回假", kParams_367, 5},
    {368, "移动好友分组", "逻辑型", "失败或无权限返回假", kParams_368, 3},
    {369, "修改好友分组名", "逻辑型", "失败或无权限返回假", kParams_369, 3},
    {370, "删除好友分组", "逻辑型", "失败或无权限返回假", kParams_370, 2},
    {371, "取好友分组列表", "文本型", "成功返回好友分组列表, json格式数据", kParams_371, 1},
    {372, "新增好友分组", "整数型", "成功返回新分组的[分组Id], 失败或无权限返回负数", kParams_372, 2},
    {373, "取频道红包pre_grap_token", "文本型", "可用于领取频道红包, 成功返回原始json数据", kParams_373, 7},
    {374, "语音红包匹配", "文本型", "匹配通过后, 即可领取语音红包, 成功返回语音评级, 失败或无权限返回json格式错误信息", kParams_374, 8},
    {375, "上传群聊语音红包匹配语音", "文本型", "必须为silk v3 Tencent格式, 成功直接返回hash值, 失败返回json格式错误信息", kParams_375, 3},
    {376, "取合并转发消息内容", "文本型", "成功返回合并转发消息的内容, json格式, 完美支持嵌套", kParams_376, 2},
    {377, "上传合并转发消息", "文本型", "成功返回卡片文本代码, 可直接发送, 完美支持嵌套", kParams_377, 4},
    {378, "语音转文字", "文本型", "TCP, 失败或无权限返回json格式错误信息, 成功返回文本, 最大等待时长15s, 为耗时操作", kParams_378, 3},
    {379, "发送功能包", "逻辑型", "向腾讯服务器发送功能包, 若需要发送登录包或原始数据包, 请使用API【发送数据包】", kParams_379, 4},
    {380, "二维码扫一扫授权登录其他应用", "文本型", "可用于同意【其他应用登录验证请求】、扫描PCQQ或其他支持QQ登录的程序的二维码进行授权登录、扫描支持QQ登录的网页的二维码进行授权登录", kParams_380, 2},
    {381, "取历史登录设备guid列表", "文本型", "成功返回json数据, 每一个设备成员含有设备名、设备guid等", kParams_381, 1},
    {382, "二维码扫一扫授权其他设备资料辅助验证登录", "文本型", "可用于扫描其他设备的资料辅助验证二维码并同意通过验证", kParams_382, 2},
    {383, "关闭设备锁", "逻辑型", "失败或无权限返回假", kParams_383, 1},
    {384, "恢复设备锁", "逻辑型", "失败或无权限返回假", kParams_384, 1},
    {385, "余额提现", "文本型", "", kParams_385, 4},
    {386, "取h5钱包cookie", "文本型", "h5.qianbao, 敏感API, 框架会自动刷新", kParams_386, 1},
    {387, "取QQ会员中心cookie", "文本型", "vip.qq, 敏感API, 框架会自动刷新", kParams_387, 1},
    {388, "说说点赞", "逻辑型", "失败或无权限返回假", kParams_388, 4},
    {389, "说说评论", "逻辑型", "失败或无权限返回假, 支持使用群聊下的文本代码", kParams_389, 4},
    {390, "取最新动态列表", "文本型", "说说具体内容无法进行详细解析, 由于返回TCP数据较大, 为耗时操作, 只会返回最新的动态列表(第一页)", kParams_390, 2},
    {391, "搜索表情包", "文本型", "手机QQ上的关键词联想表情包功能", kParams_391, 2},
    {392, "发布说说", "文本型", "支持使用群聊的文本代码, 由于使用了base64编码图片, 此Api为耗时操作, 图片越多越大, 耗时越长", kParams_392, 5},
    {393, "经纬度定位查询详细地址", "文本型", "通过经纬度查询附近的建筑、地区 地址, 只支持中国境内", kParams_393, 3},
    {394, "取插件自身版本号", "文本型", "无权限限制, 返回值=json文件当中写的版本号", kParams_394, 0},
    {395, "上传群临时文件s", "文本型", "成功返回的time用于撤回消息，本命令为耗时操作，请另开线程执行，上传的文件长度不得超过int32，无权限时不执行(首次上传较慢，之后可实现秒发)", kParams_395, 8},
    {396, "删除说说", "逻辑型", "失败或无权限返回假", kParams_396, 2},
    {397, "上传QQ封面", "文本型", "上传QQ封面(TCP)，成功返回新封面图片链接", kParams_397, 2},
    {398, "ark消息签名", "文本型", "给json消息签名(token)，失败返回空白", kParams_398, 2},
    {399, "取收藏表情列表", "整数型", "成功返回结果数, 失败返回0", kParams_399, 2},
    {400, "删除收藏表情", "逻辑型", "删除多个收藏表情", kParams_400, 2},
    {401, "增加收藏表情", "文本型", "将一张图片增加到收藏表情, 成功返回收藏表情图片地址(添加成功后,其他设备有延迟,需要一定的时间才会更新显示)", kParams_401, 2},
    {402, "取个性标签列表", "整数型", "成功返回结果数, 失败返回0", kParams_402, 2},
    {403, "上传个性标签图片", "文本型", "将一张图片上传到指定QQ标签, 成功返回图片地址", kParams_403, 3},
    {404, "取推荐消息气泡列表", "整数型", "获取聊天界面QQ推荐的气泡列表, 成功返回结果数, 失败返回0, QQ推荐的气泡Id不一定可用, 需要vip或额外购买气泡", kParams_404, 2},
    {405, "移除频道成员并撤回发言", "逻辑型", "", kParams_405, 6},
    {406, "设置频道发言规则", "逻辑型", "", kParams_406, 4},
    {407, "设置频道发言门槛", "逻辑型", "", kParams_407, 8},
    {408, "设置精选展示子频道", "逻辑型", "", kParams_408, 3},
    {409, "取表情包列表", "整数型", "取自己下载过的QQ表情包列表", kParams_409, 2},
    {410, "取表情包内表情", "整数型", "取指定QQ表情包内的表情", kParams_410, 3},
    {411, "回应表情", "逻辑型", "", kParams_411, 5},
    {412, "字符_抽字符_群聊", "文本型", "", kParams_412, 2},
    {413, "字符_抽字符_好友", "文本型", "", kParams_413, 2},
    {414, "字符_取可抽取次数_好友", "整数型", "", kParams_414, 2},
    {415, "字符_取可抽取次数_群聊", "整数型", "", kParams_415, 2},
    {416, "发送_管机主动", "", "", kParams_416, 4},
    {417, "查看群未领红包", "文本型", "", kParams_417, 2},
    {418, "查看黑名单", "文本型", "取框架QQ黑名单", kParams_418, 1},
    {419, "加入黑名单", "", "将好友拉入黑名单", kParams_419, 2},
    {420, "移出黑名单", "", "解除好友黑名单", kParams_420, 2},
    {421, "查询群是否支持临时会话", "整数型", "", kParams_421, 2},
    {422, "查询群是否支持群成员邀请", "逻辑型", "", kParams_422, 2},
    {423, "群聊_展示成员群头衔", "逻辑型", "设置群成员算法展示头衔", kParams_423, 3},
    {424, "群聊_发言频率限制", "", "NT", kParams_424, 3},
    {425, "群聊_取被禁言成员列表", "文本型", "", kParams_425, 2},
    {426, "群聊_取分享卡片", "文本型", "", kParams_426, 2},
    {427, "群聊_取分享链接", "文本型", "", kParams_427, 2},
    {428, "群聊_取今日打卡的人", "文本型", "", kParams_428, 2},
    {429, "群聊_添加机器人", "", "", kParams_429, 3},
    {430, "群聊_移除机器人", "", "", kParams_430, 3},
    {431, "添加机器人好友", "文本型", "", kParams_431, 2},
    {432, "删除机器人好友", "文本型", "", kParams_432, 2},
    {433, "邀请好友助力等级加速", "", "", kParams_433, 2},
    {434, "取群语音人数", "整数型", "返回整数语音人数 具体QQ请 json解析参考文本，sjon数据包含语音人数+语音QQ号和uid", kParams_434, 3},
};

const std::size_t kApiSpecCount = sizeof(kApiSpecs) / sizeof(kApiSpecs[0]);

const ApiSpec* FindApiSpec(const char* name) {
    if (name == nullptr) return nullptr;
    for (std::size_t i = 0; i < kApiSpecCount; ++i) {
        if (std::strcmp(kApiSpecs[i].name, name) == 0) return &kApiSpecs[i];
    }
    return nullptr;
}

const char* GetApiNameByPermission(const int32_t permissionId) {
    if (permissionId <= 0 || static_cast<std::size_t>(permissionId) > kApiSpecCount) return nullptr;
    return kApiSpecs[permissionId - 1].name;
}

} // namespace xlz
