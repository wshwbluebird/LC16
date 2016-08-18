///**
// * Definition for an interval.
// * struct Interval {
// *     int start;
// *     int end;
// *     Interval() : start(0), end(0) {}
// *     Interval(int s, int e) : start(s), end(e) {}
// * };
// */
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
//    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
//        intervals.push_back(newInterval);
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
//    }
//};