////
//// Created by wshwbluebird on 16/8/29.
////
//
//#include <iostream>
//
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//class Solution {
//public:
//    ListNode *reverseBetween(ListNode *head, int m, int n) {
//        ListNode h(0);
//        h.next = head;
//        ListNode *prev = &h;
//
//
//        int i = 1;
//        while (i != m) {
//            prev = prev->next;
//            i++;
//        }
//        //cout<<prev->next->val<<endl;
//        ListNode *prevb = prev;
//        prev = prev->next;
//        ListNode *cur = prev->next;
//        ListNode *end  =prev;
//        //cout<<cur->val<<endl;
//        for (int j = m; j < n; ++j) {
//            ListNode *temp = cur->next;
//            cur->next = prev;
//            prev = cur;
//            cur = temp;
//        }
////        cout<<cur->val<<endl;
////        cout<<prevb->val<<endl;
//        prevb->next = prev;
//        end->next=cur;
//        return h.next;
//
//    }
//
//};
//using namespace std;
//
//
//int main(){
//    ListNode *p = new ListNode(1);
//    ListNode *pp = new ListNode(2);
//    ListNode *ppp = new ListNode(3);
//    p->next = pp;
//    pp->next = ppp;
//    Solution s;
//    p = s.reverseBetween(p,1,3);
//    while(p) {
//        cout << p->val << endl;
//        p = p->next;
//    }
//    return  0;
//}