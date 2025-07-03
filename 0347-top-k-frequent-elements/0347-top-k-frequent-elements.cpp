class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(auto i:nums)m[i]++;
        vector<vector<int>>v(nums.size()+1);
        for(auto i:m)v[i.second].push_back(i.first);
        vector<int>a;
        for(int i=v.size()-1;i>=0;i--){
            for(int j=0;j<v[i].size();j++)
            {
                a.push_back(v[i][j]);
                if(--k==0)return a;
            }
        }
        return a;
    }
};