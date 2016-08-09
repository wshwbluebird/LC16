////
//// Created by wshwbluebird on 16/8/9.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
////学习了 迭代器   用于 找到vector 中的 一项  并非 按顺序  按着进站的顺序
// struct ListNode {
//         int val;
//         ListNode *next;
//         ListNode(int x) : val(x), next(NULL) {}
//    };
//
//class Solution {
//public:
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        vector<ListNode*>::iterator begin = lists.begin(),end = lists.end();
//        if(begin == end ) return NULL;
//        if(begin == end -1)  return *begin;
//
//        vector<ListNode*> :: iterator middle = begin + (end - begin)/2;
//        vector<ListNode*> list1(begin,middle),list2(middle+1,end);
//        ListNode *left = mergeKLists(list1);
//        ListNode *right = mergeKLists(list2);
//
//        return mergeTwoLists(left,right);
//    }
//
//private:
//    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//        ListNode *t1 = l1;
//        ListNode *t2 = l2;
//        ListNode ans (0);
//        ListNode *t = &ans;
//        while(t1!=NULL||t2!=NULL){
//            if(t1==NULL){
//                t->next = new ListNode((t2->val));
//                t = t->next;
//                t2=t2->next;
//            } else if(t2==NULL){
//                t->next = new ListNode(t1->val);
//                t = t->next;
//                t1 = t1->next;
//            }else if(t1->val < t2->val){
//                t->next = new ListNode(t1->val);
//                t = t->next;
//                t1 = t1->next;
//            }else {
//                t->next = new ListNode((t2->val));
//                t = t->next;
//                t2=t2->next;
//            }
//
//        }
//        return ans.next;
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