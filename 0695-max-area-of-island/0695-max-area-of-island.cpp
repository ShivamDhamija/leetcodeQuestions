class Solution {
public:
    bool check(vector<vector<int>>& g,int i,int j)
    {
        if(i<0||j<0||i>=g.size()||j>=g[0].size())
            return false;
        if(g[i][j]==0)
            return false;
        g[i][j]=0;
            return true;
    }
    void call(vector<vector<int>>& g,int i,int j,int &a)
    {
        vector<vector<int>>v={{1,0},{-1,0},{0,1},{0,-1}};
        for(int k=0;k<4;k++)
        {
            int I=i+v[k][0],J=j+v[k][1];
            if(check(g,I,J))
            {
                call(g,I,J,a);a++;
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& g) {
        int ans=0;
        int m=g[0].size(),n=g.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int a=1;
               // cout<<g[3][8]<<endl;
                if(check(g,i,j))
            {
                call(g,i,j,a);
                ans=max(ans,a);
//cout<<i<<" "<<j<<" "<<a<<endl;
            }

            }
        }
        return ans;
    }
};