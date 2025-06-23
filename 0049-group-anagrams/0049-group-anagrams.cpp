class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        vector<vector<string>>a;
        for(auto i:strs){
            string s(26,0);
            for(auto j:i)s[j-'a']++;
            m[s].push_back(i);
        }
        for(auto i:m)a.push_back(i.second);
        return a;
    }
};