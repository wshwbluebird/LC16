////
//// Created by wshwbluebird on 16/8/16.
////
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