cmake_minimum_required(VERSION 3.17)
project(InfotecsStazhTask_program_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(InfotecsStazhTask
        src/main.cpp
        src/core/mapper.h
        src/core/io.h
        src/core/action.cpp
        src/core/action.h
        src/input_action/result_mapper.cpp
        src/input_action/result_mapper.h
        src/input_action/validator.cpp
        src/input_action/validator.h)
