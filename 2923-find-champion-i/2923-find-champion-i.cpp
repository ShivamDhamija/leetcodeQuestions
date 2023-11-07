class Solution {
public:
    int findChampion(vector<vector<int>>& g) {
        for(int i=0;i<g.size();i++)
        {
            int c=0;
            for(int j=0;j<g.size();j++)c+=(g[i][j]==1);
            if(c==g.size()-1)return i;
        }
        return -1;
    }
};