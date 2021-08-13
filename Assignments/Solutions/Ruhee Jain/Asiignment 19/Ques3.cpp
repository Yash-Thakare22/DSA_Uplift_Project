/*

Ques3

Q3 https://leetcode.com/problems/maximum-depth-of-binary-tree/

*/

class Solution {
public:
    
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftMax=maxDepth(root->left)+1;
        int rightMax=maxDepth(root->right)+1;
        
        return leftMax>rightMax ? leftMax : rightMax;
    }
};
