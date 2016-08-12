////
//// Created by wshwbluebird on 16/8/12.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums) {
//        if(nums.size()<0)  return 1;;
//        for (int i = 0; i < nums.size() ; ++i) {
//            if(nums[i]>0 && nums[i]<=nums.size()&& nums[i]!=nums[nums[i]-1] && nums[i]!=i+1)
//            {
//                swap(nums[i],nums[nums[i]-1]);
//                i--;
//            }
//        }
//        int j;
//        for (j = 0; j < nums.size(); ++j) {
//            if(nums[j]!=j+1) return j+1;
//        }
//        return j+1;
//    }
//};
//
//int main(){
//  vector<int > num = {0,1,2};
//    Solution s;
//    cout<<s.firstMissingPositive(num)<<endl;
//
//
//    return 0;
//}