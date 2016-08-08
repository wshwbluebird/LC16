////
//// Created by wshwbluebird on 16/8/8.
////
//#include <iostream>
////打表法
//using namespace std;
//
//class Solution {
//public:
//    string intToRoman(int num) {
//        static const string M[] ={"","M","MM","MMM"};
//        static const string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
//        static const string X[] = {"","X","XX","XXX","LX","L","LX","LXX","LXX","XC"};
//        static const string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
//        return M[num/1000]+C[(num%1000)/100]+X[(num%100)/10]+I[num%10];
//    }
//};
//
//
//int main(){
//   Solution s;
//    cout<<s.intToRoman(3999)<<endl;
//
//    return 0;
//}