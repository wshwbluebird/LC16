////
//// Created by wshwbluebird on 16/8/16.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    int jump(vector<int>& nums) {
//        int step = 0;
//        int curreach = 0;
//        int maxreach = 0;
//        for (int i = 0; i < nums.size() ; ++i) {
//            if(i > curreach){
//                step++;
//                curreach = maxreach;
//            }
//            maxreach = max(maxreach,i+nums[i]);
//        }
//        return step;
//    }
//};
//
//int main(){
//    vector<int> nums = {2,3,1,1,4};
//    Solution s;
//    cout<<s.jump(nums)<<endl;
//
//
//
//    return 0;
//}
//
//
//
