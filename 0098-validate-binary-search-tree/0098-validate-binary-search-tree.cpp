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
    vector<long long int> help(TreeNode*ro,bool &a){
        if(!ro)return {LONG_MAX,LONG_MIN};
        vector<long long int>l,r;
        l=help(ro->left,a);
        r=help(ro->right,a);
        if(!(ro->val>l[1]))a=0;
        if(!(ro->val<r[0]))a=0;
        return { l[0]==LONG_MAX?ro->val:l[0] ,r[1]==LONG_MIN?ro->val:r[1] };
    }
    bool isValidBST(TreeNode* root) {
        bool a=1;
        cout<<INT_MAX;
        help(root,a);
        return a;
    }
};