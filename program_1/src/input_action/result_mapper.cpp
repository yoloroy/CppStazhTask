#include "result_mapper.h"
#include "../util/string_util.h"
#include <vector>

bool is_even(char chr);

std::string input_action::ResultMapper::map(std::string data) {
    std::sort(data.begin(), data.end(), std::greater());
    util::replace_all_if(data, is_even, (char *) EVEN_NUMBER_SIGN, 3);
    return data;
}

bool is_even(char chr) {
    return chr % 2 == 0;
}
