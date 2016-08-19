////
//// Created by wshwbluebird on 16/8/19.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    int dx[4]={0,1,0,-1};
//    int dy[4]={1,0,-1,0};
//
//    bool exist(vector<vector<char>>& board, string word) {
//        vector<vector<int>> vis(board.size(),(vector<int>(board[0].size(),0)));
//        for (int i = 0; i < board.size(); ++i) {
//            for (int j = 0; j <board[i].size(); ++j) {
//                if(board[i][j]==word[0]){
//                    if(bfs(1, board,word,i,j,vis)) return true;
//                }
//            }
//        }
//        return false;
//    }
//
//private:
//    bool bfs(int cur,vector<vector<char>>& board, string word,int x,int y,vector<vector<int>> vis){
//        if(cur==word.length()) return true;
//        for (int i = 0; i < 4 ; ++i) {
//            int nx = x+dx[i];
//            int ny = y+dy[i];
//
//            if(nx>=0 && nx <board.size() && ny>=0 && ny < board[0].size() && !vis[nx][ny] && board[nx][ny] == word[cur]){
//                vis[nx][ny] = 1;
//                if(bfs(cur+1,board,word,nx,ny,vis)) return true;
//                vis[nx][ny] = 0;
//            }
//        }
//        return false;
//    }
//};
//
//
//int main(){
//
//
//    return 0;
//}