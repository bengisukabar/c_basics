cmake_minimum_required(VERSION 4.0)
project(c_basics C)

set(CMAKE_C_STANDARD 11)

add_executable(c_basics main.c
        calculator/calculator.c)
