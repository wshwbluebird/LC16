////
//// Created by wshwbluebird on 16/9/3.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
////class Solution {
////public:
////    bool isSameTree(TreeNode* p, TreeNode* q) {
////        vector<int> stp,stq;
////        inoder(p,stp);
////        inoder(q,stq);
////        sort(stp.begin(),stp.end());
////        sort(stq.begin(),stq.end());
////        if(stp.size()!=stq.size()) return false;
////        if(memcmp(&stp,&stq,stp.size())==0)  return true;
////        else return false;
////
////    }
////
////private:
////    void inoder(TreeNode* root,vector<int> &st){
////        if(root==NULL) return ;
////        st.push_back(root->val);
////        inoder(root->left,st);
////        inoder(root->right,st);
////    }
////};
//
//class Solution {
//public:
//    bool isSameTree(TreeNode* p, TreeNode* q) {
//        if(p==NULL && q==NULL) return true;
//        if(p==NULL && q)  return false;
//        if(q==NULL && p)  return false;
//        if(p->val == q->val)  return isSameTree(p->left,q->left)
//                                     && isSameTree(p->right,q->right);
//        return false;
//
//    }
//};
//
//int main(){
//
//    return 0;
//}