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
    int a= INT_MIN;
    int c(TreeNode*r)
    {
        if(!r)return 0;
        int ri=c(r->right);
        int li=c(r->left);
        int ma=max(ri+r->val,li+r->val);
        ma=max(ma,r->val);
        a=max(a,max(ri+li+r->val,ma));
        return max(r->val+max(ri,li),r->val);
    }
    int maxPathSum(TreeNode* r) {
        return max(c(r),a);        
    }
};