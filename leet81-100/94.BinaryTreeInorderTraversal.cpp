////
//// Created by wshwbluebird on 16/9/3.
////
//
///**
// * Definition for a binary tree node.
// * struct TreeNode {
// *     int val;
// *     TreeNode *left;
// *     TreeNode *right;
// *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// * };
// */
//class Solution {
//public:
//    vector<int>ans;
//    vector<int> inorderTraversal(TreeNode* root) {
//        if(root==NULL) return ans;
//        rec(root);
//        return ans;
//    }
//    void rec(TreeNode* root){
//        if(root==NULL)  return;
//        rec(root->left);
//        ans.push_back(root->val);
//        rec(root->right);
//        return;
//    }
//};