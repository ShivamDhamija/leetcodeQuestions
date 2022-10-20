class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& g) {
        vector<vector<int>>ans;
        
        for(int i=0;i<g.size();i++)
        {
            
            for(int j=0;j<g.size()-2;j++)
            {
                int ma=INT_MIN;
                for(int k=j;k<j+3&&k<g.size();k++)
                    ma=max(ma,g[i][k]);
                g[i][j]=ma;
            }
        }
        for(int i=0;i<g.size()-2;i++)
        {
            vector<int>v;
            for(int j=0;j<g.size()-2;j++)
            {
                int ma=INT_MIN;
                for(int k=i;k<i+3&&k<g.size();k++)
                    ma=max(ma,g[k][j]);
                g[i][j]=ma;
                v.push_back(ma);
            }
            ans.push_back(v);
        }
        
        return ans;
    }
};