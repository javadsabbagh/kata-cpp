cmake_minimum_required(VERSION 2.8)

# Settings for C++ 11 onwards
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(maps)
add_executable(${PROJECT_NAME} "main.cpp" bitset_tests.cpp bitset_tests.h)
