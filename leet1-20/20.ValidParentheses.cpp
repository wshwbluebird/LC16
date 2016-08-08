//
// Created by wshwbluebird on 16/8/8.
//

#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> para;
        for (int i = 0; i < s.length() ; ++i) {
            if(s[i] == '(' ||s[i] == '[' ||s[i] == '{' )  para.push(s[i]);
            else {
                if(para.empty()) return false;
                char t = para.top();
                if((t=='(' && s[i]==')') || (t=='[' && s[i]==']') ||  (t=='{' && s[i]=='}') )  para.pop();
                else  return false;
            }

        }
        return para.empty();
    }
};




int main(){




    return 0;
}