////
//// Created by wshwbluebird on 16/8/29.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//     bool isScramble(string s1, string s2) {
//        if(s1==s2) return  true;
//        if(s1.length() != s2.length())  return false;
//        vector<int> alphabet(26,0);
//         for (int i = 0; i < s1.length(); ++i) {
//             alphabet[(s1[i]-'a')] ++;
//             alphabet[s2[i]-'a'] --;
//         }
//         for (int i = 0; i < 26; ++i) {
//             if(alphabet[i]!=0)  return false;
//         }
//
//         for (int j = 1; j < s1.size(); ++j) {
//             if((isScramble(s1.substr(0,j),s2.substr(0,j))  && isScramble(s1.substr(j),s2.substr(j)))
//                ||(isScramble(s1.substr(0,j),s2.substr(s1.size()-j))&& isScramble(s1.substr(j),s2.substr(0,s1.size()-j)))
//               )  return true;
//         }
//         return false;
//
//     }
//};
//
//int main(){
//
//    return 0;
//}