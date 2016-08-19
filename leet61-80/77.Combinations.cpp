////
//// Created by wshwbluebird on 16/8/19.
////
//
//#include<iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> ans;
//    vector<vector<int> > combine(int n, int k) {
//        if(n==0||k==0) return res;
//        dfs(0,n,k);
//        return res;
//    }
//    void dfs(int cur, int n ,int k){
//        if(ans.size()==k) {
//            res.push_back(ans);
//            return ;
//        }
//        for (int i = cur+1; i <=n  ; ++i) {
//            ans.push_back(i);
//            dfs(i,n,k);
//            ans.pop_back();
//        }
//    }
//
//};
//
//int main(){
//    Solution s;
//    vector<vector<int>> ans = s.combine(1,1);
//    for (int i = 0; i <ans.size() ; ++i) {
//        for (int j = 0; j <ans[i].size() ; ++j) {
//            cout<<ans[i][j]<<",";
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}