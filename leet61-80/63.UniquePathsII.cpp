////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
//        if(obstacleGrid.size()==0) return 0;
//        int m = obstacleGrid.size();
//        int n = obstacleGrid[0].size();
//        int f[m][n];
//        memset(f,0, sizeof(f));
//        if(obstacleGrid[0][0]|| obstacleGrid[m-1][n-1])  return 0;
//        f[0][0] = 1;
//        for (int i = 0; i < m ; ++i) {
//            for (int j = 0; j < n ; ++j) {
//                if ((i==0&&j==0)||obstacleGrid[i][j] == 1) {continue;}
//                if(i==0) { f[i][j] = f[i][j-1];
//                    continue;}
//                if(j==0) {f[i][j] = f[i-1][j];
//                    continue;}
//
//                f[i][j] = f[i - 1][j] + f[i][j - 1];
//            }
//        }
//        return f[m-1][n-1];
//    }
//};
//
//int main(){
//    vector<vector<int>> ob ={
//            {0,0},
//            {1,0},
//            {0,0}
//    };
//    Solution s;
//    cout<<s.uniquePathsWithObstacles(ob)<<endl;
//    return 0;
//}