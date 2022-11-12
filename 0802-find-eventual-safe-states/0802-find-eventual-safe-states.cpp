class Solution {
public:
    vector<int>ans;
    set<int>st;
    vector<vector<int>>v;
    vector<int>vis;
    
    int call(int i)
    {
        if(vis[i]!=-1)return vis[i];
        
        vis[i]=2;
        
        for(auto j:v[i])
        {
            int k=call(j);
            if(k==0||k==2)
            {
                vis[i]=0;
                break;
            }
        }
        if(vis[i]==2)
            vis[i]=1;
        return vis[i];
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& g) {
        v=g;
            vis.resize(g.size(),-1);
        for(int i=0;i<g.size();i++)
        {
            if(g[i].size()==0)
            {
                st.insert(i);
                vis[i]=1;
                continue;
            }
            if(call(i))
                st.insert(i);
        }
        
        for(auto i:st)
            ans.push_back(i);
        return ans;
    }
};