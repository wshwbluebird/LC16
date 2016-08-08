////
//// Created by wshwbluebird on 16/8/8.
////
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//        int len = nums.size();
//        sort(nums.begin(),nums.end());
//        vector<vector<int>> ans;
//        for (int i = 0; i < len -3; ++i) {
//            while(i>0 && i< len -3 &&nums[i] == nums[i-1]) i++;
//            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3] >target ) break;
//            if(nums[i]+nums[len-1]+nums[len-2]+nums[len-3] < target) continue;
//            for (int j = i+1; j <len-2 ; ++j) {
//                while(j>i+1 && j <len-2 && nums[j]==nums[j-1])  j++;
//                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]  > target) break;
//                if(nums[i]+nums[j]+nums[len-1]+nums[len-2] < target) continue;
//                int l = j+1;
//                int r = len-1;
//                while(l<r){
//                    int sum = nums[i] + nums[j] + nums[l] + nums[r];
//                    if(sum == target){
//                        vector<int> temp = {nums[i] , nums[j] ,nums[l] , nums[r]};
//                        ans.push_back(temp);
//                        l++;
//                        while(l<r && nums[l]==nums[l-1])  l++;
//                        r--;
//                        while(l<r && nums[r]==nums[r+1])  r--;
//                    }
//                    else if(sum < target){
//                        l++;
//                        while(l<r && nums[l]==nums[l-1])  l++;
//                    }
//                    else {
//                        r--;
//                        while(l<r && nums[r]==nums[r+1])  r--;
//                    }
//                }
//
//            }
//        }
//    }
//};