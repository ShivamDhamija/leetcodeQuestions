class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {
        int ans=0;
        for(int i=0;i<m.size();i++)
        {
            ans+=m[i][i]+m[i][m.size()-1-i];
        }
        if(m.size()%2!=0)
            ans-=m[m.size()/2][m.size()/2];
        return ans;
    }
};