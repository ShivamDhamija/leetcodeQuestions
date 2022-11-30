class Solution {
public:
    int ans;
    bool check(vector<vector<int>>& g,int i,int j)
    {
        if(i<0||j<0||i==g.size()||j==g[0].size()||g[i][j]==0)
        {
            ans++;
            return false;
        }
        if(g[i][j]==2)return false;
        return true;
    }
    void call(vector<vector<int>>& g,int i,int j)
    {
        if(!check(g,i,j))return;
        g[i][j]=2;
        call(g,i+1,j);
        call(g,i-1,j);
        call(g,i,j+1);
        call(g,i,j-1);
        
    }
    int islandPerimeter(vector<vector<int>>& g) {
        ans=0;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[0].size();j++)
                if(g[i][j]==1)
                {
                    call(g,i,j);
                }
        }
        
        return ans;
    }
};