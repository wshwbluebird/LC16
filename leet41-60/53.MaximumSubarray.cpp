////
//// Created by wshwbluebird on 16/8/17.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        if(nums.size()==1) return nums[0];
//        int n = nums.size();
//        int mina = min(nums[0],0);
//        int ans = mina;
//        vector<int> sum (n+1);
//        //sum[1] = nums[0];
//        for (int i = 1; i < n+1; ++i) {
//            sum[i] = sum[i-1]+nums[i-1];
//            if(i==1 && nums[0]<0) continue;
//            if(ans< sum[i] - mina) ans = sum[i] - mina;
//            if(sum[i]<mina) mina = sum[i];
//
//        }
//        return ans;
//
//    }
//};
//
//int main(){
//    Solution s;
//    vector<int> nums = {1,-2,-1};
//    cout<<s.maxSubArray(nums)<<endl;
//
//    return 0;
//}