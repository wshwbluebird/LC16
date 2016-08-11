////
//// Created by wshwbluebird on 16/8/10.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
////detail if eft == middle
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        if(nums.size()==0) return -1;
//        return search1(nums,0,nums.size()-1,target);
//    }
//
//private:
//    int search1(vector<int>& nums, int left, int right ,int target){
//        //cout<<right<<endl;
//        if(left>right)  return -1;
//        if(nums[left]< nums[right])  return binarysearch2(nums,left,right,target);
//        if(left==right)  return nums[left]==target?left:-1;
//        int middle = left + (right-left)/2;
//        if(nums[middle] == target )  return middle;
//        if(target > nums[middle]){
//            //cout<<right<<endl;
//            if(nums[right]==target)  return right;
//            if(nums[right]>nums[middle]){
//                if(target > nums[right])  return search1(nums,left,middle-1,target);
//                else return binarysearch2(nums,middle+1,right-1,target);
//            }
//            else{
//                return search1(nums,middle+1,right-1,target);
//            }
//        }else{
//            if(nums[left]==target)  return left;
//            if(nums[left] <= nums[middle]){
//                if(target<nums[left])   return search1(nums,middle+1,right,target);
//                else return binarysearch2(nums,left+1,middle-1,target);
//            }else{
//                return search1(nums,left+1,middle-1,target);
//            }
//        }
//    }
//
//
//    int binarysearch2(vector<int>& nums, int left, int right ,int target){
//        //cout<<left<<" : "<<right<<endl;
//        if(left>right)  return -1;
//        if(left==right)  return nums[left]==target?left:-1;
//
//        int middle = left + (right-left)/2;
//        //cout<<"middle: "<<middle<<endl;
//        if(nums[middle]==target) return middle;
//        if(nums[middle]> target)  return binarysearch2(nums,left,middle-1,target);
//        else return binarysearch2(nums,middle+1,right,target);
//    }
//};
//
//
//int main(){
//   vector<int> num ={3,5,1};
//    Solution s;
//    cout<<s.search(num,1)<<endl;
//
//
//
//    return 0;
//}