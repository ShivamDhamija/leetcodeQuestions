class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        for(int i=0;i<m.size();i++)
            for(int j=i;j<m.size();j++)
                swap(m[i][j],m[j][i]);
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m.size()/2;j++)
                swap(m[i][j],m[i][m.size()-1-j]);
    }
};