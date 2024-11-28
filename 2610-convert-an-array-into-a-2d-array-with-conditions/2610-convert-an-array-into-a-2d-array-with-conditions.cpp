class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& n) {
        vector<vector<int>>a;
        unordered_map<int,int>m;
        for(auto i:n)m[i]++;        
        while(m.size()>0){
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
        return a;
    }
};