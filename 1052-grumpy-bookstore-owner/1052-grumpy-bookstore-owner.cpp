class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int ans=0;
        
        for(int i=0;i<c.size();i++)
            if(g[i]==0)
                ans+=c[i];
        int ans2=ans;
        for(int i=0;i<c.size();i++)
        {
            if(m<=i&&g[i-m]==1)
                ans-=c[i-m];
            if(g[i]==1)
                ans+=c[i];
            ans2=max(ans,ans2);
                //cout<<ans2<<" ";
        }
        
        
        return ans2;
    }
};