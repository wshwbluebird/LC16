cmake_minimum_required(VERSION 3.6)
project(leet81_100)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 81.SearchinRotatedSortedArrayII.cpp 82.RemoveDuplicatesfromSortedListII.cpp 83.RemoveDuplicatesfromSortedList.cpp 84.LargestRectangleinHistogram.cpp 85.MaximalRectangle.cpp 86.PartitionList.cpp)
add_executable(leet81_100 ${SOURCE_FILES})