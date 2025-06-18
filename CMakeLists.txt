cmake_minimum_required(VERSION 3.31)
project(Assignment1)

set(CMAKE_CXX_STANDARD 20)

add_executable(Assignment1 main.cpp
        Assignment1_1/Assignment1_1.cpp
        Assignment1_4/Assignment1_4.cpp
        Assignment1_4/Assignment1_4.h
        Assignment1_2/Assignment1_2.cpp
        Assignment1_2/Assignment1_2.h
        Assignment1_3/Assignment1_3.cpp
        Assignment1_3/Assignment1_3.h
        Assignment1_1/Assignment1_1.h
        Assignments.h
        getValidInput.cpp
        getValidInput.h)
