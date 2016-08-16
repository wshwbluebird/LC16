////
//// Created by wshwbluebird on 16/8/16.
////
//#include <string>
//#include <iostream>
//#include <vector>
//using namespace std;
//TLE
//class Solution {
//public:
//    bool isMatch(string s, string p) {
//        //cout<<s<<"     "<<p<<endl;
//        if(p=="") return s=="";
//        if(s=="")  return ((p[0]=='*')&& ((p.length()==1) || isMatch(s,p.substr(1))));
//        if(p[0]=='?')  return isMatch(s.substr(1),p.substr(1));
//        if(p[0]==s[0])  return isMatch(s.substr(1),p.substr(1));
//        if(p[0]=='*')  {
//            if(isMatch(s.substr(1),p)) return true;
//            return  isMatch(s,p.substr(1));
//        }
//        return false;
//    }
//};
//
//
////class Solution {
////public:
////    bool isMatch(string s, string t) {
////        int m = s.size();
////        int n = t.size();
////        vector<vector<bool>> D(m+1,vector<bool>(n+1,false));
////        D[0][0] = true;
////        for(int j=1;j<=n; j++){
////            D[0][j] = D[0][j-1] && t[j-1]=='*';
////            if(!D[0][j]) break;
////        }
////
////        for(int j=1; j<=n; j++){
////            for(int i=1; i<=m; i++){
////                if(t[j-1]=='*'){
////                    D[i][j] = D[i-1][j-1] || D[i-1][j] || D[i][j-1];
////                }
////                else{
////                    D[i][j] = D[i-1][j-1] &&(s[i-1] == t[j-1] || t[j-1]=='?');
////                }
////                if(!D[i][j]) break;
////            }
////        }
////    }
////};
//
//int main(){
//    Solution s;
//    cout<<s.isMatch("ho","ho**")<<endl;
//
//    return 0;
//}