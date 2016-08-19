cmake_minimum_required(VERSION 3.5)
project(leet61_80)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 61.RotateList.cpp 62.UniquePaths.cpp 63.UniquePathsII.cpp 64.MinimumPathSum.cpp 65.ValidNumber.cpp 66.PlusOne.cpp 67.AddBinary.cpp 68.TextJustification.cpp "69.Sqrt(x).cpp" 70.ClimbingStairs.cpp 71.SimplifyPath.cpp 72.EditDistance.cpp 73.SetMatrixZeroes.cpp 74.Searcha2DMatrix.cpp 75.SortColors.cpp 76.MinimumWindowSubstring.cpp 77.Combinations.cpp 78.Subsets.cpp 79.WordSearch.cpp 80.RemoveDuplicatesfromSortedArrayII.cpp)
add_executable(leet61_80 ${SOURCE_FILES})