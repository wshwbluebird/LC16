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
//class Solution {
//public:
//    int maximalRectangle(vector<vector<char>>& matrix) {
//        int row = matrix.size();
//        if(row==0) return 0;
//        int col = matrix[0].size();
//        vector<vector<int>> height (row,vector<int>(col));
//        for (int j = 0; j < col; j++)
//            height[0][j] = matrix[0][j] - '0';
//        for (int i = 1; i < row; ++i) {
//            for (int j = 0; j < col ; ++j) {
//                height[i][j] = matrix[i][j]=='0'?0:(height[i-1][j]+1);
//            }
//        }
//        int ans = 0;
//        for (int i = 0; i < row ; ++i) {
//            ans = max(ans,largestRectangleArea(height[i]));
//        }
//        return ans;
//
//
//    }
//
//private:
//        int largestRectangleArea(vector<int>& heights) {
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
//
//int main(){
//
//
//    return 0;
//}