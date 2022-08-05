#include "validator.h"
#include <string>

using namespace input_action;

bool Validator::map(std::string data) {
    bool containsOnlyNumbers = data.find_first_not_of(NUMBERS) == std::string::npos;
    bool hasValidSize = data.length() <= MAX_LENGTH;

    return hasValidSize && containsOnlyNumbers;
}
