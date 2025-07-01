cmake_minimum_required(VERSION 3.10)
project(AssignmentsProject)

set(CMAKE_CXX_STANDARD 17)

# Add root directory to include path (so #include "Assignments.h" works globally)
include_directories(${CMAKE_SOURCE_DIR})

# Build a single executable called Main
add_executable(Main
    main.cpp
    getValidInput.cpp
    Assignment1/Assignment1_1/Assignment1_1.cpp
    Assignment1/Assignment1_2/Assignment1_2.cpp
    Assignment1/Assignment1_3/Assignment1_3.cpp
    Assignment1/Assignment1_4/Assignment1_4.cpp
    Assignment2/Assignment5/Assignment5.cpp
    Assignment2/Assignment6/Assignment6.cpp
    Assignment2/Assignment7/Assignment7.cpp
    Assignment2/Assignment7/Item.cpp
    Assignment3/Assignment8/Assignment8.cpp
    Assignment3/Assignment9/Assignment9.cpp

)
