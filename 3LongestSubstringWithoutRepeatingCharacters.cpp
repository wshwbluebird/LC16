////
//// Created by wshwbluebird on 16/8/7.
////
//动态规划 但是 跑的比较慢
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int dp[s.length()+1];
//        dp[0] = 1;
//        for(int i = 1 ; i <s.length(); ++i){
//            dp[i] =1;
//            for(int j = i-dp[i-1]; j<i;j++){
//                if(s[j]!=s[i]) dp[i]++;
//                else dp[i] =1;
//            }
//        }
//
//        int maxdp = 0;
//        for(int i = 0 ;i< s.length(); ++i){
//            if(maxdp< dp[i]) maxdp = dp[i];
//        }
//        return maxdp;
//    }
//};