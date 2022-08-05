#include "core/test_action.h"
#include "input_action/test_result_mapper.h"
#include <iostream>

int main() {
    std::cout << "Run tests\n";

    std::cout << "\n";
    test_result_mapper();

    std::cout << "\n";
    test_core_action();

    return 0;
}
