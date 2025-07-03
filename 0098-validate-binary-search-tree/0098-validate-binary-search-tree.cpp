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
    vector<long long>help(TreeNode*n,int &a){
        if(n==NULL)return {LONG_MAX,LONG_MIN};
        vector<long long>l=help(n->left,a);
        vector<long long>r=help(n->right,a);
        if(n->val<=l[1]||n->val>=r[0])a=0;
        return {l[0]==LONG_MAX?n->val:l[0],r[1]==LONG_MIN?n->val:r[1]};
    }
    bool isValidBST(TreeNode* root) {
        int a=1;
        help(root,a);
        return a;
    }
};