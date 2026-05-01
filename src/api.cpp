#include "xlz/api.hpp"

#include "xlz/utility.hpp"

#include <cstdint>

namespace xlz {

std::uintptr_t Api::GetFunctionAddress(const std::string& functionName) const {
    if (!api_data_.is_object()) return 0;

    auto it = api_data_.find(functionName);
    if (it == api_data_.end()) {
        it = api_data_.find(gbk2utf8(functionName));
    }
    if (it == api_data_.end()) return 0;

    if (it->is_number_unsigned()) return it->get<std::uintptr_t>();
    if (it->is_number_integer()) return static_cast<std::uintptr_t>(it->get<std::int64_t>());
    if (it->is_string()) return static_cast<std::uintptr_t>(str2ll(it->get<std::string>()));
    return 0;
}

} // namespace xlz
