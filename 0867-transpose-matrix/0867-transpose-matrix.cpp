class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        vector<vector<int>>a(m[0].size(),vector<int>(m.size()));
        for(int i=0;i<m[0].size();i++)
            for(int j=0;j<m.size();j++)
                a[i][j]=m[j][i];
        return a;
    }
};