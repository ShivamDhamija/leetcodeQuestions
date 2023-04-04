class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size()/2;j++)
                swap(m[i][j],m[i][m[0].size()-1-j]);
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size()-i;j++)
                swap(m[i][j],m[m[0].size()-1-j][m[0].size()-1-i]);
    }
};