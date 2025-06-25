/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)return NULL;
        if(root==p||root==q)return root;
        int v=root->val, pv=p->val,qv=q->val;
        if((v>pv&&v<qv) || (v>qv&&v<pv))return root;
        if(v>pv&&v>qv)return lowestCommonAncestor(root->left,p,q);
        return lowestCommonAncestor(root->right,p,q);
    }
};