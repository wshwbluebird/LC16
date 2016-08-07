///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     ListNode *next;
// *     ListNode(int x) : val(x), next(NULL) {}
// * };
// */
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        ListNode * root= new ListNode(0);
//        ListNode * last = root;
//        root->val = (l1->val + l2->val)%10;
//        int c = (l1->val + l2->val)/10;
//        l1 = l1->next;
//        l2 = l2->next;
//        int sum;
//        while(l1!=NULL||l2!=NULL){
//            sum=0;
//            if(l1!=NULL){
//                sum += l1->val;
//                l1 = l1->next;
//            }
//            if(l2!=NULL){
//                sum += l2->val;
//                l2 = l2 ->next;
//            }
//            sum += c;
//            ListNode * p = new ListNode(sum%10) ;
//            c= sum/10;
//            last->next = p;
//            last = p;
//        }
//        if(c!=0){
//            ListNode * p = new ListNode(c) ;
//            last->next = p;
//            last = p;
//        }
//
//        return root;
//    }
//};