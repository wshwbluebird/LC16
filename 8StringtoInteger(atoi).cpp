////
//// Created by wshwbluebird on 16/8/7.
////
//
//#include <iostream>
//using namespace std;
//
//
//class Solution {
//        public:
//        int myAtoi(string str) {
//            long long ans = 0;
//            bool flag;//judge wether it is positive
//            int i=0;
//            while(str[i]==' '){
//                i++;
//            }
//            if(str[i]=='\0')  return 0;
//            if(str[i]=='+')  {flag = true;i++;}
//            else if(str[i]=='-') {flag = false;i++;}
//            else if(str[i]>='0'&& str[i]<='9') flag =true;
//            else return 0;
//            cout<<flag<<endl;
//            while(str[i]!='\0'){
//                if(str[i]<'0'||str[i]>'9')  break;
//                int m = str[i++]-'0';
//
//                ans = ans * 10 + m;
//                if(!flag){
//                    long temp = -ans;
//                    if(temp<INT_MIN)  return INT_MIN;
//
//                }
//                else if(ans > INT_MAX)  return INT_MAX;
//
//            }
//            if(!flag) return -ans;
//            return ans;
//        }
//};
//int main(){
//
//    Solution s;
//    cout<<s.myAtoi("9223372036854775809")<<endl;
//
//
//    return 0;
//}