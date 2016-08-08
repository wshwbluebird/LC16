////
//// Created by wshwbluebird on 16/8/7.
////
////1A 不过好慢  慢的要死了
////感觉跟传统的 正则表达式 不太一样
//#include <iostream>
//using namespace std;
////class Solution {
////public:
////    bool isMatch(string s, string p) {
////
////        const char *x = p.c_str();
////        const char *y = s.c_str();
////        cout<<*x<<endl;
////        //cout<<*(x+1)<<endl;
////       // cout<<(x+2)<<endl;
////        cout<<((*y)==0)<<endl;
////        if(*(x+2)!=0)
////        isMatch(s,(x+2));
////
////    }
////};
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        const char *x = s.c_str();
//        const char *y = p.c_str();
//
//        if(*y==0)   return (*x==0);
//        else if(*x==0){
//            if(*(y+1)=='*')  return isMatch(x,y+2);
//            else return false;
//        }else if(*y!=0 && *(y+1)=='*'){
//            if(isMatch(x,y+2))  return true;
//            else if(*x==*y || *y=='.') return isMatch(x+1,y);
//            else return false;
//        }else {
//             if(*x==*y || *y=='.')  return isMatch(x+1,y+1);
//            else return false;
//        }
//    }
//};
//
//
//int main(){
//    Solution s;
//    cout<<s.isMatch("aa","a")<<endl;
//    //string p ="ASda";
//
//    return 0;
//}