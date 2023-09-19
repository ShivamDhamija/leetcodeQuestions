class Solution {
public:
    int firstCompleteIndex(vector<int>& a, vector<vector<int>>& m) {
        vector<int>c(m[0].size(),m.size());
        vector<int>r(m.size(),m[0].size());
        unordered_map<int,vector<int>>map;
        for(int i=0;i<m.size();i++)
            for(int j=0;j<m[0].size();j++)
            {
                vector<int>v={i,j};
                map[m[i][j]]=v;
            }
        for(int i=0;i<a.size();i++)
        {
            int R=map[a[i]][0],C=map[a[i]][1];
            c[C]--;
            r[R]--;
            if(c[C]==0||r[R]==0)return i;
        }
        return 0;
    }
};