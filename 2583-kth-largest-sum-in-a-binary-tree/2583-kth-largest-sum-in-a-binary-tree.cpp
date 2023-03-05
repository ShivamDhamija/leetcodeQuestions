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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue <long long , vector<long long >, greater<long long>> p;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            long long si=q.size(),t=0;            
            while(si--)
            {
                TreeNode* f=q.front();
                q.pop();
                t+=f->val;
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            p.push(t);
            if(p.size()>k)
                p.pop();
        }
        if(p.size()<k)
            return -1;
        return p.top();
    }
};