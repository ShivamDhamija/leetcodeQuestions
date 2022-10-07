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
    int ans=1;
    
    pair<int,int> call(TreeNode*root)
    {
     if(!root)return {-1001,0};
        pair<int,int>l=call(root->left);
        pair<int,int>r=call(root->right);
        int no=1,hi=0;
        if(root->val==l.first)
        {
            no+=l.second;
            hi=l.second;
        }
        if(root->val==r.first)
        {
            no+=r.second;
            hi=max(hi,r.second);
        }
        ans=max(ans,no);
        return {root->val,hi+1};
    }
    int longestUnivaluePath(TreeNode* root) {
        if(!root)return 0;
        call(root);
                 
        return ans-1;
    }
};