////
//// Created by wshwbluebird on 16/8/27.
////
//
//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//
//class Solution {
//public:
//    int largestRectangleArea(vector<int>& heights) {
//        int n= heights.size();
//        if(n==0)  return 0;
//        int ans = 0;
//        stack<int> asc;
//        for (int i = 0; i < n ; ++i) {
//            if(asc.empty() || asc.top() <= heights[i]) asc.push(heights[i]);
//            else {
//                int cnt =0;
//                while(!asc.empty() && asc.top() > heights[i]){
//                    cnt++;
//                    ans = max(ans,asc.top() * cnt);
//                    asc.pop();
//                }
//                while(cnt--){
//                    asc.push(heights[i]);
//                }
//                asc.push(heights[i]);
//            }
//        }
//
//        int count =  1;
//        while (!asc.empty()){
//            ans = max(ans,asc.top() * count);
//            count++;
//            asc.pop();
//        }
//        return ans;
//    }
//};
//
//int main(){
//    return 0;
//}