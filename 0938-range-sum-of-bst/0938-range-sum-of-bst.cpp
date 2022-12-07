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
    int  s=0;
    
    void call(TreeNode* r, int l, int h){
        if(!r)
            return ;
        if(r->val>=l&&r->val<=h)
            s+=r->val;
        call(r->left,l,h);
        call(r->right,l,h);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
    
        if(root)
            call(root,low,high);
        return s;
    }
};