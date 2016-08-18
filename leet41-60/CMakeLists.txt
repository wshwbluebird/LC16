cmake_minimum_required(VERSION 3.5)
project(leet41_60)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 41.FirstMissingPositive.cpp 42.TrappingRainWate.cpp 43.MultiplyStrings.cpp 44.WildcardMatching.cpp 45.JumpGameII.cpp 46.Permutations.cpp 47.PermutationsII.cpp 49.GroupAnagrams.cpp 48.RotateImage.cpp "50.Pow(x,n).cpp" 51.N-Queens.cpp 52.N-QueensII.cpp 53.MaximumSubarray.cpp 54.SpiralMatrix.cpp 55.JumpGame.cpp 56.MergeIntervals.cpp 57.InsertInterval.cpp 58.LengthofLastWord.cpp "59.SpiralMatrix II.cpp" 60.PermutationSequence.cpp)
add_executable(leet41_60 ${SOURCE_FILES})