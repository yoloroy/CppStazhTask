#ifndef INFOTECSSTAZHTASK_PROGRAM_1_CORE_IO_H
#define INFOTECSSTAZHTASK_PROGRAM_1_CORE_IO_H

namespace core {
    template<typename string>
    class LineReader {
    public:
        virtual string read_line() = 0;
    };

    template<typename string, typename result>
    class LineWriter {
    public:
        virtual result write_line(string data) = 0;

        virtual result write_line(char * data) = 0;
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_CORE_IO_H
