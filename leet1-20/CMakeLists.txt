cmake_minimum_required(VERSION 3.5)
project(leetcode16)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp 1TwoSum.cpp 2.AddTwoNumbers.cpp 3LongestSubstringWithoutRepeatingCharacters.cpp 4MedianofTwoSortedArrays.cpp 5LongestPalindromicSubstring.cpp 6ZigZagConversion.cpp 7ReverseInteger.cpp "8StringtoInteger(atoi).cpp" 9PalindromeNumber.cpp 10RegularExpressionMatching.cpp 11ContainerWithMostWate.cpp 12IntegertoRoman.cpp 13RomantoInteger.cpp 14LongestCommonPrefix.cpp 15.3Sum.cpp 16.3SumClosest.cpp 17.LetterCombinationsofaPhoneNumber.cpp 18.4Sum.cpp 19.RemoveNthNodeFromEndoList.cpp 20.ValidParentheses.cpp)
add_executable(leetcode16 ${SOURCE_FILES})