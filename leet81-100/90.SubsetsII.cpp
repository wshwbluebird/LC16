////
//// Created by wshwbluebird on 16/8/29.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//
//
//class Solution {
//public:
//    vector<vector<int>> ans;
//    vector<int> temp;
//    map<vector<int>,bool> map1;
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        cout<<"sdfs"<<endl;
//        sort(nums.begin(),nums.end());
//        cout<<nums.size()<<endl;
//        dfs(0,nums,nums.size());
//        return ans;
//    }
//
//    void dfs(int cur, vector<int> &nums,int n){
//        if(cur==n){
//            if(map1.find(temp)==map1.end()) {
//                ans.push_back(temp);
//                map1[temp]==true;
//
//            }
//            return ;
//        }
//
//        dfs(cur + 1, nums, n);
//        temp.push_back(nums[cur]);
//        dfs(cur + 1, nums, n);
//        temp.pop_back();
//        return ;
//
//
//    }
//};
//
////网上最好的代码
//class Solution {
//public:
//    vector<vector<int> > subsetsWithDup(vector<int> &S) {
//        // Start typing your C/C++ solution below
//        // DO NOT write int main() function
//        vector<int> path;
//        vector<vector<int> > result;
//
//        sort(S.begin(), S.end());
//        sub(S, 0, path, result);
//        return result;
//    }
//
//    void sub(vector<int> &s, int begin, vector<int> &path, vector<vector<int> > &result) {
//        result.push_back(path);
//
//        for (int i = begin; i < s.size(); ++i) {
//            if (i != begin && s[i] == s[i - 1]) continue;
//
//            path.push_back(s[i]);
//            sub(s, i + 1, path, result);
//            path.pop_back();
//        }
//    }
//};
//int main(){
//    vector<vector<int>> ans ;
//    Solution s;
//    vector<int> p = {1,1,2,2,1};
//    ans= s.subsetsWithDup(p);
//
//    for (int i = 0; i <ans.size() ; ++i) {
//        for (int j = 0; j < ans[i].size(); ++j) {
//            cout<<ans[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//
//    return 0;
//}