#define ll long long 
ll mode =1e9+7;
class Solution {
public:
    int call(int m,int n,int r,int c,int ma)
    {
        if(r<0||r>=m||c<0||c>=n)
            return 1;
        if(ma==0)return 0;
        if(dp[ma][r][c]!=-1)
            return dp[ma][r][c];
        int ans;
        
        ans=call(m,n,r-1,c,ma-1);
        ans=(ans+call(m,n,r+1,c,ma-1))%mode;
        ans=(ans+call(m,n,r,c-1,ma-1))%mode;
        ans=(ans+call(m,n,r,c+1,ma-1))%mode;
        
        
        return dp[ma][r][c]=ans%mode;
    }
    vector<vector<vector<int>>>dp;
    int findPaths(int m, int n, int ma, int r, int c) {
        dp.resize(ma+1,vector<vector<int>>(m,vector<int>(n,-1)));
        return call(m,n,r,c,ma);
    }
};