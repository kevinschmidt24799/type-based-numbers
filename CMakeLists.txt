cmake_minimum_required(VERSION 3.21)
project(numbers)

set(CMAKE_CXX_STANDARD 17)

add_executable(numbers main.cpp numbers.hpp numbers.cpp)
