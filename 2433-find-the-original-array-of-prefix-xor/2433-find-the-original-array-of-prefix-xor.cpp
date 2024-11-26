class Solution {
public:
    vector<int> findArray(vector<int>& v) {
        vector<int>p(v.size());
        p[0]=v[0];
        for(int i=1;i<v.size();i++)
            p[i]=v[i]^v[i-1];
        return p;
    }
};