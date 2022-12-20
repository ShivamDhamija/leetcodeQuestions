class Solution {
public:
    int call(vector<int>&n,int t,int s,int i)
    {
        if(i==n.size())
        {
            return t==s;
        }
        int ans=call(n,t,s+n[i],i+1);
        ans+=call(n,t,s-n[i],i+1);
        
        return ans;
    }
    int findTargetSumWays(vector<int>& n, int t) {
       return call(n,t,0,0);
    }
};