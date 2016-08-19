////
//// Created by wshwbluebird on 16/8/19.
////
//
//#include<iostream>
//#include <vector>
//
//using namespace std;
//// my ans  TLE;
////class Solution {
////public:
////    int hash[256];
////    int st[256];
////    string minWindow(string s, string t) {
////        if(t.length() > s.length())  return "";
////        memset(hash,0, sizeof(hash));
////        memset(st,0, sizeof(st));
////        int start = 0;
////        int end;
////        for (end= 0; end < t.length(); ++end) {
////            st[t[end]]++;
////            hash[s[end]]++;
////        }
////        end--;
////        int minlength = INT_MAX;
////        string ans = "";
////        while(end!=s.length()){
////            if(check(t)){
////                //cout<<"minl:  "<<minlength<<endl;
////                if(end - start +1< minlength){
////                    minlength = end - start+1;
////                    //cout<<start<<"    :   "<<end<<"    "<<s.substr(start,minlength)<<endl;
////                    ans = s.substr(start,minlength);
////                }
////                hash[s[start]]--;
////                start++;
////
////            }else{
////                end++;
////                hash[s[end]]++;
////            }
////        }
////        return ans;
////
////
////    }
////
////private:
////    bool check(string t){
////        for (int i = 0; i < t.length(); ++i) {
////            if(hash[t[i]]<st[t[i]])  return false;
////        }
////        return true;
////    }
////};
//
//
//
//class Solution {
//public:
//    int hash[256];
//    int st[256];
//    string minWindow(string s, string t) {
//        if(t.length() > s.length())  return "";
//        memset(hash,0, sizeof(hash));
//        memset(st,0, sizeof(st));
//        int start = 0;
//        int end;
//        int ma= 0;
//        int mb = 0;
//        for (end= 0; end < t.length(); ++end) {
//            st[t[end]]++;
//        }
//        end = 0;
//        hash[s[0]]++;
//        long count = t.length();
//
//        if(st[s[0]] >= hash[s[0]] ) count --;
//        int minlength = INT_MAX;
//        while(end!=s.length()) {
//            if(count==0){
//                while(hash[s[start]] > st[s[start]]){
//                    hash[s[start]]--;
//                    start++;
//                }
//                if(end-start+1 <minlength) {
//                    minlength = end -start +1;
//                    ma = start;
//                    //cout<<minlength<<endl;
//                }
//
//            }
//            end++;
//            hash[s[end]]++;
//            if(hash[s[end]] <= st[s[end]]) count--;
//
//        }
//        if(minlength == INT_MAX  )  return "";
//        else return s.substr(ma,minlength);
//
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.minWindow("bbaa","aba")<<endl;
//    //string ss = "asdd";
//   // cout<<"S:   "<<ss.substr(1,2);
//
//    return 0;
//}