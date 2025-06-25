class Solution {
public:
    void clear(vector<vector<char>>&g,int i,int j,int &I,int &J){
        if(i<0 || j<0 ||i==I || j==J ||g[i][j]=='0')return ;
        g[i][j]='0';
        clear(g,i+1,j,I,J);
        clear(g,i,j+1,I,J);
        clear(g,i-1,j,I,J);
        clear(g,i,j-1,I,J);
    }
    int numIslands(vector<vector<char>>& grid) {
        int a=0,I=grid.size(),J=grid[0].size();
        for(int i=0;i<I;i++)
        for(int j=0;j<J;j++)
        if(grid[i][j]=='1'){
            a++;
            clear(grid,i,j,I,J);
        }
        return a;
    }
};