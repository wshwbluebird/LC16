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
//    vector<int>ans;
//    vector<int> searchRange(vector<int>& nums, int target) {
//        ans.clear();
//        binarysearch1(nums,0,nums.size()-1,target);
//        return ans;
//    }
//
//private:
//    void binarysearch1(vector<int>& nums, int left ,int right, int target){
//        //cout<<left<<" ; "<<right<<endl;
//        if(left>right) {ans.push_back(-1);ans.push_back(-1);return ;}
//        if(left==right) {
//            if(nums[left] ==  target)  makes(nums,left,target);
//            else {ans.push_back(-1);ans.push_back(-1);}
//
//            return ;
//        }
//        int middle = left + (right - left)/2;
//        cout<<nums[middle]<<endl;
//        if(nums[middle]==target) {makes(nums,middle,target);return ;}
//        if(target > nums[middle])  {binarysearch1(nums,middle+1,right,target);return ;}
//        else {binarysearch1(nums,left,middle-1,target);return;}
//
//    }
//    void makes(vector<int>& nums,int pos, int target){
//        int left = pos;
//        int right = pos;
//        while(left>0 && nums[left-1]==target ) left--;
//        while(right<nums.size()-1&&nums[right+1]==target) right++;
//        ans.push_back(left);
//        ans.push_back(right);
//    }
//};
//
//
//int main(){
//
//    vector<int> an ={1,2,2,2,2,2,2,2,8,8,9};
//    Solution s;
//    an =s.searchRange(an,8);
//    for (int i = 0; i < an.size(); ++i) {
//        cout<< an[i]<<endl;
//    }
//
//
//    return 0;
//}