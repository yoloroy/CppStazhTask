#ifndef INFOTECSSTAZHTASK_PROGRAM_1_MAIN_MAPPER_VALIDATOR_H
#define INFOTECSSTAZHTASK_PROGRAM_1_MAIN_MAPPER_VALIDATOR_H

#include "../core/mapper.h"
#include <string>

namespace input_action {
    class Validator : public core::Mapper<std::string, bool> {

    private:
        constexpr static const char NUMBERS[] = "0123456789";
        constexpr static const int MAX_LENGTH = 64;

    public:
        bool map(std::string data) override;
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_MAIN_MAPPER_VALIDATOR_H
