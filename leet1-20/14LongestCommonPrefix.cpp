////
//// Created by wshwbluebird on 16/8/8.
////
////太慢   我写的 代码好烂
//#include <iostream>
//#include <vector>
//using namespace std;
//class Solution{
//public:
//string longestCommonPrefix(vector<string>& strs) {
//    if(strs.size()==1)  return strs[0];
//    if(strs.size()==0)  return "";
//    int points = 0;
//    bool flag = true;
//    string ans;
//    while(flag){
//        if(strs[0][points]=='\0')  break;
//        char temp = strs[0][points];
//        for(int i = 1 ; i < strs.size() ; i++){
//            if(strs[i][points]=='\0' ||temp != strs[i][points]){
//                flag= false;
//                break;
//            }
//        }
//        if(flag) {
//            ans = ans + temp;
//            points++;
//        }
//    }
//    return ans;
//}
//};
//
//int main(){
//    Solution s;
//    vector<string> tt = {"3","33"};
//    cout<<s.longestCommonPrefix(tt)<<endl;
//
//
//    return 0;
//}