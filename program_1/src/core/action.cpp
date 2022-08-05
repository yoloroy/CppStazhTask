#include "action.h"

namespace core {

    void Action::start() {
        if (task != nullptr) throw std::logic_error("You must finish action before start it again");
        isCalledToStop = false;
        task = new std::thread([this]() { work(); });
    }

    void Action::finish() {
        if (task == nullptr) throw std::logic_error("This action already has been finished");
        isCalledToStop = true;
        task->join();
        free(task);
        task = nullptr;
    }

    Action::~Action() {
        if (task != nullptr) finish();
    }
}
