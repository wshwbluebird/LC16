////
//// Created by wshwbluebird on 16/8/10.
////
//
//#include<iostream>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//
//        return binarysearch1(nums,0,nums.size()-1,target);
//
//    }
//
//private:
//    int binarysearch1(vector<int>& nums, int left ,int right, int target){
//        if(left>right)  return left;
//        if(left==right){
//            if(target > nums[left])  return left +1;
//            else return left;
//        }
//
//        int middle = left + (right - left)/2;
//        cout<<"middle: "<<nums[middle]<<endl;
//        if(nums[middle]==target) return middle;
//        if(target>nums[middle])  return binarysearch1(nums,middle+1,right,target);
//        else return binarysearch1(nums,left,middle-1,target);
//    }
//
//};
//
//
//int main(){
//
//    vector<int> an ={1,3,5,8,9};
//    Solution s;
//    cout<<s.searchInsert(an,4)<<endl;
//
//
//
//    return 0;
//}