#include "../assertion_exception.h"
#include "../../src/input_action/result_mapper.h"
#include <iostream>

void test_result_mapper() {
    std::string value("68950635274304971218"); // shuffled 11223344556677889900
    std::string expected("99KBKB77KBKB55KBKB33KBKB11KBKB");

    input_action::ResultMapper resultMapper{};
    std::string result = resultMapper.map(value);

    if (strcmp(result.c_str(), expected.c_str()) == 0) {
        std::cout << "Test ResultMapper -OK\n";
    } else {
        std::cerr
            << "Test ResultMapper -failed\n"
            << "Expected: \t" << expected << "\n"
            << ", but got: \t" << result << "\n";
        throw test::assertion_exception("Test ResultMapper failed");
    }
}
