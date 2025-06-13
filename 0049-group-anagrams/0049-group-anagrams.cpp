class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> val;
        for(auto i:strs){
            string v(26,'0');
            for(auto j:i)v[j-'a']++;
            val[v].push_back(i);
        }
        for(auto i:val)
        ans.push_back(i.second);
        return ans;
    }
};