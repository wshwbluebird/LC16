////
//// Created by wshwbluebird on 16/8/8.
////
//
//#include<iostream>
//#include <vector>
//using namespace std;
//
//
//class Solution {
//public:
//    int threeSumClosest(vector<int>& nums, int target) {
//        sort(nums.begin(), nums.end());
//        int ans = nums[1] + nums[0]+ nums[2];
//        int val = abs(target -ans);
//        for (int i = 0; i < nums.size() ; ++i) {
//            if(i>0 && i<nums.size() && nums[i] == nums[i-1])  i++;
//            int j = i+1;
//            int k = nums.size()-1;
//            while(j<k){
//                int sum = nums[i] + nums[j] + nums [k];
//                if(sum ==  target)  return  sum;
//                if(sum < target){
//                    if(sum > target - val){
//                        ans = sum;
//                        val = target -ans;
//                    }
//                    j++;
//                    while(j<k && nums[j]==nums[j-1])  j++;
//                }
//                else {
//                    if(sum < target + val){
//                        ans = sum;
//                        val = sum - target;
//                    }
//                    k--;
//                    while(j<k && nums[k]==nums[k+1]) k--;
//                }
//            }
//        }
//
//          return ans;
//
//    }
//};
//int main(){
//    Solution s;
//    vector<int> v = {0,1,2};
//    cout<<s.threeSumClosest(v,0)<<endl;
//
//
//    return 0;
//}