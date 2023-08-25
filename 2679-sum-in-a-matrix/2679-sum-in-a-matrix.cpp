class Solution {
public:
    int matrixSum(vector<vector<int>>& n) {
        for(int i=0;i<n.size();i++)
            sort(n[i].begin(),n[i].end());
        int a=0;
        for(int j=0;j<n[0].size();j++)
        {
            int m=0;
            for(int i=0;i<n.size();i++)
                m=max(m,n[i][j]);
            a+=m;
        }
        return a;
    }
};