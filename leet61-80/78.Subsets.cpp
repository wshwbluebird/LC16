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
//    int n;
//    vector<vector<int>> ret;
//    vector<int>  ans;
//
//    vector<vector<int>> subsets(vector<int>& nums) {
//        n = nums.size();
//        dfs(0,nums);
//        return ret;
//    }
//
//    void dfs(int cur,vector<int> nums){
//        if(cur == n) {
//            ret.push_back(ans);
//            return ;
//        }
//        dfs(cur+1,nums);
//        ans.push_back(nums[cur]);
//        dfs(cur+1,nums);
//        ans.pop_back();
//
//    }
//
//
//};
//
//int main(){
//    vector<int>re ={1,2,3};
//    Solution s;
//    vector<vector<int>> ans = s.subsets(re);
//    for (int i = 0; i <ans.size() ; ++i) {
//        for (int j = 0; j <ans[i].size() ; ++j) {
//            cout<<ans[i][j]<<",";
//        }
//        cout<<endl;
//    }
//
//
//return 0;
//}