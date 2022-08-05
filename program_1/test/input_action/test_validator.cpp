#include "test_validator.h"
#include "../../src/input_action/validator.h"
#include "../assertion_exception.h"
#include <iostream>

bool test_valid_string() {
     input_action::Validator validator{};

    return validator.map(std::string("11111111112222222222333333333")) == true; // all numbers, size = 29
}

bool test_valid_but_has_size_of_64_chars() {
    input_action::Validator validator{};

    return validator.map(std::string("1111111111222222222233333333334444444444555555555566666666667777")) == true;
}

bool test_bigger_than_64_chars() {
    input_action::Validator validator{};

    return validator.map(std::string("11111111112222222222333333333344444444445555555555666666666677777")) == false;
}

bool test_contains_alpha() {
    input_action::Validator validator{};

    return validator.map(std::string("123a")) == false;
}

bool test_contains_only_alpha() {
    input_action::Validator validator{};

    return validator.map(std::string("alpha")) == false;
}

bool test_contains_nothing() {
    input_action::Validator validator{};

    return validator.map(std::string("")) == true;
}

int receive_test_result(const char testName[], bool testResult) {
    if (testResult) {
        return 0;
    } else {
        std::cerr << "Problem at <" << testName << ">\n";
        return 1;
    }
}

void test_validator() {
    int errorCounter = 0 +
            receive_test_result("test valid string", test_valid_string()) +
            receive_test_result("test valid but has size of 64 chars", test_valid_but_has_size_of_64_chars()) +
            receive_test_result("test bigger than 64 chars", test_bigger_than_64_chars()) +
            receive_test_result("test contains alpha", test_contains_alpha()) +
            receive_test_result("test contains only alpha", test_contains_only_alpha()) +
            receive_test_result("test contains nothing", test_contains_nothing());

    if (errorCounter == 0) {
        std::cout << "Test Validator -OK\n";
    } else {
        std::cerr << "Test Validator -Error\n";
        throw test::assertion_exception("input_action::Validator is bad");
    }
}
