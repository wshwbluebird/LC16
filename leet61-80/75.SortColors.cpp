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
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> ans(n,0);
//        int c[3];
//        memset(c,0,sizeof(c));
//        for (int i = 0; i < n ;++i) {
//            c[nums[i]]++;
//        }
//        for (int i = 1; i < 3 ; ++i) {
//            c[i] += c[i-1];
//        }
//
//        for (int j = 0; j < n; ++j) {
//            ans[c[nums[j]]-1] = nums[j];
//            c[nums[j]]--;
//        }
//        for (int i = 0; i < n ; ++i) {
//            nums[i] = ans[i];
//        }
//    }
//};
//
//int main(){
//    vector<int> nums= {0,1,0,0,2};
//    Solution s;
//    s.sortColors(nums);
//    for (int i = 0; i < nums.size(); ++i) {
//        cout<<nums[i]<<endl;
//    }
//
//
//    return 0;
//}