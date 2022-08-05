#ifndef INFOTECSSTAZHTASK_PROGRAM_1_CORE_MAPPER_H
#define INFOTECSSTAZHTASK_PROGRAM_1_CORE_MAPPER_H

namespace core {
    template<class T, class R>
    class Mapper {
    public:
        virtual R map(T data) = 0;
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_CORE_MAPPER_H
