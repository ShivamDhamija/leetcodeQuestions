/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* trimBST(TreeNode* r, int l, int h) {
        if(r&&r->val<l)
        {
            r= trimBST(r->right,l,h);            
        }
        if(r&&r->val>h)
        {
            r=trimBST(r->left,l,h);
        }
        if(r)
        { 
            r->left=trimBST(r->left,l,h);
            r->right=trimBST(r->right,l,h);
        }
            
        return r;
    }
};