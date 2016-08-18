////
//// Created by wshwbluebird on 16/8/18.
////
//
//#include <iostream>
//
//using namespace std;
//
//
// struct ListNode {
//     int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//  };
//
//class Solution {
//public:
//    ListNode* rotateRight(ListNode* head, int k) {
//        if(head==NULL || head->next==NULL || k ==0) return head;
//        ListNode *temp = head;
//        int cnt = 0;
//        while(temp->next){
//            cnt++;
//            temp = temp->next;
//        }
//        if(k%(cnt+1)==0) return head;
//        ListNode *old = head;
//        ListNode *newtemp = head;
//        //cout<<newtemp->val<<endl;
//        for (int i = 0; i < cnt - k%(cnt+1) ; ++i) {
//            newtemp = newtemp->next;
//        }
//        ListNode *ans = newtemp->next;
//        //cout<<ans->val<<endl;
//        newtemp->next = NULL;
//        temp->next = old;
//        return ans;
//    }
//};
//
//int main(){
//    ListNode *head = new ListNode(1);
//    ListNode *p = head;
//    for (int i = 2; i < 3; ++i) {
//        ListNode *temp = new ListNode(i);
//        p->next = temp;
//        p = p->next;
//    }
//    Solution s;
//    p = s.rotateRight(head ,2);
//    //p = head;
//    while(p){
//        cout<<p->val<<endl;
//        p = p->next;
//    }
//
//    return 0;
//}