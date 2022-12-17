class Solution {
public:
    vector<int>dp;
    int call(vector<int>&n,int t)
    {
        if(t==0)return 1;
        if(t<0)
            return 0;
        if(dp[t]!=-1)
            return dp[t];
        dp[t]=0;
         // dp[t]=call(n,t,i+1);
        for(int j=0;j<n.size();j++)
        {
            dp[t]+=call(n,t-n[j]);
        }
        return dp[t];
    }
    int combinationSum4(vector<int>& n, int t) {
        dp.resize(t+1,-1);
        return call(n,t);
    }
};