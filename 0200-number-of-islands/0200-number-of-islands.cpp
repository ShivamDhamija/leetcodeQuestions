class Solution {
public:
    void help(vector<vector<char>>&g ,int i,int j,int I,int J){
        if(i<0|| j<0||i==I||j==J||g[i][j]=='0')return ;
        g[i][j]='0';
        help(g,i-1,j,I,J);
        help(g,i+1,j,I,J);
        help(g,i,j-1,I,J);
        help(g,i,j+1,I,J);
    }
    int numIslands(vector<vector<char>>& grid) {
        int a=0;
        for(int i=0;i<grid.size();i++)
        for(int j=0;j<grid[0].size();j++)
        if(grid[i][j]=='1')a++,help(grid,i,j,grid.size(),grid[0].size());
        return a;
    }
};