class Solution {
  public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL) return NULL;
        if(root->val > key) root->left = deleteNode(root->left,key);
        else if(root->val < key) root->right = deleteNode(root->right,key);
        else {
            if(root->left == NULL && root->right == NULL) {
                delete root;
                return NULL;
            } else if(root->left == NULL) {
                TreeNode* temp = root->right;
                root->right = NULL;
                delete root;
                return temp;
            } else if(root->right == NULL) {
                TreeNode* temp = root->left;
                root->left = NULL;
                delete root;
                return temp;
            } else {
                TreeNode* temp = root->right;
                while(temp->left !=NULL) {
                    temp = temp->left;
                }
                int minR = root->val;
                swap(temp->val, root->val);
                root->right = deleteNode(root->right,minR);
            }
        }
        return root;
    }
};
