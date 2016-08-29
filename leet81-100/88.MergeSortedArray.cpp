////
//// Created by wshwbluebird on 16/8/29.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        vector<int> temp = nums1;
//        int p1 = 0;
//        int p2 = 0;
//        for (int i = 0; i < m+n; ++i) {
//            if(p2>=n ||(p1<m && temp[p1]<nums2[p2]))  nums1[i] = temp[p1++];
//            else nums1[i] = nums2[p2++];
//        }
//
//    }
//};
//
//int main(){
//
//
//    return 0;
//}