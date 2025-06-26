class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>a;
        unordered_map<int,int>m;
        vector<vector<int>>v(nums.size()+1);
        for(auto i:nums)m[i]++;
        for(auto i:m)v[i.second].push_back(i.first);
        for(int i=v.size()-1;i>=0;i--)
        for(int j=0;j<v[i].size();j++){
            a.push_back(v[i][j]);
            if(a.size()==k)return a;
        }
        return a;
    }
};