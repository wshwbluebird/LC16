////
//// Created by wshwbluebird on 16/8/17.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
////my ans TLE shit!!!
////class Solution {
////public:
////    vector<vector<string>> ans;
////
////    vector<vector<string>> solveNQueens(int n) {
////        vector<vector<int>>ret(n,vector<int>(n));
////        vector<int>loc(n,-1);
////        //cout<<ret[n-1][n-1]<<endl;
////        dfs(0,ret,loc,n);
////        return ans;
////    }
////
////    void dfs(int cur,vector<vector<int>>ret,vector<int>loc,int n){
////        //cout<<cur<<endl;
////        //cout<<cur<<endl;
////        if(cur==n) {
////            convertans(ret,loc,n);
////            return ;
////        }
////
////        for (int i = 0; i < n; ++i) {
////            if(check(cur,cur,i,ret)){
////                //cout<<cur<<" : "<<i<<endl;
////                ret[cur][i] = 1;
////                loc[cur] = i;
////
////                dfs(cur+1,ret, loc ,n);
////                ret[cur][i] = 0;
////                //loc[cur] = -1;
////
////            }
////        }
////    }
////
////    bool check(int cur, int x, int y,vector<vector<int>>ret){
////        int len = ret.size();
////        int leftup = x-y;
////        int rightup = x+y;
////        for (int i = 0; i < cur ; ++i) {
////            if(ret[i][y])  return false;
////            if(rightup-i >= 0 && rightup-i <len  && ret[i][rightup-i])  return false;
////            if(i-leftup >= 0 && i-leftup< len  && ret[i][i-leftup]) return false;
////        }
////        return true;
////    }
////
////    void convertans(vector<vector<int>>ret,vector<int>loc,int n){
////
////        vector<string> st ;
////        for (int i = 0; i < n; ++i) {
////            string temp(n,'.');
////            temp[loc[i]] = 'Q';
////            st.push_back(temp);
////        }
////        ans.push_back(st);
////    }
////
////};
//
//
//class Solution {
//public:
//    vector<vector<string> > solveNQueens(int n) {
//        return convert(solve(n), n);
//    }
//    vector<vector<int> > solve(int n)
//    {
//        vector<vector<int> > ret;
//        vector<int> cur;
//        Helper(ret, cur, 0, n);
//        return ret;
//    }
//    void Helper(vector<vector<int> >& ret, vector<int> cur, int pos, int n)
//    {
//        if(pos == n)
//            ret.push_back(cur);
//        else
//        {
//            for(int i = 0; i < n; i ++)
//            {
//                cur.push_back(i);
//                if(check(cur))
//                    Helper(ret, cur, pos+1, n);
//                cur.pop_back();
//            }
//        }
//    }
//    bool check(vector<int> cur)
//    {
//        int size = cur.size();
//        int loc = cur[size-1];
//        for(int i = 0; i < size-1; i ++)
//        {
//            if(cur[i] == loc)
//                return false;
//            else if(abs(cur[i]-loc) == abs(i-size+1))
//                return false;
//        }
//        return true;
//    }
//    vector<vector<string> > convert(vector<vector<int> > ret, int n)
//    {
//        vector<vector<string> > retStr;
//        for(int i = 0; i < ret.size(); i ++)
//        {
//            vector<string> curStr;
//            for(int j = 0; j < n; j ++)
//            {
//                string loc(n, '.');
//                loc[ret[i][j]] = 'Q';
//                curStr.push_back(loc);
//            }
//            retStr.push_back(curStr);
//        }
//        return retStr;
//    }
//};
//
//using namespace std;
//
//
//int main(){
//
//    Solution s;
//    vector<vector<string>> ans = s.solveNQueens(4);
//    for (int i = 0; i <ans.size() ; ++i) {
//        for (int j = 0; j <ans[0].size() ; ++j) {
//            cout<<ans[i][j]<<endl;
//        }
//            cout<<endl;
//    }
//
//
//    return 0;
//}
