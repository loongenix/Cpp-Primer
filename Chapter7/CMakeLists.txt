cmake_minimum_required(VERSION 3.9)
project(Chapter7)

set(CMAKE_CXX_STANDARD 11)

add_executable(Chapter7 main.cpp Sales_data.cpp Sales_data.h Person.cpp Person.h Screen/Screen.cpp Screen/Screen.h Screen/WindowManager.cpp Screen/WindowManager.h)