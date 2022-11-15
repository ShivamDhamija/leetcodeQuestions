class Solution {
public:
    vector<int>vis;
    vector<vector<int>>m;
    bool call(int i,int c)
    {
        if(vis[i]!=-1)
            return true;
            vis[i]=c;
        bool ans=true;
        c=abs(vis[i]-1);
        for(int j=0;j<m[i].size();j++)
        {
            int k=m[i][j];
            if(vis[k]!=-1&&vis[k]!=c)
                return false;
            
            ans=ans&&call(k,c);
        }
        
        return ans;
    }
    bool possibleBipartition(int n, vector<vector<int>>& d) {
        vis.resize(n+1,-1);
        m.resize(n+1,vector<int>());
        int x=0;
        
        for(int i=0;i<d.size();i++)
        {
            int a=d[i][0],b=d[i][1];
            m[a].push_back(b);
            m[b].push_back(a);
        }
        for(int i=1;i<=n;i++)
            if(vis[i]==-1&&!call(i,0))return false;
        return true;
    }
};