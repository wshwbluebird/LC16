////
//// Created by wshwbluebird on 16/8/7.
////
//
//#include <iostream>
//using namespace std;
//
//
////class Solution {
////public:
////    bool isPalindrome(int x) {
////        if(x<0)  return false;
////        else if(x<10) return true;
////
////        long len = 10;
////        while(x/len!=0){
////            len *= 10;
////        }
////        len = len /10;
////        int ll = 10;
////        int ax= x;
////        int bx =x;
////
////        while(ll<=len){
////            if(ax/len != bx % 10)  return false;
////            ax = ax%len;
////            len = len/10;
////            bx = bx/10;
////            ll = ll*10;
////        }
////        return true;
////
////    }
////};
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if(x<0)  return false;
//        int bx = x;
//        long ans = 0;
//        while(x!=0){
//            ans = ans *10 + x%10;
//            x= x/10;
//        }
//        if(ans==bx)  return true;
//        return false;
//
//
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.isPalindrome(9999)<<endl;
//
//
//    return 0;
//}