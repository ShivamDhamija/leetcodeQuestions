class Solution {
public:
    long long findScore(vector<int>& n) {
        long long ans=0;
        vector<int>vis(n.size(),-1);
        vector<vector<int>>v;
        for(int i=0;i<n.size();i++)
            v.push_back({n[i],i});
        sort(v.begin(),v.end());
        int i=0;
        while(i<v.size())
        {
            int a=v[i][0],b=v[i][1];
            if(vis[b]==-1)
            {
                if(b>0)
                    vis[b-1]=0;
                vis[b]=0;
                if(b<v.size()-1)
                    vis[b+1]=0;
                ans+=a;
            }
            i++;
        }
      return ans;
    }
};