class Solution {
public:
    static bool s(pair<string,int>a,pair<string,int>b)
    {
        return a.second >= b.second;
    }
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        
        vector<pair<string,int>>v;
        
        for(int i=0;i<n.size();i++)
        {
            v.push_back({n[i],h[i]});
        }
        sort(v.begin(),v.end(),s);
        vector<string>ans;
        
        for(auto i:v)
            ans.push_back(i.first);
        return ans;
    }
};