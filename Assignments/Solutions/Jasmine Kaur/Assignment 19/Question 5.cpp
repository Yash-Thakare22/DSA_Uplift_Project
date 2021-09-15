class Solution {
  public:
    int m;
    int c=0;
    void inorder(TreeNode*root, int k) {
        if(!root) return;
        inorder(root->left,k);
        c++;
        if(c==k) {
            m=root->val;
            return;
        }
        inorder(root->right,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return m;
    }
};
