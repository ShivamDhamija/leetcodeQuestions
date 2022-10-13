class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        unordered_map<int,vector<int>>m;
        vector<vector<int>>ans;
        
        vector<int>v;
        for(int i=0;i<g.size();i++)
        {
            int j=g[i];
            if(m.find(j)==m.end())
                m[j]=v;
            m[j].push_back(i);
            if(j==m[j].size())
            {
                ans.push_back(m[j]);
                m[j]=v;
            }
        }
        
        return ans;
    }
};