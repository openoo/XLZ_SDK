#include "xlz/xlz.hpp"

void example(xlz::Api& api, std::int64_t bot, std::int64_t group) {
    // 所有没有强类型包装的 API，都可以按 docs/API清单.md 的中文名称和参数顺序调用。
    api.CallText("发送群消息", bot, group, "通过通用调用入口发送", xlz::ToEBool(false));

    std::int64_t random = 0;
    std::int32_t req = 0;
    api.CallText("发送好友消息", bot, 123456789LL, "带撤回参数的好友消息", &random, &req);
}
