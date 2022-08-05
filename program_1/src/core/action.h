#ifndef INFOTECSSTAZHTASK_PROGRAM_1_CORE_ACTION_H
#define INFOTECSSTAZHTASK_PROGRAM_1_CORE_ACTION_H

#include <thread>

namespace core {
    class Action {

    public:
        void start();

        void finish();

        virtual ~Action();

    protected:
        virtual void work() = 0;
        bool isCalledToStop = false;

    private:
        std::thread* task = nullptr;
    };
}

#endif //INFOTECSSTAZHTASK_PROGRAM_1_CORE_ACTION_H
