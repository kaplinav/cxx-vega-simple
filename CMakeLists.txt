cmake_minimum_required(VERSION 3.28)
project(cxx_vega_simple)

set(CMAKE_CXX_STANDARD 17)

add_executable(cxx_vega_simple main.cpp
        src/my_sum.cpp
        include/my_sum.h)
