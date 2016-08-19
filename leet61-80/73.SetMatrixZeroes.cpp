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
//    void setZeroes(vector<vector<int>>& matrix) {
//        int row = matrix.size();
//        int col = matrix[0].size();
//        int hash[row+col+1];
//        for (int i = 0; i < row; ++i) {
//            for (int j = 0; j <col ; ++j) {
//                if(matrix[i][j]==0){
//                    hash[i]=1;
//                    hash[row+j]=1;
//                }
//            }
//        }
//
//        for (int i = 0; i < row; ++i) {
//            if(hash[i]){
//                for (int j = 0; j < col ; ++j) {
//                    matrix[i][j]=0;
//                }
//            }
//        }
//
//        for (int j = 0; j <col ; ++j) {
//            if(hash[row+j]){
//                for (int i = 0; i < row ; ++i) {
//                    matrix[i][j]=0;
//                }
//            }
//        }
//    }
//};
//
//
//
//int main(){
//
//
//
//    return 0;
//}