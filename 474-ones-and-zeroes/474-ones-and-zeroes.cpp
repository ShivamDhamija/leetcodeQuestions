class Solution {
    vector<vector<vector<int>>>dp ;
public:
    int ans=0;
    
    int call( vector<vector<int>>&v,int m,int n,int i)
    {
        if(v.size()==i){
            return 0;
        }
        
        if(dp[m][n][i]!=-1)return dp[m][n][i];
       // ans=max(val,ans);
        int ma=call(v,m,n,i+1);
        if(m-v[i][0]>=0&&n-v[i][1]>=0)
        ma=max(ma,call(v,m-v[i][0],n-v[i][1],i+1)+1);
        return dp[m][n][i]=ma;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        
        vector<vector<int>>v(strs.size(),vector<int>(2,0));
        for(int i=0;i<strs.size();i++)
        {
            for(int j=0;j<strs[i].size();j++)
            {
                if(strs[i][j]=='0')
                    v[i][0]++;
                else
                    v[i][1]++;
            }
           // cout<<v[i][0]<<" "<<v[i][1]<<endl;
        }
       
        dp.resize(m+1,vector<vector<int>>(n+1,vector<int>(strs.size(),-1)));
        
        return call(v,m,n,0);
        
        
        
    }
};