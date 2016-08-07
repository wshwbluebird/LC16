////
//// Created by wshwbluebird on 16/8/7.
////
//
//#include <iostream>
//#include <string.h>
//#include <vector>
//
//using namespace std;
//
//
//double findk(vector<int>& nums1,int begin1,int end1, vector<int>& nums2,int begin2, int end2 , int aim){
//    if(end1 -begin1> end2-begin2)  return findk(nums2,begin2,end2,nums1,begin1,end1,aim);
//    if(end1-begin1<=0)  return nums2[begin2+aim-1];
//    if(aim==1)  return min(nums1[begin1],nums2[begin2]);
//    int k1 = std::min(aim/2,end1);
//    int k2 = aim - k1;
//    if(nums1[begin1+k1-1]<nums2[begin2+k2-1])   return findk(nums1,begin1+k1,end1,nums2,begin2,begin2+k2,aim-k1);
//    else  return findk(nums1,begin1,begin1+k1,nums2,begin2+k2,end2,aim-k2);
//}
//
//double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//    long  l1 = nums1.size();
//    //return l1;
//    long  l2 = nums2.size();
//    //return l2;
//    int len = l1+l2;
//    if(len%2==1){
//        return findk(nums1,0,l1,nums2,0,l2,len/2+1);
//    }else{
//        return (findk(nums1,0,l1,nums2,0,l2,len/2+1)+findk(nums1,0,l1,nums2,0,l2,len/2))/2;
//    }
//
//}
//
//
//
//int main(){
//
//    vector<int>  v1 ={1,2,6,7,9};
//    vector<int>  v2 ={3,4,5};
//    cout<<findMedianSortedArrays(v1,v2)<<endl;
//
//
//    return 0;
//}