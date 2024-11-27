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
    int s=0;
    int rangeSumBST(TreeNode* r, int l, int h) {
        if(!r)return 0; 
        if( r->val >= l && r->val <=h)s+=r->val;
        rangeSumBST(r->left,  l,  h);
            rangeSumBST( r->right, l,  h);
        return s;
    }
};