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
//    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
//        sort(candidates.begin(),candidates.end());
//        dfs(candidates,0,target,0);
//        return ans;
//    }
//
//private:
//    void dfs(vector<int>& candidates,int cur ,int target,int ind){
//        if(cur==target){ans.push_back(buff); return;}
//        for (int i = ind; i < candidates.size(); ++i) {
//            if(cur+candidates[i]<=target){
//                buff.push_back(candidates[i]);
//                dfs(candidates,cur+candidates[i],target,i+1);
//                buff.pop_back();
//                while(i+1<candidates.size() &&candidates[i]==candidates[i+1]) i++;
//            }
//        }
//    }
//};
//int main(){
//
//
//
//    return 0;
//}