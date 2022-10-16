class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        
        for(int i=0;i<n;i++)
        {
            vector<int>v;
            for(int j=0;j<m;j++)
            {
                if(i+j<n)
                v.push_back(mat[j][i+j]);
            }
            sort(v.begin(),v.end());
            
            for(int j=0;j<m;j++)
            {
                if(i+j<n)
                mat[j][i+j]=v[j];
            }
        }
          for(int i=0;i<m;i++)
        {
            vector<int>v;
            for(int j=0;j<n;j++)
            {
                if(i+j<m)
                v.push_back(mat[i+j][j]);
            }
            sort(v.begin(),v.end());
            
            for(int j=0;j<n;j++)
            {
                if(i+j<m)
                mat[i+j][j]=v[j];
            }
        }
        
        return mat;
    }
};