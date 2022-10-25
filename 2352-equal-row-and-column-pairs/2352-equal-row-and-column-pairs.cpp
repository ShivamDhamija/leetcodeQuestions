class Solution {
public:
    int equalPairs(vector<vector<int>>& g) {
        map<vector<int>,int>m;
        for(int i=0;i<g.size();i++)
        {
            m[g[i]]++;
        }
        int ans=0;
        
        for(int i=0;i<g.size();i++)
        {
            vector<int>v;
            for(int j=0;j<g.size();j++)
                v.push_back(g[j][i]);
            ans+=m[v];
                
        }
        
        return ans;
    }
};