class Solution {
public:
    int sumCounts(vector<int>& n) {
        int a=0;
        for(int i=0;i<n.size();i++)
        {
            unordered_set<int>s;
            for(int j=i;j<n.size();j++)
            {
                s.insert(n[j]);
                a+=s.size()*s.size();
            }
        }
            return a;
    }
};
