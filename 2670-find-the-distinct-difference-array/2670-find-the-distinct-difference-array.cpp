class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& n) {
        unordered_map<int,int>m;
        for(auto i:n)
            m[i]++;
        vector<int>v;
        unordered_set<int> a;
        for(auto i:n)
        {
            m[i]--;
            a.insert(i);
            if(m[i]==0)
               m.erase(i);
            
            v.push_back(a.size()-m.size());
        }
        return v;
    }
};