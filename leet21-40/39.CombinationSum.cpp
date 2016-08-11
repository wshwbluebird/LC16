////
//// Created by wshwbluebird on 16/8/11.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<int>> ans;
//    vector<int> buff;
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//            dfs(candidates,0,target);
//         return ans;
//    }
//
//private:
//    void dfs(vector<int>& candidates,int cur  ,int target){
//        if(cur==target){ans.push_back(buff); return;}
//        for (int i = 0; i < candidates.size(); ++i) {
//            if(!buff.empty() && buff[buff.size()-1]>candidates[i]) continue;
//            if(cur+candidates[i]<=target){
//                buff.push_back(candidates[i]);
//                dfs(candidates,cur+candidates[i],target);
//                buff.pop_back();
//            }
//        }
//    }
//};
//
//int main(){
//    vector<int> buff;
//    buff.push_back(1);
//
//
//    return 0;
//}