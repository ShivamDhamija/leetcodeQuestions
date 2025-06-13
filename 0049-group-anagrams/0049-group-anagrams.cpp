class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> val;
        for(auto i:strs){
            string v=i;
            sort(v.begin(),v.end());
            val[v].push_back(i);
        }
        for(auto i:val)
        ans.push_back(i.second);
        return ans;
    }
};