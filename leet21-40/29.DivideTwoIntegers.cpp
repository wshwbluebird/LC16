////
//// Created by wshwbluebird on 16/8/9.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Solution {
//public:
//    int divide(int dividend, int divisor) {
//        if(divisor==0)  return INT_MAX;
//        if(dividend==INT_MIN && divisor ==-1) return  INT_MAX;
//
//        //if(abs(dividend)<abs(divisor))  return 0;
//        if(divisor==1)  return dividend;
//        bool sign = true;
//        if(dividend<0) sign=!sign;
//        if(divisor<0)  sign = !sign;
//        long d = abs(dividend);
//        long s = abs(divisor);
//        if(d<s) return 0;
//        int ans = 0;
//        while(d>=s){
//            long temp = s;
//            int cnt = 1;
//            while(s>=(temp<<1)){   //减去到目前为止最大的 2的整数次幂
//                temp = temp<<1;
//                cnt = cnt<<1;
//            }
//            ans += cnt;
//            d -= temp;
//        }
//        if(sign)
//            return ans;
//        else
//            return -ans;
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.divide(-13,-4)<<endl;
//
//
//    return 0;
//}