#ifndef INFOTECSSTAZHTASK_PROGRAM_1_MAIN_MAPPER_RESULT_MAPPER_H
#define INFOTECSSTAZHTASK_PROGRAM_1_MAIN_MAPPER_RESULT_MAPPER_H

#include "../core/mapper.h"
#include <string>

namespace input_action {
    class ResultMapper : public core::Mapper<std::string, std::string> {

    private:
        constexpr static const char EVEN_NUMBER_SIGN[] = "KB";

    public:
        std::string map(std::string data) override;
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_MAIN_MAPPER_RESULT_MAPPER_H
