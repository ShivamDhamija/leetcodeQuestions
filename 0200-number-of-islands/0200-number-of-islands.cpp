class Solution {
public:
    int n,m;
    bool c1(vector<vector<char>>& g,vector<vector<int>>&vis,int i,int j)
    {
        if(i<0||i>=n||j<0||j>=m)return false;
        if(vis[i][j]==1||g[i][j]=='0')return false;
        vis[i][j]=1;
        return true;
    }
    
    void dfs(vector<vector<char>>& g,vector<vector<int>>&vis,int i,int j)
    {
        vector<vector<int>>v={{1,0},{-1,0},{0,1},{0,-1}};
        for(int I=0;I<4;I++)
        if(c1(g,vis,i+v[I][0],j+v[I][1]))
        {
            dfs(g,vis,i+v[I][0],j+v[I][1]);
        }
    }
    
    int numIslands(vector<vector<char>>& g) {
        n=g.size();
        m=g[0].size();
        int ans=0;
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(c1(g,vis,i,j))
                {
                    ans++;
                    dfs(g,vis,i,j);
                   // cout<<i<<""<<j<<endl;
                }
        
        return ans;
    }
};