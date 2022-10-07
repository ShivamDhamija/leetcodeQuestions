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
    vector<int> ans;
    unordered_map<int,int>m;
    int count=0;
    void call(TreeNode* r)
    {
        if(!r)return ;
        m[r->val]++;
        count=max(count,m[r->val]);
        call(r->left);
        call(r->right);
    }
    vector<int> findMode(TreeNode* root) {
        call(root);
            for(auto i:m)
            {
                if(i.second==count)
                    ans.push_back(i.first);
            }
        return ans;
    }
};