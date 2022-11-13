class Solution {
public:
    vector<vector<int>>dp;
    vector<vector<pair<int,int>>>v;
    vector<bool>vis;
    struct comp {
    bool operator()(pair<int,int>a,pair<int,int>b)
    {
     
        return a.second>b.second;
    }
    };
    void bfs(int i)
    {
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>q;
        q.push({i,0});
        
        while(!q.empty())
        {
            pair<int,int>f=q.top();q.pop();
            int a=f.first,b=f.second;
            if(dp[i][a]!=-1)continue;
            dp[i][a]=b;
            for(auto j:v[a])
            {
                
                q.push({j.first,j.second+b});
            }
        }
        
    }
    int findTheCity(int n, vector<vector<int>>& e, int th) {
        dp.resize(n,vector<int>(n,-1));
        v.resize(n,vector<pair<int,int>>());
        
        for(auto i:e)
        {
            int a=i[0],b=i[1],c=i[2];
            v[a].push_back({b,c});
            v[b].push_back({a,c});
        }
        int mi=INT_MAX,j=-1;
        for(int i=0;i<n;i++)
        {
            bfs(i);
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]>0&&dp[i][j]<=th)
                    count++;
                //cout<<dp[i][j]<<" ";
            }
            // cout<<endl<<count<<endl;
            if(count<=mi)
            {
                mi=count;
                j=i;
            }
        }
        return j;
    }
};