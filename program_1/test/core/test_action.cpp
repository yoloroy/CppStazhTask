#include "../../src/core/action.h"
#include "test_action.h"
#include <iostream>

void TestAction::work() {
    std::cout << "Action has started\n";
    while (!isCalledToStop);
    std::cout << "Action was stopped\n";
}

void test_core_action() {
    std::cout << "create action\n";
    TestAction action;

    std::cout << "start action\n";
    action.start();

    std::this_thread::sleep_for(std::chrono::milliseconds(500));

    std::cout << "finish action\n";
    action.finish();

    std::cout << "after finish action\n";
}
