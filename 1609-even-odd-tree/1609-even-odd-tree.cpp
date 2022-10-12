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
    bool small(queue<TreeNode*>&q)
    {
        TreeNode* t;
        int val=INT_MAX;
        int si=q.size();
        while(si--)
        {
            t=q.front();
            q.pop();
            if(t->val>=val||t->val%2!=0)
                return false;
            val=t->val;
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        return true;
    }
    bool big(queue<TreeNode*>&q)
    {
        TreeNode* t;
        int val=INT_MIN;
        int si=q.size();
        while(si--)
        {
            t=q.front();
            q.pop();
            if(t->val<=val||t->val%2==0)
                return false;
            val=t->val;
            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }
        return true;
    }
    bool isEvenOddTree(TreeNode* root) {
        
        int i=0;
        queue<TreeNode*>q;
        q.push(root);
            
        while(!q.empty())
        {
            if(i==0)
            {
                if(!big(q))
                    return false;
            }
            else
            {
                if(!small(q))
                    return false;
            } 
            i=1-i;
        }
        
        
        return true;
    }
};