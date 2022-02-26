cmake_minimum_required(VERSION 3.20)
project(untitled4 CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(program)
add_subdirectory(program)

add_executable(untitled4 main.cpp)
add_subdirectory(Google_test)
