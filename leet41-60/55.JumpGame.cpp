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
//    bool canJump(vector<int>& nums) {
//        int n = nums.size();
//        vector<int>cj(n,0);
//        int farreach = 0;
//        for (int i = 0; i < n; ++i) {
//            if(i>farreach) break;
//            else{
//                cj[i] = 1;
//                //cout<<i<<" : "<<farreach<<endl;
//                if(nums[i]+i > farreach)  farreach = nums[i]+i;
//            }
//        }
//
//        return cj[n-1];
//
//    }
//};
//
//int main(){
//    vector<int> can{2,5,0,0};
//    Solution s;
//    cout<< s.canJump(can)<<endl;
//
//
//    return 0;
//}