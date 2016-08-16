////
//// Created by wshwbluebird on 16/8/16.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size()-1;
//        for (int i = 0; i <n+1-i ; ++i) {
//            for (int j = i; j < n-i; ++j) {
//                int temp =  matrix[i][j];
//                matrix[i][j]=matrix[n-j][i];
//                //cout<< matrix[i][j]<<endl;
//                matrix[n-j][i] = matrix[n-i][n-j];
//                //cout<< matrix[n-j][i]<<endl;
//                matrix[n-i][n-j] = matrix[j][n-i];
//                //cout<< matrix[n-i][n-j]<<endl;
//                matrix[j][n-i] = temp;
//                //cout<<temp<<endl;
//            }
//        }
//    }
//};
//
//
//int main(){
//    vector<vector<int>> matrix = {
//            {1,2,3,4},
//            {5,6,7,8},
//            {9,10,11,12},
//            {13,14,15,16}
////            {1,2},
////            {3,4}
////            {1,2,3},
////            {4,5,6},
////            {7,8,9}
//    };
//    Solution s;
//    for (int i = 0; i < matrix.size(); ++i) {
//        for (int j = 0; j <matrix.size() ; ++j) {
//            cout<<matrix[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    s.rotate(matrix);
//    cout<<endl;
//    for (int i = 0; i < matrix.size(); ++i) {
//        for (int j = 0; j <matrix.size() ; ++j) {
//            cout<<matrix[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}
