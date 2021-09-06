// Question Link: https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/

class Solution {
  public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if (root==NULL) return v;
        vector<int>temp;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()) {
            TreeNode* f = q.front();
            q.pop();
            if(f ==NULL) {
                v.push_back(temp);
                temp.clear();
                if(!q.empty()) {
                    q.push(NULL);
                }
            } else {
                temp.push_back(f->val);
                if(f->left) {
                    q.push(f->left);
                }
                if(f->right) {
                    q.push(f->right);
                }
            }
        }
        return v;
    }
};
