////
//// Created by wshwbluebird on 16/9/3.
////
//
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//   TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//
//    vector<TreeNode *>generateTrees(int n) {
//        vector<TreeNode *> ans;
//        if(n==0) return ans;
//        if(n==1)  {
//            TreeNode *one = new TreeNode(1);
//            ans.push_back(one);
//            return ans;
//        }
//        vector<TreeNode *> last  = generateTrees(n-1);
//        for (int i = 0; i < last.size() ; ++i) {
//            TreeNode *newst = new TreeNode(n);
//            newst->left = last[i];
//            ans.push_back(newst);
//
//            TreeNode *temp = last[i];
//            TreeNode *use = last[i];
//            while(temp!=NULL){
//                ans.push_back(treeCopyAddValue(use,n,temp));
//                temp = temp->right;
//            }
//
//
//        }
//
//        return ans;
//    }
//
//private:
//    TreeNode* treeCopyAddValue(TreeNode* root, int newval,TreeNode* temp) {
//        if(root == nullptr) {
//            return root;
//        }
//        auto newRoot = new TreeNode(root->val);
//        newRoot->left = treeCopyAddValue(root->left, newval,temp);
//        if(root->val==temp->val){
//            auto insert = new TreeNode(newval);
//            newRoot->right = insert;
//            insert->left= treeCopyAddValue(root->right,newval,temp);
//        }
//        else
//        newRoot->right = treeCopyAddValue(root->right,newval,temp);
//        return newRoot;
//    }
//
//
//};
//
//int main(){
//
//    return 0 ;
//}