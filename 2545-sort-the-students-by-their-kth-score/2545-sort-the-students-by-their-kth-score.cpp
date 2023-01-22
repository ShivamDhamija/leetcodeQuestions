class Solution {
public:
   
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<pair<int,int>>v;
        for(int i=0;i<s.size();i++)
        {
            v.push_back({s[i][k],i});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        vector<vector<int>>ans;
        for(int i =0;i<s.size();i++)
        {
            int j=v[i].second;
            ans.push_back(s[j]);
        }
        return ans;
    }
};