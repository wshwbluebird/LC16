//
//
////
//// Created by wshwbluebird on 16/8/9.
////我写俄速度最差的代码
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
//
//class Solution {
//public:
//    int n;
//    ListNode* reverseKGroup(ListNode* head, int k) {
//         if(k<2) return head;
//         if(head==NULL)  return NULL;
//         int cnt =0;
//         ListNode *prev = head;
//         while(cnt<k-1){
//             cnt++;
//             head = head->next;
//
//             if(head==NULL) {
//                 //cout<<"null"<<endl;
//                 return prev;
//             }
//             //cout<<"xunhun"<<endl;
//             //cout<<"df: "<<head->val<<endl;
//         }
//           head->next = reverseKGroup(head->next,k);
//        //cout<<"after: "<<(head-cnt)->val<<endl;
//           return reverse(head-cnt,head);
//
//
//    }
//
//private:
//    ListNode*reverse(ListNode *head,ListNode *tail) {
//        if(head==tail)  return head;
//        ListNode *new_head = tail;
//        ListNode *prev = head;
//        while (head->next!=tail){
//            head = head->next;
//        }
//        head->next = new_head->next;
//        new_head->next = reverse(prev,head);
//        return new_head;
//
//
//    }
//
//};
//
//int main(){
//    ListNode * p = new ListNode(1);
//    ListNode *pp = new ListNode(2);
//    p->next =pp;
////    for (int i = 1; i <3 ; ++i) {
////        ListNode *tp = new ListNode(i);
////        pp->next =tp;
////        //en = pp;
////        pp = pp->next;
////    }
//     Solution s;
//     p = s.reverseKGroup(p,2);
//    //cout<<"43"<<endl;
//    while(p!=NULL){
//        cout<<p->val<<endl;
//        p = p->next;
//    }
//
//    return 0;
//}