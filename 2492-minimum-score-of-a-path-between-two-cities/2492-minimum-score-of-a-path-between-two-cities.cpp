class Solution {
public:
    int minScore(int n, vector<vector<int>>& r) {
        int mi=INT_MAX;
        vector<vector<pair<int,int>> >v(n+1,vector<pair<int,int>>());
        for(int i=0;i<r.size();i++)
        {
            int a=r[i][0],b=r[i][1],d=r[i][2];
            v[a].push_back({b,d});
            v[b].push_back({a,d});
        }
        queue<pair<int,int>>q;
        q.push({1,INT_MAX});
        vector<int>vis(n+1,INT_MAX);
        vis[1]=INT_MAX;
        while(!q.empty())
        {
            pair<int,int>f=q.front();
            q.pop();
            int a=f.first,d=f.second;
            mi=min(mi,d);
            for(int i=0;i<v[a].size();i++)
            {
                int b=v[a][i].first,d=v[a][i].second;
                if(vis[b]>d)
                {
                    vis[b]=d;
                    q.push(v[a][i]);
                }
            }
        }
        return mi;
    }
};