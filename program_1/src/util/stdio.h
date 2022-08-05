#ifndef INFOTECSSTAZHTASK_PROGRAM_1_UTIL_STDIO_H
#define INFOTECSSTAZHTASK_PROGRAM_1_UTIL_STDIO_H

#include "../core/io.h"
#include <string>

namespace util {
    class StdIOReaderWriter :
            public core::LineReader<std::string>,
            public core::LineWriter<std::string, void> {
    public:
        std::string read_line() override;

        void write_line(std::string data) override;

        void write_line(char * data) override;
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_UTIL_STDIO_H
