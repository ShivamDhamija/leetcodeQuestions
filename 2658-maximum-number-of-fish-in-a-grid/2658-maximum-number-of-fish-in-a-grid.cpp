class Solution {
public:
    vector<vector<int>>dp;
   int call(int i,int j,int I,int J,vector<vector<int>>&g)
   {
       if(i<0||i>=I||j<0||j>=J||g[i][j]==0||dp[i][j]==-2)return 0;
       if(dp[i][j]!=-1)return dp[i][j];
       int a=g[i][j];    
       dp[i][j]=-2;
       a+=call(i-1,j,I,J,g);
       a+=call(i+1,j,I,J,g);
       a+=call(i,j-1,I,J,g);
       a+=call(i,j+1,I,J,g);
       
       return a;
   }
    int findMaxFish(vector<vector<int>>& g) {
        dp.resize(g.size(),vector<int>(g[0].size(),-1));
        int ans=0;
        int I=g.size(),J=g[0].size();        
        for(int i=0;i<I;i++)
            for(int j=0;j<J;j++)
                ans=max(ans,call(i,j,I,J,g));
        return ans;
    }
};