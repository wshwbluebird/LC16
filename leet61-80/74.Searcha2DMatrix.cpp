////
//// Created by wshwbluebird on 16/8/19.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    bool searchMatrix(vector<vector<int>>& matrix, int target) {
//        int high = matrix.size();
//        int low = 0;
//        while(low < high){
//            int mid = low + (high-low)/2;
//            if(target >= matrix[mid][0]) low = mid+1;
//            else high = mid;
//        }
//
//        int row = high -1;
//        if(row < 0 )return false;
//        high = matrix[row].size();
//        low = 0;
//        while(low < high){
//            int mid = low + (high-low)/2;
//            if(matrix[row][mid]==target)  return true;
//            else if(target > matrix[row][mid]) low = mid+1;
//            else high = mid;
//        }
//        return false;
//
//    }
//};
//
//int main(){
//
//
//
//
//    return 0;
//}