////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//
//using namespace std;
//
//class Solution {
//public:
//    string getPermutation(int n, int k) {
//        int num[10];
//        string ans (n,'1');
//        int hash[10];
//        memset(hash,0, sizeof(hash));
//        num[0] = 1;
//        for (int i = 1; i <10 ; ++i) {
//            num[i] = num[i-1] *i;
//        }
//        for (int i = 0; i < n ; ++i) {
//            while(k-num[n-1-i] >0){
//                k = k-num[n-1-i];
//                while(hash[ans[i]-'0']) ans[i]++;
//                ans[i]++;
//            }
//            while(hash[ans[i]-'0']) ans[i]++;
//            hash[ans[i]-'0'] = 1;
//        }
//          return ans;
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.getPermutation(4,2)<<endl;
//
//
//    return 0;
//}