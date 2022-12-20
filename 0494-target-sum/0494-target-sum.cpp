class Solution {
public:
    vector<vector<int>>v;
    int call(vector<int>&n,int t,int s,int i)
    {
        if(i==n.size())
        {
            return t==s;
        }
        if(v[i][s+1000]!=-1)
            return v[i][s+1000];
        int ans=call(n,t,s+n[i],i+1);
        ans+=call(n,t,s-n[i],i+1);
        
        return v[i][s+1000]= ans;
    }
    int findTargetSumWays(vector<int>& n, int t) {
       v.resize(n.size(),vector<int>(2500,-1));
        return call(n,t,0,0);
    }
};