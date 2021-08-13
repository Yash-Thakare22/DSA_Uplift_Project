/*

Ques5

https://leetcode.com/problems/kth-smallest-element-in-a-bst/

*/

class Solution {
public:
      int count=0;
    int helper(TreeNode* root,int k){
        if(!root){
            return -1;
        }

        int left=helper(root->left,k);
        count++;
         
        if(left!=-1)
            return left;
        if(count==k){
                return root->val;
        }
    
        int right=helper(root->right,k);       
        if(right!=-1)
            return right;
        if(count==k){
            return root->val;
        }
        return -1;
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int res=helper(root,k);
        return res;
    }
};

