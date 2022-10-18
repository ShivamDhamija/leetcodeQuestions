class Solution {
public:
    int maxSum(vector<vector<int>>& g) {
        int m=g.size();
        int n=g[0].size();
        int ans=INT_MIN;
        for(int i=0;i<m-2;i++)
        {
            int s1=0,s2=0;
            for(int j=0;j<2;j++)
            {
                s1+=g[i][j];
                s2+=g[i+2][j];
            }
            for(int j=2;j<n;j++)
            {
                s1+=g[i][j];
                s2+=g[i+2][j];
                ans=max(ans,s1+s2+g[i+1][j-1]);
                s1-=g[i][j-2];
                s2-=g[i+2][j-2];
                
            }
            
        }
       
       
        
        
        
        return ans;
        
    }
};









