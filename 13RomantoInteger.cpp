////
//// Created by wshwbluebird on 16/8/8.
////
//#include <iostream>
//#include <map>
//using namespace std;
//class Solution {
//public:
//    int romanToInt(string s) {
//        const char *str = s.c_str();
//        int num = 0;
//        map<char,int>  table = {{'M',1000},{'D',500},{'C',100},{'L',50},{'X',10},{'V',5},{'I',1}};
//        for (int i = 0; i < s.length() ; ++i) {
//            if(i!=s.length()-1 && table[*(str+i)] < table[*(str+i+1)])  num = num - table[*(str+i)];
//            else num = num + table[*(str+i)];
//        }
//        return num;
//    }
//};
//
//int main(){
//    Solution s;
//    cout<<s.romanToInt("MMMCMXCIX");
//    return 0;
//}