class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& g) {
        int ans=0;
        for(int i=0;i<g.size();i++)
            sort(g[i].begin(),g[i].end());
        for(int j=0;j<g[0].size();j++)
        {
            int ma=0;
            for(int i=0;i<g.size();i++)
                ma=max(ma,g[i][j]);
            ans+=ma;
        }
        return ans;
    }
};