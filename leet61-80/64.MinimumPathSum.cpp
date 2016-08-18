////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//#include <vector>
//#include <string.h>
//using namespace std;
//
//
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int m = grid.size();
//        int n = grid[0].size();
//        int f[m+1][n+1];
//        memset(f,0, sizeof(f));
//        for (int i = 1; i < m+1 ; ++i) {
//            for (int j = 1; j < n+1 ; ++j) {
//                if(i==1 && j==1) {f[i][j]=grid[i-1][j-1]; }
//                else if(i==1){
//                    f[i][j] = f[i][j-1] + grid[i-1][j-1];
//                }
//                else if(j==1){
//                    f[i][j] = f[i-1][j] + grid[i-1][j-1];
//                }
//                else
//                   f[i][j] = min(f[i-1][j],f[i][j-1]) + grid[i-1][j-1];
//               // cout<<i<<"  :  "<<j<<"    :     "<<f[i][j]<<endl;
//            }
//        }
//        return f[m][n];
//    }
//};
//
//
//int main(){
//    vector<vector<int>> ob ={
//        {1,2},
//        {1,1}
//    };
//    Solution s;
//    cout<<s.minPathSum(ob)<<endl;
//
//    return 0;
//}
//
//
