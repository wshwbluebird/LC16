////
//// Created by wshwbluebird on 16/8/9.
////
//
///**
// * Definition for singly-linked list.
// */
//#include <iostream>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//  };
//
//class Solution {
//public:
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
//    ListNode * t1 = new ListNode(0);
//    ListNode * t2 = NULL;
//    Solution s;
//    ListNode *r = s.mergeTwoLists(t1,t2);
//    while(r!=NULL){
//        cout<<r->val<<endl;
//        r = r->next;
//    }
//
//
//
//
//    return 0;
//}