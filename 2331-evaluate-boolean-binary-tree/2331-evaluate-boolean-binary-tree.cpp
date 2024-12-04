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
    bool evaluateTree(TreeNode* r) {
        if(r->val==0)return 0;
        else if(r->val==1)return 1;
        else if(r->val==2)return evaluateTree(r->left)|evaluateTree(r->right);
        return evaluateTree(r->left)&evaluateTree(r->right);
    }
};