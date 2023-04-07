class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>v(m,vector<int>(n));
        v[0][0]=1;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
            {
                v[i][j]=v[i][j]+(i>0?v[i-1][j]:0)+(j>0?v[i][j-1]:0);
            }
        return v[m-1][n-1];
    }
};