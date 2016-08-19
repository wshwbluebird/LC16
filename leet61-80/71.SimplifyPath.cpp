////
//// Created by wshwbluebird on 16/8/19.
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
//    string simplifyPath(string path) {
//        stack<string> st;
//        vector<string> ret = split(path);
//        for (int i = 0; i < ret.size() ; ++i) {
//            //cout<<ret[i]<<endl;
//            if (ret[i]== "..") {
//                //cout<<"yes"<<endl;
//                if (!st.empty()) st.pop();
//            }else if(ret[i]=="."){
//
//            }
//            else {
//                st.push(ret[i]);
//            }
//        }
//        string ans = "";
//        while(!st.empty()){
//            if(st.top()!="")
//                ans = '/'+ st.top() + ans;
//                st.pop();
//            }
//        if(ans=="") return "/";
//        return ans;
//
//    }
//
//private:
//    static bool isSlash(char c)
//    {
//        return (c == '/');
//    }
//    static bool notSlash(char c)
//    {
//        return !isSlash(c);
//    }
//    vector<string> split(string str){
//        vector<string> ret;
//        string::iterator it = str.begin();
//        while (it!=str.end()){
//            it = find_if(it,str.end(),notSlash);
//            string::iterator it2 = find_if(it,str.end(),isSlash);
//
//            string temp = string(it,it2);
//            //cout<<temp<<endl;
//            ret.push_back(temp);
//            it = it2;
//        }
//        return ret;
//    }
//};
//
//int main(){
//
//    Solution s;
//    cout<<s.simplifyPath("/.../")<<endl;
//
//    return 0;
//}