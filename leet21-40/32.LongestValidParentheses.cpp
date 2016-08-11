////
//// Created by wshwbluebird on 16/8/10.
////
//
//#include <iostream>
//#include <stack>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int longestValidParentheses(string s) {
//        stack<int> para;
//        int dp[s.length()];
//        memset(dp,0,sizeof(dp));
//        dp[0] =0;
//        int ans = 0;
//        if(s[0]=='(')para.push(0);
//        for (int i = 1; i < s.length(); ++i) {
//            if(s[i]=='(') {
//                para.push(i);
//                dp[i]=0;
//            }else{
//                if(para.empty()) dp[i]=0;
//
//                else{
//                    int temp = para.top();
//                    para.pop();
//                    dp[i] = i-temp+1;
//                    if(temp>0)  dp[i] = dp[i]+dp[temp-1];
//                }
//            }
//            //cout<<i<<":   "<<dp[i]<<endl;
//            if(dp[i]>ans)  ans = dp[i];
//        }
//        return ans;
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.longestValidParentheses("))())(((()()")<<endl;
//
//
//    return 0;
//}