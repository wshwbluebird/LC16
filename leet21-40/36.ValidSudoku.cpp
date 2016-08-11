//
// Created by wshwbluebird on 16/8/10.
//

#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9 ; ++i) {
            set<char> temp;
            temp.clear();
            for (int j = 0; j < 9 ; ++j) {
                if(board[i][j] != '.' ) {
                    if (temp.find(board[i][j]) == temp.end()) temp.insert(board[i][j]);
                    else return false;
                }
            }
        }

        for (int i = 0; i < 9 ; ++i) {
            set<char> temp;
            temp.clear();
            for (int j = 0; j < 9 ; ++j) {
                if(board[j][i] != '.' ) {
                    if (temp.find(board[j][i]) == temp.end()) temp.insert(board[j][i]);
                    else return false;
                }
            }
        }

        for (int i = 0; i < 3 ; ++i) {
            for (int j = 0; j < 3; ++j) {
                set<char> temp;
                temp.clear();
                for (int k = i*3; k < 1*3+3 ; ++k) {
                    for (int l = j*3; l < j*3+3 ; ++l) {
                        if(board[k][l] != '.' ) {
                            if (temp.find(board[k][l]) == temp.end()) temp.insert(board[k][l]);
                            else return false;
                        }
                    }
                }
            }
        }
        return true;


    }
};

int main(){




    return 0;
}