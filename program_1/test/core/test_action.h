#ifndef INFOTECSSTAZHTASK_PROGRAM_1_CORE_TEST_ACTION_H
#define INFOTECSSTAZHTASK_PROGRAM_1_CORE_TEST_ACTION_H

#include "../../src/core/action.h"

class TestAction : public core::Action {
protected:
    void work() override;
};

void test_core_action();

#endif //INFOTECSSTAZHTASK_PROGRAM_1_CORE_TEST_ACTION_H
