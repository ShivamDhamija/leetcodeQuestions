class Solution {
public:
    vector<vector<int>>dp;
    bool call(string s, string t,int i,int j) {
        if(i==s.size()&&j<=t.size())
            return true;
        if(j==t.size())
            return false;
        if(dp[i][j]!=-1)
            return dp[i][j];
        dp[i][j]=0;
        if(s[i]==t[j])
            dp[i][j]=call(s,t,i+1,j+1);
        dp[i][j]|=call(s,t,i,j+1);
        //cout<<i<<" "<<j<<" "<<dp[i][j]<<endl;
        return dp[i][j];
    }
    bool isSubsequence(string s, string t) {
        dp.resize(s.size(),vector<int>(t.size(),-1));
        return call(s,t,0,0);
     
    }
};