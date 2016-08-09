////
//// Created by wshwbluebird on 16/8/9.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//class Solution {
//public:
//    vector<string> ans;
//    char buff[1000];
//    int lp;
//    int rp;
//    int num;
//    vector<string> generateParenthesis(int n) {
//        //buff = new char[n*2+1];
//        lp = 0;
//        rp = 0;
//        num = n;
//        dfs(0);
//        //delete(buff);
//        return  ans;
//    }
//
//    void dfs(int cur){
//         if(cur==2*num){
//             ans.push_back(buff);
//             return ;
//         }
//         if(lp<num){
//             lp++;
//             buff[cur] = '(';
//             dfs(cur+1);
//             lp--;
//         }
//        if(lp-rp>0){
//            rp++;
//            buff[cur] = ')';
//            dfs(cur+1);
//            rp--;
//        }
//    }
//};
//
//int main(){
//    Solution s ;
//    vector<string> ans = s.generateParenthesis(3);
//    cout<<ans.size()<<endl;
//
//    return  0;
//}