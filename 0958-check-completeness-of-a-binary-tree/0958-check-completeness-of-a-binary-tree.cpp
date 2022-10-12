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
    
    
    bool isCompleteTree(TreeNode* r) {
        queue<pair<TreeNode*,int >>q;
        
        q.push({r,1});
        int i=0;
        while(!q.empty())
        {
            pair<TreeNode*,int>f=q.front();
            q.pop();
            if(f.second!=i+1)return false;
            if(!f.first->left&&f.first->right)
                return false;
            if(f.first->left)
                q.push({f.first->left,f.second*2});
            if(f.first->right)
                q.push({f.first->right,f.second*2+1});
            i=f.second;
        }
        
        
        return true;
    }
};