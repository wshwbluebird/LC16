////
//// Created by wshwbluebird on 16/8/7.
////
//
//bool isBadVersion(int version);
//
//class Solution {
//public:
//    int firstBadVersion(int n) {
//        return Binary_Search_BadVersion(1,n);
//    }
//
//    int Binary_Search_BadVersion(int a,int b){
//        if(a>b) return 0;
//        if(a==b) {
//            if(isBadVersion(a))  return a;
//            else return 0;
//        }
//        int m = a+(b-a)/2;
//        if(isBadVersion(m)){
//            // int temp;
//            // if(temp = Binary_Search_BadVersion(a,m))  return temp;
//            // else return m;
//            return Binary_Search_BadVersion(a,m);
//        }else{
//            return Binary_Search_BadVersion(m+1, b);
//        }
//    }
//};