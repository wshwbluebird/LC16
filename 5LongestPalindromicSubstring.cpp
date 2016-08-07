//
// Created by wshwbluebird on 16/8/7.
//超时了!!!!!
//第二种 方法  过了 但是还是太慢!!!!
#include <iostream>
using namespace std;
//char buff[1001];
//int mount;
//void isPalindromic(string s, int a, int b){
//    int ta= a;
//    int tb= b;
//    while(ta<tb){
//        if(s[ta++]!=s[tb--]) return;
//    }
//    if(b-a+1>mount) {
//        mount = b-a+1;
//        int j = 0;
//        for(int i=a;i<=b;i++){
//            buff[j++] = s[i];
//        }
//    }
//
//}
//string longestPalindrome(string s) {
//    mount = 0;
//    for(int i = 0;i<s.length();i++){
//        for(int j = 0 ; j<=i-mount;j++)  isPalindromic(s, j, i);
//    }
//    //isPalindromic(s,0,1);
//    return buff;
//}

class Solution {
public:
    char buff[1001];
    int mount;
    void isPalindromic(string s, int middle){
        int ta = middle;
        int tb = middle;
        while(ta>=0 && tb< s.length() && s[ta]==s[tb]){
            ta--;
            tb++;
        }
        ta++;
        tb--;
        cout<<"ta: "<<ta<<endl;
        cout<<"tb: "<<tb<<endl;
        if(tb-ta+1>mount) {
            mount = tb-ta+1;
            int j = 0;
            for(int i=ta;i<=tb;i++){
                buff[j++] = s[i];
            }
        }

        ta = middle;
        tb = middle+1;
        while(ta>=0 && tb< s.length() && s[ta]==s[tb]){
            ta--;
            tb++;
        }
        ta++;
        tb--;
        //cout<<"ta: "<<ta<<endl;
        //cout<<"tb: "<<tb<<endl;
        if(tb-ta+1>mount) {
            mount = tb-ta+1;
            int j = 0;
            for(int i=ta;i<=tb;i++){
                buff[j++] = s[i];
            }
        }



    }
    string longestPalindrome(string s) {
        mount = 0;
        for(int i = 0;i<s.length();i++){
            isPalindromic( s, i);
        }
        return buff;
    }
};
int main(){
    Solution s;
    cout<<s.longestPalindrome("bbcaaaacca")<<endl;

    return 0;
}