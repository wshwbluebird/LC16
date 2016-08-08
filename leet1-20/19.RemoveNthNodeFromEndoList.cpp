////
//// Created by wshwbluebird on 16/8/8.
////
//// 1A  但是 太慢了!!!! 排名倒数!!!
//
// // Definition for singly-linked list.
//#include <iostream>
//using namespace std;
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        int i = 1;
//        ListNode * t = head;
//        while(t->next!=NULL){
//            i++;
//            t =t->next;
//        }
//        n = i-n;
//        i=0;
//        if(n==0)  return head->next;
//         t = head;
//        while(i!=n-1){
//            t = t->next;
//            i++;
//        }
//        t->next = t->next->next;
//        return head;
//    }
//};
//
//int main(){
//    ListNode *p = new ListNode(0);
//    ListNode *t = p;
//    for (int i =1 ; i < 6; ++i) {
//        ListNode *pt = new ListNode(i);
//        t->next =pt;
//        t =t->next;
//    }
//    Solution s;
//    p = s.removeNthFromEnd(p,2);
//    t = p;
//    while(t!=NULL){
//        cout<<t->val<<endl;
//        t=t->next;
//    }
//
//
//
//    return 0;
//}