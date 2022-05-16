cmake_minimum_required(VERSION 3.21)
project(Lab1)

set(CMAKE_CXX_STANDARD 20)

include_directories(${PROJECT_SOURCE_DIR})
add_executable(Lab1 src/main.cpp src/ackermann.cpp include/ackermann.h)
