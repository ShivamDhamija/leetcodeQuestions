#define ll long long 
ll mode=1e9+7;
class Solution {
public:
    
    vector<vector<ll>>v;
    
    int call(int n,int k,int t)
    {
        if(t==0&&n==0)
            return 1;
        if(t<0||n<0)return 0;
        
        if(v[n][t]!=-1)
            return v[n][t]%mode;
        v[n][t]=0;
        for(int i=1;i<=k;i++)
            v[n][t]=(v[n][t]+(call(n-1,k,t-i))%mode)%mode;
        return v[n][t]%mode;
    }
    int numRollsToTarget(int n, int k, int t) {
        v.resize(n+1,vector<ll>(t+1,-1));
        
        return call(n,k,t);
    }
};