////
//// Created by wshwbluebird on 16/8/7.
////  1A
//#include <iostream>
//#include <string>
//
//using namespace std;
//class Solution {
//public:
//    string convert(string s, int numRows) {
//        if(numRows==1) return s;
//        char buff[numRows][s.length()+1];
//        char buf[s.length()+1];
//        int num[numRows];
//        int pp= 0;
//        memset(num,0,sizeof(num));
//        memset(buf,0,sizeof(buf));
//        int sp = 0;
//        int i = -1;
//        int changei = 1;
//        while(sp<s.length()){
//            if(i==0) changei = 1;
//            if(i==numRows-1)  changei =-1;
//            i = i + changei;
//            buff[i][num[i]++] = s[sp++];
//        }
//
//        for(int i = 0 ; i<numRows ; i++){
//            for(int j = 0 ; j< num[i]; j++){
//                buf[pp++] = buff[i][j];
//            }
//        }
//        return buf;
//
//    }
//};