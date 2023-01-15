class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& q) {
        vector<vector<int>>v(n,vector<int>(n));
        vector<int>r(n),c(n);
        for(auto a:q)
        {
            for(int i=a[0];i<=a[2];i++)
            {
                v[i][a[1]]++;
               if(a[3]+1!=n) v[i][a[3]+1]--;
            }
            
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<n;j++)
            {
                v[i][j]+=v[i][j-1];
            }
        }
        return v;
    }
};