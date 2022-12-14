class Solution {
public:
     vector<vector<long long>>dp;
    long long call(vector<int>&p,int i,int j)
    {
        if(i==p.size())
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
       // cout<<value<<" ";
        if(j==0)
        {
            dp[i][j]=call(p,i+1,0);
            long long d=call(p,i+1,1)+p[i];
            if(dp[i][j]<d)
                dp[i][j]=d;
        }
        else if(j==1)
        {
            dp[i][j]=call(p,i+1,0)-p[i];
            long long d=call(p,i+1,j);
            if(dp[i][j]<d)
                dp[i][j]=d;
        }
        return dp[i][j];
    }
    long long maxAlternatingSum(vector<int>& p) {
        dp.resize(p.size(),vector<long long>(3,-1));
        return call(p,0,0);
    }
};