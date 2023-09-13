class Solution {
public:
    int addMinimum(string w) {
        int a=0,p=0;
        vector<vector<int>>v(50,vector<int>(3));
        v[0][w[0]-'a']++;
        for(int i=1;i<w.size();i++)
        {
            if(w[i]<=w[i-1])
                p++;
            v[p][w[i]-'a']++;
        }
        for(int i=0;i<=p;i++)
        {
            for(int j=0;j<3;j++)
                if(v[i][j]==0)
                    a++;
        }
        return a;
    }
};