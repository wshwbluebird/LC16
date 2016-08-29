////
//// Created by wshwbluebird on 16/8/29.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int numDecodings(string s) {
//        if(s.length()==0)  return 0;
//        if(s[0]=='0')  return 0;
//        if(s.length()==1)  return 1;
//        int dp[s.length()];
//
//        dp[0] = 1;
//        if(s[1]=='0') {
//            if(s[0]>'0' && s[0]<'3')
//            dp[1] = 1;
//            else
//                return 0;
//        }
//        else if(s[0]<'2' || (s[0]=='2'&&s[1]<'7') )  dp[1] = 2;
//        else dp[1] = 1;
//
//        for (int i = 2; i <s.length() ; ++i) {
//            if(s[i]=='0') {
//                if(s[i-1]>'0' && s[i-1]<'3')
//                    dp[i] = dp[i-2];
//                else
//                return 0;
//            }
//            else{
//                if((s[i-1]>'0' && s[i-1]<'2')||(s[i-1]=='2'&&s[i]<'7')) dp[i] = dp[i-1]+dp[i-2];
//                else dp[i] = dp[i-1];
//            }
//        }
//        return dp[s.length()-1];
//
//
//    }
//};
//
//int main(){
//
//
//
//    return 0;
//}