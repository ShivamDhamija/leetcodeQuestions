class Solution {
public:
     vector<vector<int>>dp;
    int call(vector<int>&p,int i,int j)
    {
        if(i==p.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
       // cout<<value<<" ";
        if(j==0)
        {
            dp[i][j]=call(p,i+1,0);
            dp[i][j]=max(dp[i][j],call(p,i+1,1)-p[i]);
        }
        else if(j==1)
        {
            dp[i][j]=call(p,i+1,0)+p[i];
            dp[i][j]=max(dp[i][j],call(p,i+1,j));
        }
        return dp[i][j];
    }
    int maxProfit(vector<int>& p) {
        dp.resize(p.size(),vector<int>(3,-1));
        return call(p,0,0);
    }
};