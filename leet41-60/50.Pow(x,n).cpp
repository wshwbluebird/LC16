////
//// Created by wshwbluebird on 16/8/17.
////
//
//class Solution {
//public:
//    double myPow(double x, int n) {
//        if(x==1)  return 1;
//        if(n==0)  return 1;
//        if(n==1)  return x;
//        if(x>-0.000001 && x<0.000001) return 0;
//        if(n>1){
//            double temp = myPow( x,  n/2);
//            if(n%2==0)  return temp * temp;
//            else return temp * temp *x;
//        }
//        else{
//            if (n == INT_MIN)
//                return 1.0 / (pow(x, INT_MAX)*x);
//            return myPow(1/x,(0-n));
//        }
//    }
//};