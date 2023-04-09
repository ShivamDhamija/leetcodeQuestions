class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        unordered_map<int,int>m;
        for(int i=0;i<n.size();i++)
        if(m.find(t-n[i])!=m.end())
            return {m[t-n[i]],i};
        else
            m[n[i]]=i;
            return {};
    }
};