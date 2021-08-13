
/*

Ques1 

https://leetcode.com/problems/symmetric-tree/

*/

class Solution {
public:
    bool isSame(TreeNode* left, TreeNode* right){
        if(left==NULL && right==NULL){
            return true;    
        }
        if(left==NULL || right==NULL){
            return false;
        }
        if(left->val!=right->val){
            return false;
        }
        return isSame(left->left,right->right) && isSame(left->right, right->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        if(root->left==NULL && root->right==NULL){
            return true;    
        }
        if(root->left==NULL || root->right==NULL){
            return false;
        }
      if(root->left->val!=root->right->val){
          return false;
      }
        return isSame(root->left, root->right);
    }
};

