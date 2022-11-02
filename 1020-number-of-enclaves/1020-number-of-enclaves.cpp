class Solution {
public:
    bool zero;
    int count;
    void call(vector<vector<int>>& v,int i,int j,int n,int m)
    {
        if(i<0||j<0||i>=n||j>=m)return;
        if((i==0||j==0||i==n-1||j==m-1)&&v[i][j]==1)zero=true;
        
        if(v[i][j]==0)return;
        v[i][j]=0;
        count++;
        call(v,i+1,j,n,m);
        call(v,i-1,j,n,m);
        call(v,i,j+1,n,m);
        call(v,i,j-1,n,m);
    }
    int numEnclaves(vector<vector<int>>& g) {
        int n=g.size(),m=g[0].size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(g[i][j]==1)
                {
                    zero=false;
                    count=0;
                    call(g,i,j,n,m);
                    if(!zero)
                        ans+=count;
                }
        }
        
        return ans;
    }
};