class Solution {
public:
    int maximizeWin(vector<int>& p, int k) {
        
        int n=p.size(),s=0;
        int ans=0;
        vector<int>v(n+1);
        for(int i=0;i<n;i++)
        {
            while(p[i]-p[s]>k)
                s++;
            ans=max(ans,i-s+1+v[s]);
                v[i+1]=max(v[i],i-s+1);
        }    
        return ans;
        
    }
};