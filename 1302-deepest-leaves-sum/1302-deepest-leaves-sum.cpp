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
    int h(TreeNode* root)
    {
        if(!root)return 0;
        return max(h(root->left),h(root->right))+1;
    }
    int call(TreeNode* root,int h,int i)
    {
        if(!root) return 0;
        if(++i==h)return root->val;
        return call(root->left,h,i)+call(root->right,h,i);
    }
    int deepestLeavesSum(TreeNode* root) {
        int he=h(root);
        int i=0;
        return call(root,he,i);
    }
};