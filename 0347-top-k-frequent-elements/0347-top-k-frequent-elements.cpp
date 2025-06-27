class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>>v(nums.size()+1);
        vector<int>a;
        unordered_map<int,int>m;
        for(auto i:nums)m[i]++;
        for(auto i:m)v[i.second].push_back(i.first);
        for(int i=v.size()-1;i>=0;i--){
            for(auto j:v[i])
            {
                a.push_back(j);
                if(a.size()==k)return a;
            }
        }
        return a;
    }
};