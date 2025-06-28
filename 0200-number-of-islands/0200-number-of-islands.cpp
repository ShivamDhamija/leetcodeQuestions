class Solution {
public:
    void help(vector<vector<char>>&g,int i,int j,int &n,int &m){
        if(i<0||j<0||i==n||j==m||g[i][j]=='0')return ;
        g[i][j]='0';
        help(g,i-1,j,n,m);
        help(g,i+1,j,n,m);
        help(g,i,j-1,n,m);
        help(g,i,j+1,n,m);
    }
    int numIslands(vector<vector<char>>& grid) {
        int a=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        if(grid[i][j]=='1'){
            a++; help(grid,i,j,n,m);
        }
        return a;
    }
};