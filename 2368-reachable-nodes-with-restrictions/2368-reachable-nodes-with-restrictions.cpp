class Solution {
public:
    int ans=0;
    unordered_map<int,vector<int>>m;
    unordered_map<int,bool>vis;
    set<int>r;
    void call(int i)
    {
        if(vis[i]||r.find(i)!=r.end())
            return ;
        vis[i]=true;
        ans++;
        for(auto j:m[i])
        call(j);
    }
    int reachableNodes(int n, vector<vector<int>>& ed, vector<int>& re) {
        
        vector<int>v;
        for(int i=0;i<re.size();i++)
        r.insert(re[i]);
        
        for(int i=0;i<ed.size();i++)
        {
            int a=ed[i][0],b=ed[i][1];
            if(m.find(a)==m.end())
               { m[a]=v;vis[a]=false;}
            if(m.find(b)==m.end())
                {m[b]=v;vis[b]=false;}
            
            m[a].push_back(b);
            m[b].push_back(a);
        }
        
        call(0);
        
        return ans;
    }
};