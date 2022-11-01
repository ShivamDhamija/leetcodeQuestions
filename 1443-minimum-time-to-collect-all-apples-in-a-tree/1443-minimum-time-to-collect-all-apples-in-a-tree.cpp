class Solution {
public:
    unordered_set<int>s;
    unordered_set<int>a;
    vector<vector<int>>v;
    vector<bool>vis;
    void call(int i,vector<int>t)
    {
        if(vis[i])return;
        vis[i]=true;
        if(a.find(i)!=a.end())
        {
            for(auto j:t)
                s.insert(j);
            vector<int>b;
            t=b;
        }
        for(auto j:v[i])
        {
            t.push_back(j);
            call(j,t);
            t.pop_back();
        }
    }
    int minTime(int n, vector<vector<int>>& e, vector<bool>& h) {
        for(int  i=0;i<h.size();i++)
            if(h[i])
                a.insert(i);
        v.resize(n,vector<int>());
        vector<int>t;
        vis.resize(n,false);
        for(auto i:e)
        {
            int a=i[0],b=i[1];
            if(v[a].size()==0)
                v[a]=t;
            v[a].push_back(b);
            if(v[b].size()==0)
                v[b]=t;
            v[b].push_back(a);
        }
       
        call(0,t);
        return s.size()*2;
        
    }
};