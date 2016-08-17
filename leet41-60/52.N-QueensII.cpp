////
//// Created by wshwbluebird on 16/8/17.
////
//
//
//#include <iostream>
//#include <vector>
//这道题最快的方式是打表
//
//using namespace std;
//
//class Solution {
//public:
//    int ans = 0;
//
//    int totalNQueens(int n) {
//        ans = 0;
//        vector<vector<int>>ret(n,vector<int>(n));
//        vector<int>loc(n,-1);
//        dfs(0,ret,n);
//        return ans;
//    }
//
//    void dfs(int cur,vector<vector<int>>ret,int n){
//        //cout<<cur<<endl;
//        //cout<<cur<<endl;
//        if(cur==n) {
//            ans++;
//            return ;
//        }
//
//        for (int i = 0; i < n; ++i) {
//            if(check(cur,cur,i,ret)){
//                //cout<<cur<<" : "<<i<<endl;
//                ret[cur][i] = 1;
//
//                dfs(cur+1,ret ,n);
//                ret[cur][i] = 0;
//
//            }
//        }
//    }
//
//    bool check(int cur, int x, int y,vector<vector<int>>ret){
//        int len = ret.size();
//        int leftup = x-y;
//        int rightup = x+y;
//        for (int i = 0; i < cur ; ++i) {
//            if(ret[i][y])  return false;
//            if(rightup-i >= 0 && rightup-i <len  && ret[i][rightup-i])  return false;
//            if(i-leftup >= 0 && i-leftup< len  && ret[i][i-leftup]) return false;
//        }
//        return true;
//    }
//
//
//
//};
//
//int main(){
//
//    Solution s;
//    cout<<s.totalNQueens(2)<<endl;
//    for (int i = 1; i <10 ; ++i) {
//        cout<<s.totalNQueens(i)<<",";
//    }
//    return 0;
//}