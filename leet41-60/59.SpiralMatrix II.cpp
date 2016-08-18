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
//    int dx[4] = {0,1,0,-1};
//    int dy[4] = {1,0,-1,0};
//    vector<vector<int>> generateMatrix(int n) {
//        int nn = n*n;
//        vector<vector<int>> ans (n,(vector<int>(n)));
//        if(n==0) return ans;
//        ans[0][0] = 1;
//        dfs(2,0,0,ans,0,n);
//        return  ans;
//    }
//
//    void dfs(int cur,int x, int y,vector<vector<int>> &ans,int dir,int n){
//        if(cur > n*n) return ;
//        for (int i = dir; i < dir+4  ; ++i) {
//            int d = i%4;
//            int nx = x +dx[d];
//            int ny = y +dy[d];
//            //cout<<nx<<" : "<<ny<<endl;
//            if(nx>=0 && nx <n &&ny>=0 && ny<n && ans[nx][ny] ==0){
//                ans[nx][ny] = cur;
//                dfs(cur+1,nx,ny,ans,i,n);
//                return ;
//            }
//        }
//    }
//};
//
//int main(){
//
//    vector<vector<int>> ans ;
//    Solution s;
//    for (int i = 0; i < 22 ; ++i) {
//        ans = s.generateMatrix(i);
//        cout<<"{";
//        for (int j = 0; j <ans.size() ; ++j) {
//            if(j!=0) cout<<",";
//            cout<<"{";
//            for (int k = 0; k < ans[j].size(); ++k) {
//                if(k!=0) cout<<",";
//                cout<<ans[j][k];
//            }
//            cout<<"}";
//        }
//        cout<<"},"<<endl;
//    }
//
//
//    return 0;
//}