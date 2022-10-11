/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    int value;
    unordered_map<int,vector<int>>m;
    unordered_map<int,bool>vis;
    void bfs(TreeNode*r)
    {
        queue<pair<TreeNode*,int>>q;
        
        if(r->left)
        {
            q.push({r->left,r->val});
            vis[r->val]=false;
        }
        if(r->right)
        {
            q.push({r->right,r->val});
            vis[r->val]=false;
        }
        while(!q.empty())
        {
            pair<TreeNode*,int>t=q.front();
            vis[t.first->val]=false;
            q.pop();
            vector<int>v;
            if(m.find(t.first->val)==m.end())
                m[t.first->val]= v;
            if(m.find(t.second)==m.end())
                m[t.second]=v;
            m[t.first->val].push_back(t.second);
            m[t.second].push_back(t.first->val);
            if(t.first->left)
            {
                q.push({t.first->left,t.first->val});
                
            }
            if(t.first->right)
            {
                q.push({t.first->right,t.first->val});
                
            }
        }
    }
    void find(int t,int k)
    {
        if(k<0||vis[t])return;
     if(k==0)
     {
         ans.push_back(t);
         return ;
     }
        vis[t]=true;
        for(auto i:m[t])
            if(!vis[i])
                find(i,k-1);
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        bfs(root);
        value=target->val;
        find(target->val, k);
        return ans;
    }
};