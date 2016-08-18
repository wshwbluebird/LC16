////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLastWord(string s) {
//        int ans = 0;
//        if(s.length()==0) return 0;
//        reverse(s.begin(),s.end());
//        //cout<<s<<endl;
//        int i = 0;
//        while(s[i]==' ') {
//            i++;
//            //cout<<s[i]<<endl;
//        }
//
//        while(s[i]!=' '  && s[i]!='\0') {
//            ans++;
//            i++;
//        }
//        return  ans;
//    }
//};
//
//
//
//int main(){
//    Solution s;
//    cout<<s.lengthOfLastWord("     ")<<endl;
//
//    return 0;
//}