////
//// Created by wshwbluebird on 16/8/6.
////
//#include <iostream>
////int -2147483648 - 2147483647
////做的不好!!!!!!太慢了!!
//#include <math.h>
//class Solution {
//public:
//    double myPow(double x, int n) {
//        if(n==0)  return 1;
//        if(n==1)  return x;
//        if(n>1){
//            double temp = myPow( x,  n);
//            if((n%2)==0)  return temp * temp;
//            else return temp * temp *x;
//        }
//        else{
//            if(n==INT_MIN)
//                return 1/pow(x,INT8_MAX*x);
//            return 1/myPow(x,(0-n));
//        }
//    }
//};