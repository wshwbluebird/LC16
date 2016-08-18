////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Solution {
//public:
//    vector<string> ans;
//    vector<string> fullJustify(vector<string>& words, int maxWidth) {
//        if(words[0].size()==0||maxWidth==0){
//            string a="";
//            a.append(maxWidth,' ');
//            ans.push_back(a);
//            return ans;
//        };
//        if(maxWidth==1) return words;
//        int curwidth=words[0].length();
//        int cnt = 1;
//        int curbengin = 0;
//        for (int i = 1; i < words.size(); ++i) {
//            //cout<<words[i]<<endl;
//            if(curwidth+cnt+words[i].length() <= maxWidth) {
//                cnt++;
//                curwidth = curwidth+words[i].length();
//            }else{
//                store(curbengin,i-1,cnt,maxWidth,words);
//                cnt=1;
//                curbengin = i;
//                curwidth = words[i].length();
//
//            }
//        }
//        string temp ="";
//        //cout<<"?" <<endl;
//        for (int i = curbengin; i <= words.size()-1  ; ++i) {
//            if(i!=curbengin) temp.append(" ");
//
//            temp.append(words[i]);
//        }
//        temp.append(maxWidth-temp.length(),' ');
//        ans.push_back(temp);
//        return ans;
//
//    }
//
//private:
//    void store(int curbegin, int curend,int cnt,int maxWidth,vector<string> words){
//        int sum = 0;
//        for (int i = curbegin; i <= curend ; ++i) {
//            sum += words[i].length();
//        }
//        int spa = maxWidth -sum;
//        string temp = "";
//        if(cnt==1){
//            temp.append(words[curbegin]);
//            temp.append(spa,' ');
//            ans.push_back(temp);
//            return ;
//        }else{
//            int each = spa/(cnt-1);
//            for (int i = curbegin; i < curend ; ++i) {
//                temp.append(words[i]);
//                int cur = each;
//                if(spa%(curend-i)!=0) cur = cur +1;
//                if(cur>spa) cur = spa;
//                temp.append(cur,' ');
//                spa = spa -cur;
//            }
//            temp.append(words[curend]);
//            ans.push_back(temp);
//            return ;
//        }
//
//    }
//};
//
//int main(){
//    vector<string> words ={"This", "is", "an", "example", "of", "text", "justification."};
//    //vector<string> words ={"a"};
//    Solution s;
//    words = s.fullJustify(words,16);
//    for (int i = 0; i < words.size() ; ++i) {
//        cout<<words[i]<<endl;
//    }
//
//
//    return 0;
//}