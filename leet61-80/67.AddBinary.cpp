////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        reverse(a.begin(),a.end());
//        reverse(b.begin(),b.end());
//        string ans = "";
//        int temp;
//        int c = 0;
//        for (int i = 0; i < a.length()||i<b.length(); ++i) {
//            if(i>=a.length()) {
//                temp = c+b[i]-'0';
//                ans = char(temp%2+'0') + ans;
//                c = temp/2;
//            }else if(i>=b.length()){
//                temp = c+a[i]-'0';
//                ans = char(temp%2+'0') + ans;
//                c = temp/2;;
//            }else {
//                temp = c+a[i]+b[i]-'0'-'0';
//                ans = char(temp%2+'0') + ans;
//                c = temp/2;
//            }
//        }
//        if(c==1) ans = '1' +ans;
//        return ans;
//
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.addBinary("111","110")<<endl;
//
//    return 0;
//}