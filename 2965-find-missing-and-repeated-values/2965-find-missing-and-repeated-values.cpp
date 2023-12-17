class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& g) {
        int n=g.size(),a=0,b=0;
        n=n*n;
        vector<int>v(n+1);
        for(auto i:g)
            for(auto j:i)
            {v[j]++;a=v[j]==2?j:a;}
        for(int i=1; i<v.size();i++)
            b=v[i]==0?i:b;
        return {a,b};
    }
};