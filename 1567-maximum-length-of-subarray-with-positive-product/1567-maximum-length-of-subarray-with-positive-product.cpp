#define ll long long
ll mode =1e9+7;
class Solution {
public:
    int call(vector<int>&n,int i,int j,ll p)
    {
        int ans=0;
        
        while(i<=j)
        {
            if(p>0)
            {ans=max(ans,j-i+1);
            break;}
            p=p/n[i];
        i++;
        }
        return ans;
    }
    int getMaxLen(vector<int>& n) {
     int ans=0,i=0,j=0;
        ll p=1;
        for(;j<n.size();j++)
        {
            if(n[j]==0)
            {
                ans=max(call(n,i,j-1,p),ans);
                i=j+1;
                p=1;
            }
            else
            {
                p=((p%mode)*(n[j]%mode))%mode;
                if(p>0)
                ans=max(ans,j-i+1);
            }
           // cout<<ans<<" ";
        }
        ans=max(call(n,i,j-1,p),ans);
        return ans;   
    }
};