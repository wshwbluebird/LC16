////
//// Created by wshwbluebird on 16/8/19.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//    int hash[1000];
//
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int count = 0;
//        for (int i = 0; i < nums.size(); ++i) {
//            if(hash[nums[i]]>=2) count++;
//            else{
//                hash[nums[i]]++;
//                swap(nums[i],nums[i-count]);
//            }
//        }
//        return nums.size()-count;
//    }
//};
//
//int main(){
//
//
//    return 0;
//}