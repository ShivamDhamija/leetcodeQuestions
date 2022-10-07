class Solution {
public:
    bool validPath(int n, vector<vector<int>>& e, int s, int d) {
        
        vector<vector<int>>v(n);
        vector<bool>vis(n);
        for(int i=0;i<e.size();i++)
        {
            int a=e[i][0];            
            int b=e[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        queue<int>q;
        q.push(s);
        while(!q.empty())
        {
            int j=q.front();
            q.pop();
            if(j==d)return true;
            vis[j]=true;
            for(int i=0;i<v[j].size();i++)
            {
                if(vis[v[j][i]])continue;
                q.push(v[j][i]);
            }
        }
        return false;
    }
};