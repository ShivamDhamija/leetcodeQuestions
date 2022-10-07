class Solution {
public:
    struct st{
        int fi,th;
        st(int i,int k)
        {
            fi=i;th=k;
        }
    };
    struct comp{
    bool operator()(st a,st b)
    {
        return a.th>b.th;
    }
    };
    
    int networkDelayTime(vector<vector<int>>& t, int n, int k) {
        priority_queue<st,vector<st>,comp>p;
        
        int ans=-1;
        
        
        vector<vector<pair<int,int>>>v(n+1);
        vector<bool>vis(n+1);
        vis[k]=1;
        for(int i=0;i<t.size();i++)
        {
            int a=t[i][0];
            int b=t[i][1];
            int c=t[i][2];
            v[a].push_back({b,c});
            if(a==k)
                {p.push({b,c});}
        }
        
        
        while(!p.empty())
        {
            st f=p.top();
            p.pop();
            int a=f.fi;
           
            int c=f.th;
            if(vis[a])continue;
            ans=max(ans,c);
            vis[a]=1;
            for(int i=0;i<v[a].size();i++)
            {
                int x=v[a][i].first;
                int y=v[a][i].second;
                if(!vis[x])
                {
                    
                    p.push({x,y+c});
                    
                }
            }
        }
        
        
        
         for(int i=1;i<=n;i++)
         if(!vis[i])return -1;
        return ans;
    }   
};







