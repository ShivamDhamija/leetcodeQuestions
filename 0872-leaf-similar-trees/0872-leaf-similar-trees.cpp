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
    vector<int> v1,v2;
    void call(TreeNode* r,int h)
    {
        if(!r)
            return ;
        if(!r->left&&!r->right)
        {
            if(h==1)
                v1.push_back(r->val);
                else
                    v2.push_back(r->val);
            return;
        }
        call(r->left,h);
        call(r->right,h);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        call(root1,1);
        call(root2,2);
        if(v1==v2)
            return true;
        return false;
    }
};