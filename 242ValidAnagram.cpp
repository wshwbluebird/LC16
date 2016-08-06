////
//// Created by wshwbluebird on 16/8/6.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        int hash[27];
//        memset(hash,0,sizeof(hash));
//        for(int i = 0 ;i<s.length();i++){
//             int temp = s[i]-'a';
//             hash[temp]++;
//        }
//        for(int i = 0 ;i<t.length();i++){
//            int temp = t[i]-'a';
//            hash[temp]--;
//        }
//
//        for (int i = 0; i < 26; ++i) {
//            if(hash[i]!=0) return false;
//        }
//          return true;
//    }
//};
//
//
////int main(){
////
////   Solution s;
////    cout<<s.isAnagram("car","rat")<<endl;
////    cout<<s.isAnagram("anagram","nagaram");
////
////
////    return 0;
////}