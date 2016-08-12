////
//// Created by wshwbluebird on 16/8/12.
////
//
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//class Solution {
//public:
//    int trap(vector<int>& height) {
//        if(height.size()<=2)  return 0;
//        int  highest = 0;
//        for (int i = 0 ; i <height.size() ; ++i) {
//            if(height[i]>height[highest])  highest =i;
//        }
//        //cout<<highest<<endl;
//        int prev =-1;
//        int ans = 0;
//        for (int i = 0; i < highest ; ++i) {
//            if(prev>height[i])  ans += prev-height[i];
//            else prev = height[i];
//        }
//        int post = -1;
//        for (int j = height.size()-1; j >highest ; --j) {
//            if(post > height[j]) ans +=  post - height[j];
//            else post = height[j];
//        }
//
//        return ans ;
//
//
//    }
//};
//
//int main(){
//
//    vector<int> num = {5,4,1,2};
//    Solution s;
//    cout<<s.trap(num)<<endl;
//
//
//    return 0;
//}