class Solution {
public:
    int longestSquareStreak(vector<int>& n) {
        unordered_set<int>s;
        int ans=-1;
        int m=0;
        for(auto i:n)
        {
            m=max(m,i);
            s.insert(i);
        }
        vector<int>vis(m+1);
        for(int i=m;i>=2;i--)
        if(vis[i]==0)
        {
            int j=i;
            int v=0;
            while(j>=2&&s.find(j)!=s.end())
            {
                v++;
                vis[j]=1;
                int t=sqrt(j);
                if(t*t!=j)break;
                j=t;
            }
            ans=max(ans,v);
           // vis[i]=1;
        }
        
        return ans==1?-1:ans;
    }
};