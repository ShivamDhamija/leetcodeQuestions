class Solution {
public:
    vector<vector<int>>dp;
    int call(vector<int>&p,int i,int j)
    {
        if(i>=p.size())
            return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        if(j==0)
        {
            dp[i][j]=call(p,i+1,j);
            dp[i][j]=max(dp[i][j],call(p,i+1,1)-p[i]);
        }
        else 
        {
            dp[i][j]=call(p,i+1,j);
            dp[i][j]=max(dp[i][j],call(p,i+2,0)+p[i]);
        }
        return dp[i][j];
    }
    int maxProfit(vector<int>& p) {
        dp.resize(p.size(),vector<int>(2,-1));
        return call(p,0,0); 
    }
};