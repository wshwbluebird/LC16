////
//// Created by wshwbluebird on 16/8/9.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
////第一个是我自己写的超时
//
////
////class Solution {
////public:
////    int removeDuplicates(vector<int>& nums) {
////        int ans = 0;
////        int len = nums.size();
////        for (int i = 1; i < len; ++i) {
////            if(nums[i]==nums[i-1]) {
////                ans++;
////                for (int j = i; j <nums.size()-1 ; ++j) {
////                    nums[j] = nums[j+1];
////                }
////                len--;
////                i--;
////            }
////        }
////        return nums.size()-ans;
////    }
////};
//
////下面这个是我看了大神的代码之后
//
//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int  cnt = 0;
//        for (int i = 1; i <nums.size() ; ++i) {
//            if(nums[i] == nums[i-1] )  cnt++;
//            else nums[i-cnt] = nums[i];
//        }
//        return nums.size()-cnt;
//    }
//};
//
//int main(){
//
//    vector<int> num ={1,1,2};
//    Solution s;
//    //cout<<1<<endl;
//    cout<<s.removeDuplicates(num)<<endl;
//    for (int i = 0; i < s.removeDuplicates(num); ++i) {
//        cout<<num[i]<<endl;
//    }
//
//
//    return 0;
//}