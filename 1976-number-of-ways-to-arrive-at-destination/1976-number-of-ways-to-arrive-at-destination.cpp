#define ll long long
long long mode=1e9+7;
class Solution {
public:
    vector<ll>dist;
    vector<ll>step;
    vector<vector<pair<ll,ll>>>v;
    vector<int>vis;
    int countPaths(int n, vector<vector<int>>& r) {
        dist.resize(n,LONG_MAX);
        step.resize(n,0);
        vis.resize(n,-1);
        v.resize(n,vector<pair<ll ,ll>>());
        for(int i=0;i<r.size();i++)
        {
            int a=r[i][0],b=r[i][1],c=r[i][2];
            v[a].push_back({b,c});
            v[b].push_back({a,c});
        }
        priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>> >q;
        q.push({0,0});
        dist[0]=0;
        step[0]=1;
        while(!q.empty())
        {

            pair<ll,ll>t=q.top();q.pop();
            ll di=t.first,i=t.second;
            if(dist[i]<di)continue;
           
            for(auto j:v[i])
            {
                ll b=j.first,a=j.second;
                if(a+di<dist[b])
                {
                    dist[b]=a+di;
                    step[b]=step[i];
                    q.push({a+di,b});
                }
                else if(a+di==dist[b])
                {
                    step[b]=(step[b]+step[i])%mode;
                }
            }
            
        }
        
        
        return step[n-1];
    }
};