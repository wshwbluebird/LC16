////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int mySqrt(int x) {
//        if(x<2) return x;
//        int low = 0, high = x-1;
//        while(low < high){
//            int mid = low + (high-low)/2;
//            if(mid * mid < x)  low = mid ;
//            else high = mid-1;
//        }
//        return high;
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.mySqrt(10)<<endl;
//
//
//    return 0;
//}