#ifndef INFOTECSSTAZHTASK_PROGRAM_1_ASSERTION_EXCEPTION_H
#define INFOTECSSTAZHTASK_PROGRAM_1_ASSERTION_EXCEPTION_H

#include <stdexcept>

namespace test {
    class assertion_exception : public std::runtime_error {
    public:
        explicit assertion_exception(const char * message) : std::runtime_error(message) {}
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_ASSERTION_EXCEPTION_H
