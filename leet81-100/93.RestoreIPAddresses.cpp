////
//// Created by wshwbluebird on 16/8/31.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<string> ans;
//    vector<string> restoreIpAddresses(string s) {
//        dfs(0,4,"",s);
//        return ans;
//    }
//
//private:
//    void dfs(int start ,int left_seg, string cur ,string ori){
//        if(left_seg == 0){
//            ans.push_back(cur);
//            return;
//        }
//        for (int i = 1; i < 4 && start+i <= ori.length(); ++i) {
//            int left_cur = ori.length() - start - i;
//            if(left_seg-1 <= left_cur && (left_seg-1) *3 >= left_cur){
//                string temp = ori.substr(start,i);
//                if(temp.size()>1 && temp[0]=='0') continue;
//                if(stoi(temp) < 256){
//                    string next_cur =  temp;
//                    if(left_cur!=0) temp = temp +'.';
//                    dfs(start+i,left_seg-1,cur+temp,ori);
//                }
//
//            }
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