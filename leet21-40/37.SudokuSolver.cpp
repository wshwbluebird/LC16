////
//// Created by wshwbluebird on 16/8/11.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//
//    void solveSudoku(vector<vector<char>>& board) {
//        dfs(board,0);
//    }
//
//private:
//    bool checkboard(vector<vector<char>>& board,int x, int y , char k){
//        for (int i = 0; i < 9 ; ++i) {
//            if(board[i][y] == k ||  board[x][i] == k)  return false;
//        }
//
//        int row  =x/3;
//        int col = y/3;
//        for (int i = row * 3; i < row*3 +3; ++i) {
//            for (int j = col *3; j <col*3 +3 ; ++j) {
//                if(board[i][j]==k)  return 0;
//            }
//        }
//        return true;
//    }
//
//
//    bool dfs(vector<vector<char>>& board,int cur) {
//        if (cur == 81) return true;
//        int x = cur / 9;
//        int y = cur % 9;
//
//        if (board[x][y] != '.') return dfs(board, cur + 1);
//        for (char i = '1'; i <= '9'; ++i) {
//            if (checkboard(board, x, y, i)) {
//                board[x][y] = i;
//                if (dfs(board, cur + 1)) return true;
//            }
//        }
//        return false;
//    }
//};
//
//int main(){
//
//
//
//
//    return 0;
//}