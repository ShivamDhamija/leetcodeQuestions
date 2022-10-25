class Solution {
public:
    vector<int> findingUsersActiveMinutes(vector<vector<int>>& l, int k) {
        unordered_map<int,unordered_set<int>>m;
        vector<int>ans(k);
        unordered_set<int>s;
        for(int i=0;i<l.size();i++)
        {
            int a=l[i][0],b=l[i][1];
            if(m.find(a)==m.end())
                m[a]=s;
            m[a].insert(b);
        }
        for(auto i:m)
        {
            ans[i.second.size()-1]++;
        }
       return ans; 
    }
};