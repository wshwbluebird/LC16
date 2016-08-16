////
//// Created by wshwbluebird on 16/8/16.
////
//
//#include<iostream>
//#include <vector>
//#include <unordered_map>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string,int> ma;
//        vector<vector<string>> ans;
//        for (int i = 0; i < strs.size(); ++i) {
//            string temp = strs[i];
//            sort(temp.begin(),temp.end());
//
//            if(ma.count(temp)){
//                int t = ma[temp];
//                ans[t].push_back(strs[i]);
//            }else{
//                vector<string> tt (1,strs[i]);
//                ans.push_back(tt);
//                ma[temp] = ans.size()-1;
//            }
//
//        }
//    }
//};
//
//int main(){
//
//
//
//    return 0;
//}