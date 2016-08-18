////
//// Created by wshwbluebird on 16/8/17.
////
//
//#include <iostream>
//#include <vector>
//#include <stack>
//using namespace std;
//
//class Solution {
//public:
//
//    int dx[4] = {0,-1,0,1};
//    int dy[4] = {1,0,-1,0};
//    vector<int> ans;
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        if(matrix.size()==0)  return ans;
//        ans.push_back(matrix[0][0]);
//        matrix[0][0] = INT_MIN;
//        dfs(matrix,0,0,0);
//        return ans;
//    }
//
//
//    void dfs(vector<vector<int>>& matrix ,int x, int y , int dir){
//        dir = dir %4;
//        for (int i = dir; i < dir+4 ; ++i) {
//            int td = i%4;
//            int nx = x+dx[td];
//            int ny = y+dy[td];
//            if(nx>=0 && nx < matrix.size() && ny >= 0 && ny< matrix[0].size()&& matrix[nx][ny] != INT_MIN){
//                ans.push_back( matrix[nx][ny]);
//                matrix[nx][ny] = INT_MIN;
//                dfs(matrix,nx,ny,i);
//                return ;
//            }
//        }
//    }
//};
//
//
//int main(){
//    vector<vector<int>> ma = {
//            {1,2,3},
//            {4,5,6},
//            {7,8,9}
//    };
//    Solution s;
//    vector<int> ans = s.spiralOrder(ma);
//    for (int i = 0; i <ans.size() ; ++i) {
//        cout<<ans[i]<<endl;
//    }
//
//    return 0;
//}