class Solution {
public:
    int dfs(vector<vector<int>>& g,int r,int c)
    {
        int m=g.size();
        int n=g[0].size();
        if(r==m-1&&c==n-1)return 1;
        if(r==m||c==n||g[r][c]==0)return 0;
        g[r][c]=0;
        int a=dfs(g,r+1,c);
        if(a==1)return 1;
        return dfs(g,r,c+1);
    }
    bool isPossibleToCutPath(vector<vector<int>>& g) {
        int m=g.size();
        int n=g[0].size();
        dfs(g,0,0);
        g[0][0]=1;
        int a=dfs(g,0,0);
        if(a==0)return 1;return 0;
    }
};