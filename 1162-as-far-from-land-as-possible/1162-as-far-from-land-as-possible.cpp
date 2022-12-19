class Solution {
public:
    int call(vector<vector<int>>&g,int i,int j)
    {
        int n=g.size(),m=g[0].size();
        if(i<0||j<0||i>=n||j>=m)return INT_MAX-100;
        if(g[i][j]!=-1)return g[i][j];
        g[i][j]=call(g,i-1,j)+1;
        g[i][j]=min(g[i][j],call(g,i+1,j)+1);
        g[i][j]=min(g[i][j],call(g,i,j-1)+1);
        g[i][j]=min(g[i][j],call(g,i,j+1)+1);
        
        return g[i][j];
    }
    int maxDistance(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size(),z=0,o=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                {
                    if(g[i][j]==0)
                       z++;
                    else
                        o++;
                    g[i][j]=g[i][j]==1?0:-1;
               }
        int ans=0;
        if(z==n*m||o==n*m)
            return -1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(g[i][j]!=0)
                {             
                    g[i][j]=-1;
                    call(g,i,j);
                }
                ans=max(ans,g[i][j]);
               // cout<<g[i][j]<<" ";
            }//cout<<endl;
        }
        
        return ans;
    }
};