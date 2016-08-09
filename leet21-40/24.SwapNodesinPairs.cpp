////
//// Created by wshwbluebird on 16/8/9.
////
//
//
//
//#include <iostream>
//using namespace std;
// // Definition for singly-linked list.
//  struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//    ListNode* swapPairs(ListNode* head) {
//          ListNode bf(0);
//          bf.next= head;
//          ListNode* prev=&bf;
//          while(head!=NULL&&head->next!=NULL){
//              ListNode *nn = head->next->next;
//              ListNode * m= head->next;
//              head->next = m->next;
//              m->next = head;
//              prev->next = m;
//              prev = head;
//              head = nn;
//
//          }
//
//        return bf.next;
//    }
//};
//
//int main(){
//    ListNode * p = new ListNode(0);
//    ListNode *pp = p;
////    ListNode *ppp = new ListNode(10);
////    pp->val =1;
////    //cout<<p->val<<endl;
////    cout<<pp->val<<endl;
////    pp->next = ppp;
////    pp = pp->next;
////    pp->val = 5;
////    cout<<p->val<<endl;
////    cout<<ppp->val<<endl;
//    for (int i = 1; i <4 ; ++i) {
//        ListNode *tp = new ListNode(i);
//        pp->next =tp;
//        pp = pp->next;
//    }
//     Solution s;
//     p =  s.swapPairs(p);
//    while(p!=NULL){
//        cout<<p->val<<endl;
//        p = p->next;
//    }
//
//    return 0;
//}
