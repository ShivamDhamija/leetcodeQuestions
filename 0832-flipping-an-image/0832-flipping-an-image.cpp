class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v) {
        for(int i=0;i<v.size();i++){
            int n=v[0].size();
            for(int j=0;j<(n+1)/2;j++)
            {
                int a=v[i][j];
                int b=v[i][n-j-1];                
                v[i][j]=1-b;
                v[i][n-j-1]=1-a;
            }
        }
        return v;
    }
};