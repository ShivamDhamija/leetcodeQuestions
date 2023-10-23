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
    vector<TreeNode*>v;
    void travel(TreeNode* r)
    {
        if(r==NULL)return;
        travel(r->left);        
        v.push_back(r);
        travel(r->right);
    }
    TreeNode* solve(int l,int h)
    {
        if(l>h)return NULL;
        int m=l+(h-l)/2;
        TreeNode* n=v[m];
        n->left=solve(l,m-1);
        n->right=solve(m+1,h);
        return n;
    }
    TreeNode* balanceBST(TreeNode* root) {
        travel(root);
        return solve(0,v.size()-1);
    }
};