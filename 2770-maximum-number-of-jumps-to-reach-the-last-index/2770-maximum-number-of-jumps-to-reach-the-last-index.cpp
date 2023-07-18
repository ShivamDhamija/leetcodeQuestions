class Solution {
public:
    vector<int>dp;
    int can(vector<int>& n, int t, int i)
    {
        
        if(i==n.size()-1)
        {           
            return 0;
        }
        if(dp[i]!=-1)
            return dp[i];
        int ans=INT_MIN;
        for(int j=i+1;j<n.size();j++)
        {
            if(abs(n[j]-n[i])<=t)
            {
               ans = max( ans, can(n,t,j)+1 );
            }
            
        }
        return dp[i] = ans;
    }
    int maximumJumps(vector<int>& n, int t) {
        dp.resize(n.size(),-1);
         can(n,t,0);
        return dp[0]>0?dp[0]:-1;
    }
};