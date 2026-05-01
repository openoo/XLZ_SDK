#pragma once
#include <cstddef>
#include <cstdint>

namespace xlz {

struct ApiParamSpec {
    const char* name;
    const char* type;
    bool byRef;
    bool optional;
    bool array;
    const char* nativeArg;
};

struct ApiSpec {
    int32_t permissionId;
    const char* name;
    const char* returnType;
    const char* note;
    const ApiParamSpec* params;
    std::size_t paramCount;
};

extern const ApiSpec kApiSpecs[];
extern const std::size_t kApiSpecCount;

const ApiSpec* FindApiSpec(const char* name);
const char* GetApiNameByPermission(int32_t permissionId);

} // namespace xlz
