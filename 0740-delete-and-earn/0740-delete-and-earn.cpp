class Solution {
public:
    unordered_map<int,int>m;
    vector<int>dp;
    int ma;
    int call(int i)
    {
        if(i>ma)
            return 0;
        if(dp[i]!=-1)
            return dp[i];
        int ans=0;
        if(m.find(i)!=m.end())
            ans=call(i+2)+m[i];
        ans=max(ans,call(i+1));
        return dp[i]=ans;
    }
    int deleteAndEarn(vector<int>& n) {
        ma=0;
        
        for(auto i:n)
        {
            ma=max(ma,i);
            m[i]+=i;
        }
        dp.resize(ma+1,-1);
        return call(1);
    }
};