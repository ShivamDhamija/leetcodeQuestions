class Solution {
public:
    void call(vector<vector<int>>&a,unordered_map<int,int>&m)
    {
        vector<int>v;
        for(auto I:m)
        {
           int i=I.first;
            m[i]--;   
            v.push_back(i);
        }        
        for(auto i:v)
        {
            if(m[i]==0)
                m.erase(i);
        }
        a.push_back(v);
    }
    vector<vector<int>> findMatrix(vector<int>& n) {
        unordered_map<int,int>m;
        vector<vector<int>>a;
        for(auto i:n)
            m[i]++;
        while(m.size()>0)
            call(a,m);
        return a;
    }
};