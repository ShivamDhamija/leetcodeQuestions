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
    unordered_map<TreeNode*,int>m;
    int rob(TreeNode* r) {
        if(!r)return 0;
        if(m.find(r)!=m.end())return m[r];
        int no=rob(r->left)+rob(r->right);
        int yes;
        int l=0,ri=0;
        if(r->left)l=rob(r->left->left)+rob(r->left->right);
        if(r->right)ri=rob(r->right->left)+rob(r->right->right);
        yes=ri+l;
        m[r]= max(no,r->val+yes);
        return m[r];
    }
};