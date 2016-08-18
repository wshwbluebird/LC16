////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//#include <string.h>
//using namespace std;
//
//
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        int f[m+1][n+1];
//        memset(f,0, sizeof(f));
//        for (int i = 1; i < m+1 ; ++i) {
//            for (int j = 1; j < n+1 ; ++j) {
//                if(i==1&&j==1) f[i][j]=1;
//                else f[i][j] = f[i-1][j] + f[i][j-1];
//            }
//        }
//        return f[m][n];
//    }
//};
//
//
//int main(){
//
//    return 0;
//}