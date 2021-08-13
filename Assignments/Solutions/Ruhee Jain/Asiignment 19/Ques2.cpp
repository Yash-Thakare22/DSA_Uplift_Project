/*

Ques2

https://leetcode.com/problems/binary-tree-level-order-traversal/

*/


class Solution {
public:
    vector<vector<int> > res;
    void helper(TreeNode* root,int level){
        if(!root){
            return;
        }
      
        if(res.size()<=level){
            vector<int> temp;
            temp.push_back(root->val);
            res.push_back(temp);
        }
        else{
            res[level].push_back(root->val);            
        }
          // cout<<res.size()<<" "<<level<<" "<<root->val<<endl;
        if(root->left)
            helper(root->left,level+1);
        if(root->right)
            helper(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        helper(root,0);
        return res;
    }
};
