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
    int findBottomLeftValue(TreeNode* r) {
        if(!r)return -1;
        int l=-1;
        
        queue<TreeNode*>q;
        q.push(r);
        while(!q.empty())
        {
            int size=q.size(),one=1;
            while(size--)
            {
                TreeNode* f=q.front();
                q.pop();
                if(one==1)
                    l=f->val;
                one=0;
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
        }
        return l;
    }
};