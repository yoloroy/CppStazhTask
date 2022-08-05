#include "core/test_action.h"
#include "input_action/test_result_mapper.h"
#include "input_action/test_validator.h"
#include <iostream>

int main() {
    std::cout << "Run tests\n";

    std::cout << "\n";
    test_result_mapper();

    std::cout << "\n";
    test_core_action();

    std::cout << "\n";
    test_validator();

    return 0;
}
