////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<int> plusOne(vector<int>& digits) {
//        vector<int> ans;
//        reverse(digits.begin(),digits.end());
//        int c=1;
//        ans = digits;
//        for (int i = 0; i <digits.size() ; ++i) {
//            if(c==0) break;
//            if(digits[i]==9){
//                ans[i] = 0;
//                c=1;
//            }else {
//                c=0;
//                ans[i]++;
//            }
//        }
//        if(c==1)  ans.push_back(1);
//        reverse(ans.begin(),ans.end());
//        //cout<<endl;
//        return ans;
//    }
//};
//
//
//int main(){
//    vector<int> pp ={9,9,9,9};
//    Solution s;
//    pp = s.plusOne(pp);
//    for (int i = 0; i < pp.size(); ++i) {
//        cout<<pp[i];
//    }
//
//    return 0;
//}