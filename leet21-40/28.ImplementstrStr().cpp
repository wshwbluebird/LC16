////
//// Created by wshwbluebird on 16/8/9.
////
//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//
//class Solution {
//public:
//    int strStr(string haystack, string needle) {
//
//        if(needle.size()==0)  return 0;
//        if(needle.length()>haystack.length()) return -1;
//        bool flag;
//        for (int i = 0; i < haystack.length()-needle.length()+1 ; ++i) {
//            if(haystack[i]!=needle[0]) continue;
//            else {
//                flag = true;
//                for (int j = 1; j < needle.length() ; ++j) {
//                    if(needle[j]!= haystack[i+j]) {
//                        flag = false;
//                        break;
//                    }
//                }
//                if(flag) return i;
//            }
//        }
//        return -1;
//    }
//};
//
//
//int main(){
//    Solution s;
//    cout<<s.strStr("werreere","ere")<<endl;
//
//
//    return 0;
//}