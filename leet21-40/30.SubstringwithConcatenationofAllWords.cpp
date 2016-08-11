////
//// Created by wshwbluebird on 16/8/9.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//
//using namespace std;
//
//
//class Solution {
//public:
//    vector<int> findSubstring(string s, vector<string>& words) {
//        vector<int> ans;
//        if(words.empty()) return ans;
//        map<string,int> table;
//        for(auto str:words) table[str]++;
//        int len = words[0].length();
//        int totalen = len * words.size();
//        //cout<<totalen<<endl;
//        //cout<<"here"<<endl;
//        int i = 0;
//        while(i<s.length(
//
//        ) - totalen + 1){
//            //cout<<i<<endl;
//            int j = i;
//            map<string,int > temptable (table);
//            int count = 0;
//            while(j<i+totalen){
//                string temp = s.substr(j,len);
//                //cout<<temp<<endl;
//                if(temptable.find(temp)==temptable.end() || temptable[temp]==0){
//                    i++;
//                    break;
//                }
//                temptable[temp]--;
//                count++;
//                j = j+len;
//                if(count == words.size()){
//                    ans.push_back(i);
//                    i++;
//                    //cout<<"?"<<endl;
//                    break;
//                }
//
//            }
//        }
//        return ans;
//    }
//};
//
//int main(){
//    Solution s;
//    vector<string> ss ={"er","tr"};
//    vector<int> ans = s.findSubstring("ddertrhhtrerff",ss);
//    cout<<ans.size()<<endl;
//    for (int i = 0; i <ans.size() ; ++i) {
//        cout<<ans[i]<<endl;
//    }
//
//
//
//    return 0;
//}