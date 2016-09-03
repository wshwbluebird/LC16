////
//// Created by wshwbluebird on 16/9/3.
////
//
//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//
//
//struct TreeNode {
//    int val;
//    TreeNode *left;
//    TreeNode *right;
//    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class Solution {
//public:
//    bool isValidBST(TreeNode* root) {
//        if(root==NULL)
//            return true;
//        preOrder(root);
//        for (int i = 1; i < st.size() ; ++i) {
//            if(st[i]<=st[i-1]) return false;
//        }
//        return  true;
//    }
//
//private:
//    vector<int> st;
//    void preOrder(TreeNode* root){
//        if(root==NULL) return ;
//        preOrder(root->left);
//        st.push_back(root->val);
//        preOrder(root->right);
//    }
//};
//
//int main(){
//
//
//    return 0;
//}
//
//
