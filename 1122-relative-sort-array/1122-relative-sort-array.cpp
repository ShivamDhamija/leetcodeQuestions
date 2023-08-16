class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
        map<int,int>m;
        vector<int>ans;
        for(auto i:a1)
            m[i]++;
        for(auto i:a2)
        {
            int t=m[i];
            while(t--)
            ans.push_back(i);
            m.erase(i);
        }
        for(auto i:m)
            while(i.second>0)
            {
                ans.push_back(i.first);
                i.second--;
            }
        return ans;
    }
};