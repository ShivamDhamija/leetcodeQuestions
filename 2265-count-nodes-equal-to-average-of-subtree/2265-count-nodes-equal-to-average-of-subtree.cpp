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
    pair<int,int> call(TreeNode * root)
    {
        if(!root)return {0,0};
        pair<int,int>l=call(root->left);
        pair<int,int>r=call(root->right);
        int val=root->val+l.first+r.first;
        int no=r.second+l.second+1;
        if(root->val==(val/no))ans++;
        return {val,no};
    }
    int averageOfSubtree(TreeNode* root) {
        
        call(root);
        
        return ans;
    }
};