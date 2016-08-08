////
//// Created by wshwbluebird on 16/8/6.
////
////Definition for a binary tree node.
//#include <iostream>
//#include <math.h>
//  struct TreeNode {
//      int val;
//      TreeNode *left;
//      TreeNode *right;
//      //TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//  };
//
//class Solution {
//public:
//    int countNodes(TreeNode* root) {
//        if(root == NULL)  return 0;
//        TreeNode* l = root;
//        TreeNode* r = root;
//        int ll = 0,rr = 0;
//        while(l!=NULL){
//            ll++;
//            l = l->left;
//        }
//        while(r!=NULL){
//            rr++;
//            r = r->right;
//        }
//        if(rr==ll)  return pow(2,rr)-1;
//
//
//        return 1+countNodes(root->left)+countNodes(root->right);
//    }
//};