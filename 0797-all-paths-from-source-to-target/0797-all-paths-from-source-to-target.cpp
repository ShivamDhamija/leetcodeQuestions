class Solution {
public:
    vector<vector<int>>ans;
    vector<int>vis;
    void dfs(vector<vector<int>>& g ,int i,vector<int>&v  )
    {
        
        v.push_back(i);
        if(i==g.size()-1)
        {
            
            ans.push_back(v);
            v.pop_back();
            return ;
        }
        if(vis[i]){v.pop_back();return ;}
        vis[i]=1;
        
        for(int j=0;j<g[i].size();j++)
        {
            
            dfs(g,g[i][j],v);
            
        }
        v.pop_back();
        vis[i]=0;
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vis.resize(graph.size());
        
        vector<int>v;
        dfs(graph,0,v);
    
        return ans;
    }
    
};