cmake_minimum_required(VERSION 3.5)
project(leet21_40)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 21.MergeTwoSortedLists.cpp 22.GenerateParentheses.cpp 23.MergekSortedLists.cpp 24.SwapNodesinPairs.cpp 25.ReverseNodesinkGroup.cpp 26.RemoveDuplicatesfromSortedArray.cpp 27.RemoveElement.cpp "28.ImplementstrStr().cpp" 29.DivideTwoIntegers.cpp 30.SubstringwithConcatenationofAllWords.cpp)
add_executable(leet21_40 ${SOURCE_FILES})