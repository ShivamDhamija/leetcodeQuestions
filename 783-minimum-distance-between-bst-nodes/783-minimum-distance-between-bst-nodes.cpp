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
    vector<int>v ;
    void call(TreeNode *r)
    {
        if(!r)return ;
        v.push_back(r->val);
        call(r->left);
        call(r->right);
    }
    int minDiffInBST(TreeNode* root) {
        int ans=INT_MAX;
        call(root);
        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
            ans=min(ans,v[i]-v[i-1]);
        }
        return ans==INT_MAX?-1:ans;
    }
};