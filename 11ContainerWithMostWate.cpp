////
//// Created by wshwbluebird on 16/8/8.
////
////双向指针   小贪心!!
//class Solution {
//public:
//    int maxArea(vector<int>& height) {
//        int l = 0;
//        int r = height.size()-1;
//        int ans = 0;
//        while(l<r){
//            ans = max(ans,(r-l) * min(height[r],height[l]));
//            if(height[l]<height[r])  l++;
//            else if(height[l]>height[r]) r--;
//            else {l++;r--;}
//        }
//        return ans;
//    }
//};