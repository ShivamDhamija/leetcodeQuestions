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
    bool call(TreeNode* root, int &limit,int i)
    {
        if(!root)return true;
        i+=root->val;
        if(!root->left&&!root->right)
        {
            if(limit>i)return false;
            return true;
        }
        
        bool l=call(root->left,limit,i);
        bool r=call(root->right,limit,i);
        
        if(!l)root->left=NULL;
        if(!r)root->right=NULL;
        
        if(!l&&!r)return false;
        if(!l&&!root->right)return false;
        if(!r&&!root->left)return false;
        return true;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        
        if(!root)return root;
        bool l=call(root->left,limit,root->val);
        bool r=call(root->right,limit,root->val);
        if(!l&&!r)return NULL;
        if(!l)root->left=NULL;
        if(!r)root->right=NULL;
        if(!l&&!root->right)return NULL;
        if(!r&&!root->left)return NULL;
        return root;
        
    }
};