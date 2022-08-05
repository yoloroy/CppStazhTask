cmake_minimum_required(VERSION 3.17)
project(InfotecsStazhTask_program_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_program_1
        main.cpp
        assertion_exception.h

        core/test_action.cpp core/test_action.h
        ../src/core/action.cpp ../src/core/action.h

        input_action/test_result_mapper.cpp input_action/test_result_mapper.h
        ../src/input_action/result_mapper.h ../src/input_action/result_mapper.cpp
        ../src/util/string_util.cpp ../src/util/string_util.h

        input_action/test_validator.cpp input_action/test_validator.h
        ../src/input_action/validator.cpp ../src/input_action/validator.h)
