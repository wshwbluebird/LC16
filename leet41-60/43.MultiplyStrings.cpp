////
//// Created by wshwbluebird on 16/8/12.
////
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "" || num2 == "") return string();
//        if (num1 == "0" || num2 == "0") return "0";
//
//        reverse(num1.begin(), num1.end());
//        reverse(num2.begin(), num2.end());
//
//        int len = num2.size();
//        string ans = "";
//        int ansnum[1000];
//        int pos = 0;
//        int ml = 0;
//        memset(ansnum, 0, sizeof(ansnum));
//        while (pos != len) {
//            for (int i = 0; i < num1.size(); ++i) {
//                ansnum[pos + i] += (num1[i] - '0') * (num2[pos] - '0');
//                ml = pos+i;
//                //cout<<pos<<"    "<<i<<"    "<<ansnum[pos+i]<<endl;
//            }
//            pos++;
//        }
//        int c = 0;
//        for (int i = 0; i <= ml || c != 0; ++i) {
//            //cout<<i<<"    "<<ansnum[i]<<endl;
//            int temp = ansnum[i] + c;
//            c = temp / 10;
//            //cout<<char(temp%10+'0')<<endl;
//            ans = char((temp % 10) + '0') + ans;
//        }
//        return ans;
//    }
//
//};
//
//int main(){
//
//    Solution s;
//    cout<<s.multiply("121","31")<<endl;
//
//    return 0;
//}