class Solution {
public:
    vector<vector<int>>v;
    vector<bool>vis;
    vector<int>ans;
    vector<vector<int>>no;
    
    void call(int a)
    {
        if(vis[a])return ;
        vis[a]=true;
        for(int i=1;i<5;i++)
        {
            if(no[a][i]==0)
            {
                no[a][i]=1;
                ans[a]=i;
                for(auto j:v[a])
                    no[j][i]=1;
                for(auto j:v[a])
                    call(j);
            }
        }
    }
    
    vector<int> gardenNoAdj(int n, vector<vector<int>>& p) {
        v.resize(n,vector<int>());
        no.resize(n,vector<int>(5,0));
        ans.resize(n);
        vis.resize(n,false);
        for(int i=0;i<p.size();i++)
        {
            int a=p[i][0]-1,b=p[i][1]-1;
            v[a].push_back(b);
            v[b].push_back(a);
            
        }
        for(int i=0;i<n;i++)
        call(i);
        return ans;
    }
};