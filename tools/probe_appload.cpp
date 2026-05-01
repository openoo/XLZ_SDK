#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include <cstdint>
#include <cstdio>

using ApploadFn = const char* (__cdecl*)(const char*, const char*);

int main(int argc, char** argv) {
    if (argc < 3) {
        std::fprintf(stderr, "usage: probe_appload <plugin.dll> <output.txt>\n");
        return 2;
    }

    HMODULE module = LoadLibraryA(argv[1]);
    if (module == nullptr) {
        std::fprintf(stderr, "LoadLibraryA failed: %lu\n", GetLastError());
        return 3;
    }

    auto appload = reinterpret_cast<ApploadFn>(GetProcAddress(module, "appload"));
    if (appload == nullptr) {
        std::fprintf(stderr, "GetProcAddress(appload) failed: %lu\n", GetLastError());
        return 4;
    }

    const char* result = appload("{}", "probe-key");
    if (result == nullptr) {
        std::fprintf(stderr, "appload returned null\n");
        return 5;
    }

    FILE* file = nullptr;
    fopen_s(&file, argv[2], "wb");
    if (file == nullptr) {
        std::fprintf(stderr, "open output failed\n");
        return 6;
    }

    std::fputs(result, file);
    std::fclose(file);
    std::printf("%s\n", result);
    return 0;
}
