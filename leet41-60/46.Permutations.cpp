////
//// Created by wshwbluebird on 16/8/16.
////
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> permute(vector<int>& nums) {
//        sort(nums.begin(),nums.end());
//        vector<vector<int>> ans;
//        do{
//            ans.push_back(nums);
//        }while(next_permutation(nums.begin(),nums.end()));
//        return ans ;
//    }
//
//};
//
//int main(){
//    vector<int> nums = {1,1,2};
//    Solution s;
//    vector<vector<int>> ans = s.permute(nums);
//    for (int i = 0; i <ans.size() ; ++i) {
//        //cout<<"ds"<<endl;
//        for (int j = 0; j <ans[i].size() ; ++j) {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//
//    return 0;
//}