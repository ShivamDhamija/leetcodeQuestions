class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        map<vector<int>,vector<string>>s;
        vector<vector<string>>v;
        for(int i=0;i<str.size();i++ )
        {
            vector<int>a(26,0);
            for(int j=0;j<str[i].size();j++)
            {
                a[str[i][j]-'a']++;
            }
            s[a].push_back(str[i]);
        }
        for(auto i:s)
        {
            v.push_back(i.second);
        }
        return v;
    }
};