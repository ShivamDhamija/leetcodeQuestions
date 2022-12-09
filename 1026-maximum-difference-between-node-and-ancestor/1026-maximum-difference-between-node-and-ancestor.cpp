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
    int ans=0;

    void call(TreeNode*root,int mi,int ma)
    {
        if(!root)return;
        mi=min(root->val,mi);
        ma=max(root->val,ma);
            
        if(!root->left&&!root->right)
        {
           ans=max(ans,abs(ma-mi));
            return;
        }
        call(root->left,mi,ma);
        call(root->right,mi,ma);
    }
    int maxAncestorDiff(TreeNode* root) {
        if(!root)return ans;
        int mi=root->val;
        int ma=root->val;
        call(root,mi,ma);

        return ans;
    }
};