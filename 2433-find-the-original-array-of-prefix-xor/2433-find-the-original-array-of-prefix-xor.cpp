class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        int pr=0;
        vector<int> v;
        for(int i=0;i<p.size();i++)
        {
            int c=pr^p[i];
            v.push_back(c);
            pr=c^pr;
        }
        return v;
    }
};