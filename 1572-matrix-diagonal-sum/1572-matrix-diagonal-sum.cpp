class Solution {
public:
    int diagonalSum(vector<vector<int>>& m) {        
        int a=0;
        for(int i=0;i<m.size();i++)            
            {
                if(i==(m.size()-i-1))
                    a+=m[i][i];
                else
                    a+=m[i][i]+m[i][m.size()-1-i];
            }
        return a;
    }
};