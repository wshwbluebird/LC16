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
//
//class Solution {
//public:
//    void recoverTree(TreeNode* root) {
//        pre(root);
//        vector<TreeNode*> ch;
//        for (int i = 1; i < st.size(); ++i) {
//            if(st[i-1]->val > st[i]->val) {
//                ch.push_back(st[i-1]);
//                ch.push_back(st[i]);
//            }
//        }
//
//        if(ch.size()!=0){
//            int temp =ch[0]->val;
//            ch[0]->val = ch[ch.size()-1]->val;
//            ch[ch.size()-1]->val = temp;
//        }
//    }
//
//private:
//    vector<TreeNode *> st;
//    void pre(TreeNode* root){
//        if(root==NULL) return ;
//        pre(root->left);
//        st.push_back(root);
//        pre(root->right);
//    }
//};
//int main(){
//
//    return 0;
//}