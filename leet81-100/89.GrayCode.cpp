////
//// Created by wshwbluebird on 16/8/29.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<int> grayCode(int n) {
//        if(n==0)  {
//            vector<int> ans;
//            ans.push_back(0);
//            return ans;
//        }
//
//        vector<int> prev_ans = grayCode(n-1);
//        vector<int> curr_ans (prev_ans);
//
//        for (int i = prev_ans.size()-1; i >= 0 ; i--) {
//            curr_ans.push_back((1<<(n-1))+prev_ans[i]);
//        }
//        return curr_ans;
//    }
//};
//
//int main(){
//
//    return 0;
//}