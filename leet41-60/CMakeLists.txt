cmake_minimum_required(VERSION 3.5)
project(leet41_60)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 41.FirstMissingPositive.cpp 42.TrappingRainWate.cpp 43.MultiplyStrings.cpp)
add_executable(leet41_60 ${SOURCE_FILES})