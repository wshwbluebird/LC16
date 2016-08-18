////
//// Created by wshwbluebird on 16/8/18.
////
//
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//struct Interval {
//    int start;
//    int end;
//    Interval() : start(0), end(0) {}
//    Interval(int s, int e) : start(s), end(e) {}
//};
//
//class Solution {
//public:
//    static bool cmp(Interval v1, Interval v2)
//    {
//        if(v1.start < v2.start)
//            return true;
//        else if(v1.start > v2.start)
//            return false;
//        else
//            return v1.end < v2.end;
//    }
//    vector<Interval> merge(vector<Interval>& intervals) {
//        vector<Interval> ans;
//        if(intervals.size()==0) return ans;
//        sort(intervals.begin(),intervals.end(),cmp);
//        int left = intervals[0].start;
//        int right = intervals[0].end;
//        for (int i = 1; i <intervals.size() ; ++i) {
//            if(intervals[i].start <= right){
//                if(intervals[i].end > right) right = intervals[i].end;
//            }else{
//                ans.push_back(Interval(left,right));
//                left = intervals[i].start;
//                right = intervals[i].end;
//            }
//        }
//        ans.push_back(Interval(left,right));
//        return ans;
//
//    }
//};
//
//int main(){
//    vector<Interval> ine ;
//    Interval a = Interval(4,7);
//    ine.push_back(a);
//
//     a = Interval(3,5);
//    ine.push_back(a);
//
//    a = Interval(6,8);
//    ine.push_back(a);
//
//    a = Interval(9,41);
//    ine.push_back(a);
//    Solution s;
//    ine = s.merge(ine);
//    for (auto i : ine){
//        cout<<i.start<<" :  "<<i.end<<endl;
//    }
//
//    return 0;
//}
//
////