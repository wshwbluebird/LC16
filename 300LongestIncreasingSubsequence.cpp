////
//// Created by wshwbluebird on 16/8/7.
////
////以后再写个二分吧
//#include <iostream>
//#include <string.h>
//#include <vector>
//using namespace std;
//
//int lengthOfLIS(vector<int>& nums) {
//    int dp[nums.size()];
//    int maxdp=0;
//    for (int i = 0; i <nums.size() ; ++i) {
//        dp[i] =1;
//        //cout<<nums[i]<<endl;
//        for (int j = 0; j < i ; ++j) {
//            if(nums[i]>nums[j]){
//                if(dp[j]>=dp[i])  dp[i] = dp[j]+1;
//                //cout<<i<<" : "<<dp[i]<<endl;
//            }
//        }
//    }
//    for (int k = 0; k < nums.size() ; ++k) {
//        if(maxdp<dp[k])  maxdp= dp[k];
//    }
//    return maxdp;
//}
//
//int main(){
//
//    vector<int> t = {10,9,2,5,3,7,101,18};
//    //t.push_back()
//   // cout<<t[4]<<endl;
//    cout<<lengthOfLIS(t);
//
//
//
//
//    return 0;
//}