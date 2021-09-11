/*

Ques6

Q6 https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/

*/

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       TreeNode* p1=root;
       TreeNode* q1=root;
        TreeNode* lca=root;
        while(p1!=p && q1!=q){
           
            if(p->val<p1->val)
                p1=p1->left;
            else
                p1=p1->right;
         
             if(q->val<q1->val)
                q1=q1->left;
            else
                q1=q1->right;
            
            if(p1==q1)
                lca=p1;
        }
        while(p1!=p){
            if(p->val<p1->val)
                p1=p1->left;
            else
                p1=p1->right; 
        }
        while(q1!=q){
           if(q->val<q1->val)
                q1=q1->left;
            else
                q1=q1->right; 
        }
        return lca;
    }
};

