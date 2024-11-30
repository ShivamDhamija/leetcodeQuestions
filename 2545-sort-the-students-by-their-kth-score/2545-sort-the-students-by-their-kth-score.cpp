class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        vector<vector<int>>v;
        vector<pair<int,int>>p;
        for(int  i=0;i<s.size();i++)
            p.push_back({s[i][k],i});
        sort(p.begin(),p.end());
        for(int i=p.size()-1;i>=0;i--)
        {
            v.push_back(s[p[i].second]);
        }
        return v;
    }
};