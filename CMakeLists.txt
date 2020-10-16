cmake_minimum_required(VERSION 3.17)
project(up4)

set(CMAKE_CXX_STANDARD 14)

add_executable(up4 main.cpp sorting_algorithms.cpp sorting_algorithms.h vectorLR.cpp vectorLR.h data_generation.cpp data_generation.h)