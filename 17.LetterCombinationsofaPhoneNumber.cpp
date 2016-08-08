////
//// Created by wshwbluebird on 16/8/8.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//// 1A  but 比较慢
//
//class Solution {
//protected:
//public:
//    vector<char> butt[10] = {};
//    int len;
//    char buff[11];
//    vector<string> ans;
//    string l;
//    vector<string> letterCombinations(string digits) {
//        butt[2] = {'a','b','c'};
//        butt[3] = {'d','e','f'};
//        butt[4] = {'g','h','i'};
//        butt[5] = {'j','k','l'};
//        butt[6] = {'m','n','o'};
//        butt[7] = {'p','q','r','s'};
//        butt[8] = {'t','u','v'};
//        butt[9] = {'w','x','y','z'};
//
//        len = digits.length();
//        l = digits;
//        if(l!=0) dfs(0);
//        return ans;
//
//    }
//
//    void dfs(int cur){
//        if(cur==len){
//            ans.push_back(buff);
//            return ;
//        }
//        int num = l[cur]-'0';
//        for (int i = 0; i < butt[num].size(); ++i) {
//            buff[cur] = butt[num][i];
//            dfs(cur+1);
//        }
//    }
//};
//
//int main(){
//
//
//    return 0;
//}