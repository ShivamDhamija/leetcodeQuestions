class Solution {
public:
    int countNegatives(vector<vector<int>>& g) {
        int ans=0,i=g[0].size()-1,j=0;
        while(j<g.size())
        {
            while(i>=0&&g[j][i]<0)
                i--;
            ans+=g[0].size()-i-1;
            j++;
        }
        return ans;
    }
};