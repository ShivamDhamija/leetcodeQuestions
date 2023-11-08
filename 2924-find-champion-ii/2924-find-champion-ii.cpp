class Solution {
public:
    int findChampion(int n, vector<vector<int>>& e) {
        vector<int>v(n);
        for(int i=0;i<e.size();i++)
            v[e[i][1]]=-1;
        int c=0,b=-1;
        for(int i=0;i<n;i++)
            if(v[i]==0)
            {
                c++;
                b=i;
            }
        if(c==1)return b;
        return -1;
    }
};