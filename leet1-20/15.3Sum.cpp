////
//// Created by wshwbluebird on 16/8/8.
////
//#include <iostream>
//#include <vector>
//using namespace std;
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        sort(nums.begin(),nums.end());
//        //int r = nums.size()-1;
//        vector<vector<int> >  ans;
//        for(int i = 0 ; i<nums.size();i++){
//            while(i>0 && i<nums.size() && nums[i] == nums[i-1]) i++;
//             int j = i + 1;
//             int k = nums.size()-1;
//             while(j<k){
//                 int sum = nums[i] + nums[j] + nums[k];
//                 if(sum == 0){
//                     vector<int> t = { nums[i] , nums[j] ,nums[k]};
//                     ans.push_back(t);
//                     j++;
//                     k--;
//
//                     while(j<k && nums[j]==nums[j-1])   j++;
//                     while(j<k && nums[k]==nums[k+1])   k--;
//                 }
//                 else if(sum >0) {k--; while(j<k && nums[k]==nums[k+1])   k--;}
//                 else {j++;while(j<k && nums[j]==nums[j-1])   j++; }
//             }
//
//
//
//        }
//        return ans;
//
//    }
//};
//
//int main(){
//
//    vector<int>  f={-4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6};
//    Solution s;
//    s.threeSum(f);
//
//
//    return 0;
//}