cmake_minimum_required(VERSION 3.17)
project(InfotecsStazhTask_program_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(test_program_1
        main.cpp
        core/test_action.cpp core/test_action.h
        ../src/core/action.cpp ../src/core/action.h)
