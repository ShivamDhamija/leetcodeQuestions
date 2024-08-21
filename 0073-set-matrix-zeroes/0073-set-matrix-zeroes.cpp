class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        unordered_set<int>r;
        unordered_set<int>c;
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[i].size();j++)
                if(m[i][j]==0)r.insert(i),c.insert(j);
        for(auto i:r)
            for(int j=0;j<m[i].size();j++)
                m[i][j]=0;
        for(auto j:c)
            for(int i=0;i<m.size();i++)
                m[i][j]=0;
    }
};