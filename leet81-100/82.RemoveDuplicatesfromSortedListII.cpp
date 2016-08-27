////
//// Created by wshwbluebird on 16/8/27.
////
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode(int x) : val(x), next(NULL) {}
// };
//
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if(head==NULL)  return head;
//        ListNode* temp = head;
//        ListNode newhead(0);
//        newhead.next = head;
//        ListNode *prev = &newhead;
//
//        while(temp!=NULL && temp->next!=NULL){
//            if(temp->val == temp->next->val){
//                int st = temp->val;
//                //cout<<st<<endl;
//                while(temp!=NULL&&temp->val==st){
//                    temp = temp->next;
//                }
//                prev->next = temp;
//                //cout<<"here"<<endl;
//            }else{
//                prev = prev->next;
//                temp = temp->next;
//            }
//        }
//        return newhead.next;
//    }
//};
//
//int main(){
//    ListNode *p = new ListNode(1);
//    ListNode *p2 = new ListNode(1);
//    p->next = p2;
//
//    Solution s;
//    ListNode *ans = s.deleteDuplicates(p);
//
//    while(ans!=NULL){
//        cout<<ans->val<<endl;
//        ans =ans->next;
//    }
//
//
//    return 0;
//}