class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& l, vector<int>& r) {
        vector<vector<int>>m(n,vector<int>());
        vector<bool>vis(n,false);
        vector<int>in(n);
        for(int i=0;i<n;i++)
        {
            int a=l[i],b=r[i];
            if(a!=-1)
            {
                m[i].push_back(a);
                in[a]++;
            }
            if(b!=-1)
            {
                m[i].push_back(b);
                in[b]++;
            }
        }
        queue<int>q;
        for(int i=0;i<n;i++)
            if(in[i]==0)
                q.push(i);
        if(q.size()>1)return false;
        while(!q.empty())
        {
            int f=q.front();
            q.pop();
            if(vis[f])return false;
            vis[f]=true;
            for(auto i:m[f])
                q.push(i);
        }
        for(int i=1;i<n;i++)
            if(!vis[i])return false;
        return true;
    }
};