////
//// Created by wshwbluebird on 16/8/27.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    bool search(vector<int> &nums, int target) {
//        int left = 0;
//        int right = nums.size()-1;
//
//        while(left<=right){
//            int mid = left + (right-left)/2;
//            if(nums[mid] == target)  return true;
//            if(nums[left] < nums[mid]){
//                if(target >= nums[left] && target < nums[mid]) right = mid -1;
//                else left = mid + 1;
//            }else if(nums[left] > nums[mid]){
//                if(target >= nums[left] || target < nums[mid]) right = mid - 1;
//                else left = mid +1 ;
//            }
//            else left ++;
//        }
//
//        return false;
//    }
//};
//int main(){
//
//
//
//    return 0;
//}