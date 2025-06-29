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
    int a=1;
    vector<long long> help(TreeNode* t){
        if(!t)return {LONG_MAX,LONG_MIN};
        vector<long long>l,r;
        l=help(t->left);
        r=help(t->right);
        int val=t->val;
        if(!(l[1]<val &&val<r[0]))a=0;
        return {l[0]==LONG_MAX?val:l[0] , r[1]==LONG_MIN?val:r[1]}; 
    }
    bool isValidBST(TreeNode* root) {
    help(root);
    return a;    
    }
};