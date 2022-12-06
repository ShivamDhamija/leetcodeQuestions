class Solution {
public:
   vector<vector<int>>dp;
    int call(vector<int>&p,int i,int j,int f)
    {
        if(i>=p.size())
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(j==0)
        {
            dp[i][j]=call(p,i+1,j,f);
            dp[i][j]=max(dp[i][j],call(p,i+1,1,f)-p[i]);
        }
        else 
        {
            dp[i][j]=call(p,i+1,j,f);
            dp[i][j]=max(dp[i][j],call(p,i+1,0,f)+p[i]-f);
        }
        return dp[i][j];
    }
    int maxProfit(vector<int>& p, int f) {
       dp.resize(p.size(),vector<int>(2,-1));
        return call(p,0,0,f); 
    }
};