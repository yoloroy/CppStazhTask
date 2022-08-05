#include "string_util.h"
#include <vector>

using namespace util;

void util::replace_all_if(std::string &source, CharPredicate predicate, char* replacerData, size_t replacerSize) {
    source = flat_map(source, [&predicate, replacerData, replacerSize](char chr) {
        if (predicate(chr)) {
            return std::string(replacerData, replacerSize);
        } else {
            char copy[2] = {chr, '\0'};
            return std::string(copy, 2);
        }
    });
}

template<class MapFunc>
std::string util::flat_map(const std::string& source, MapFunc mapFunc) {
    std::vector<std::string> mappedFragments{};
    for (char i : source) {
        mappedFragments.push_back(mapFunc(i));
    }

    std::string sum{};
    for (const std::string& fragment : mappedFragments) {
        sum.append(fragment.c_str(), fragment.size() - 1); // cutting nulls on ends
    }

    return sum;
}
