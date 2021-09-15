class Solution {
  public:
    bool check(TreeNode* lefttree,TreeNode* righttree) {
        if(lefttree == NULL && righttree != NULL) return false;
        if(lefttree != NULL && righttree == NULL) return false;
        if(lefttree == NULL && righttree == NULL) return true;
        if(lefttree->val != righttree->val) return false;
        return check(lefttree->left,righttree->right) && check(lefttree->right,righttree->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return check(root->left,root->right);
    }
};
