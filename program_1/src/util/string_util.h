#ifndef INFOTECSSTAZHTASK_PROGRAM_1_STRING_UTIL_H
#define INFOTECSSTAZHTASK_PROGRAM_1_STRING_UTIL_H

#include <string>

namespace util {
    typedef bool (* CharPredicate)(char);

    void replace_all_if(std::string &source, CharPredicate predicate, std::string &replacer);

    void replace_all_if(std::string &source, CharPredicate predicate, char* replacerData, size_t replacerSize);

    template<class MapFunc>
    std::string flat_map(const std::string& source, MapFunc mapFunc);
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_STRING_UTIL_H
