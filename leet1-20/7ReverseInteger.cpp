////
//// Created by wshwbluebird on 16/8/7.
////两种 方法 第二种快一点
//#include <iostream>
//using namespace std;
//
//class Solution {
//public:
//    int reverse(int x) {
//        if(x==0) return 0;
//        bool flag = false;
//        if(x<0){
//            x = -x;
//            flag = true;
//        }
//        int n=0;
//        long long p =10;
//        while(x/p!=0){
//            p = p*10;
//            n++;
//        }
//
//        cout<<n<<endl;
//        char str[11];
//        sprintf(str,"%d",x);
//        char ans[11];
//        int i = 0;
//        while(n>=0){
//            ans[i++] = str[n--];
//        }
//        long num ;
//        sscanf(ans,"%ld",&num);
//        cout<<num<<endl;
//        if(flag) {
//            num = -num;
//            if(num<INT_MIN) return 0;
//            else return num;
//        }
//
//        if(num>INT_MAX) return 0;
//        else return num;
//    }
//};
//
//class Solution2 {
//public:
//    int reverse(int x) {
//        bool flag = false;
//        long lx = x;
//        if(lx < 0 ){
//            flag = true;
//            lx = -lx;
//        }
//        long rx = 0;
//        while(lx!=0){
//            rx = rx *10 + lx %10;
//            lx = lx /10;
//        }
//        if(flag){
//            rx = -rx;
//            if(rx<INT_MIN) return 0;
//            return rx;
//        }
//        if(rx>INT_MAX) return 0;
//        return rx;
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.reverse(1)<<endl;
//
//
//    return 0;
//}