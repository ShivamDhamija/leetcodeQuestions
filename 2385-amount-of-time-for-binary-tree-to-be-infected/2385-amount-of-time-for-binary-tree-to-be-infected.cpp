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
    unordered_map<int ,vector<int>>m;
    unordered_map<int,bool>vis;
    int ans=0;
    void Map(TreeNode*r)
    {
        
        queue<pair<TreeNode*,int>>q;
        if(r->left)
            q.push({r->left,r->val});
        if(r->right)
            q.push({r->right,r->val});
        while(!q.empty())
        {
            pair<TreeNode*,int>t=q.front();
            q.pop();
            vector<int>v;
            int parent=t.second;
            int new_parent=t.first->val;
            TreeNode* l=t.first->left;
            TreeNode* r=t.first->right;
           
            if(m.find(parent)==m.end())
            {
                vis[parent]=false;
                m[parent]=v;
            }
            vis[new_parent]=false;
            m[new_parent]=v;
                
            m[parent].push_back(new_parent);
            m[new_parent].push_back(parent);
            if(l)
            {
                 q.push({l,new_parent});
            }
            if(r)
            {
                 q.push({r,new_parent});
            }
            
        }
    }
    
    void bfs(int s,int i)
    {
        if(vis[s])
            return ;
        
        vis[s]=true;
        ans=max(ans,i);
        i=i+1;
        for(auto j:m[s])
            bfs(j,i);
    }
    int amountOfTime(TreeNode* root, int start) {
    
        Map(root);
        
        bfs(start,0);
        
        return ans;
    }
};