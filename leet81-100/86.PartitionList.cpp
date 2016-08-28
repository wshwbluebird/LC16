////
//// Created by wshwbluebird on 16/8/28.
////
//
//#include<iostream>
//using namespace std;
//
//
// struct ListNode {
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//  };
//
//class Solution {
//public:
//    ListNode* partition(ListNode* head, int x) {
//        ListNode newhead(0);
//        newhead.next = head;
//        ListNode *small = &newhead;
//        ListNode *prev = &newhead;
//
//        if(head==NULL) return head;
//        if(head->val<x){
//            small = small->next;
//            head = head->next;
//            prev = prev->next;
//        }else{
//            head = head->next;
//            prev = prev->next;
//        }
//
//        while(head!=NULL){
//            if(head->val < x){
//                if(small == prev){
//                    small = small->next;
//                    head = head->next;
//                    prev = prev->next;
//                }else {
//                    prev->next = head->next;
//                    ListNode *nex = head->next;
//                    ListNode *temp = small->next;
//                    small->next = head;
//
//                    head->next = temp;
//                    small = head;
//                    head = nex;
//                }
//            }else{
//                prev = prev->next;
//                head = head->next;
//            }
//        }
//        return newhead.next;
//    }
//};
//
//int main(){
//    ListNode *p = new ListNode(1);
//    ListNode *pp = new ListNode(2);
//    ListNode *ppp = new ListNode(3);
//    p->next = pp;
//    pp->next = ppp;
//    Solution s;
//    p = s.partition(p,4);
//    while(p){
//        cout<<p->val<<endl;
//        p = p->next;
//    }
//
//
//
//    return 0;
//}