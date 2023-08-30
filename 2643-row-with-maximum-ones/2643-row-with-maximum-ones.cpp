class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& m) {
        int a=0,n=0;
        for(int i=0;i<m.size();i++)
        {
            int t=0;
            for(int j=0;j<m[0].size();j++)
                if(m[i][j]==1)t++;
            if(t>n)
            {
                n=t;
                a=i;
            }
        }
        return {a,n};
    }
};