#define long long ll

class Solution {
public:
    vector<int>v;
    vector<int>dp;
    int call(int n)
    {
        if(n==0)
            return 0;
        if(n<0)return INT_MAX-1;
        if(dp[n]!=-1)return dp[n];
        dp[n]=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            dp[n]=min(dp[n],call(n-v[i])+1);
        }
        
        return dp[n];
    }
    int numSquares(int n) {
        for(int i=1;i<=100;i++)
        {
            v.push_back(i*i);
        }
        dp.resize(n+1,-1);
        int j= call(n);
        if(j==INT_MAX)return 0;
        return j;
    }
};