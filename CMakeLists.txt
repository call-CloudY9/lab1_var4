cmake_minimum_required(VERSION 4.0)
project(lab1_var4)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab1_var4
        src/main.cpp
        include/exN1.hpp
        include/exN2.hpp
        include/exN3.hpp
        src/exN1.cpp
        src/exN2.cpp
        src/exN3.cpp)
