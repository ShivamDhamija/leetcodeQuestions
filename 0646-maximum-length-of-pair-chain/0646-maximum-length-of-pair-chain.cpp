class Solution {
public:
    unordered_map<int,int>dp;
    unordered_map<int,int>p;
    int call(int i)
    {
        if(p.find(i)==p.end())
            return 0;
        if(dp.find(i)!=dp.end())
            return dp[i];
        int ans=1;
        for(int j=p[i]+1;j<=1000;j++)
        ans=max(ans,call(j)+1);
        return dp[i]=ans;
    }
    int findLongestChain(vector<vector<int>>& n) {
        for(int i=0;i<n.size();i++)
        {
            int a=n[i][0],b=n[i][1];
            if(p.find(a)==p.end())
                p[a]=b;
            p[a]=min(p[a],b);
                
        }
        int ans=0;
        for(int i=-1000;i<=1000;i++)
        {
            ans=max(ans,call(i));
        }
        return ans; 
    }
};