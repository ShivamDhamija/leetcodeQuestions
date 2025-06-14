class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        unordered_set<int>s;
        set<vector<int>>m;
        for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++)
        if(s.find(-(nums[i]+nums[j]))!=s.end())m.insert({-(nums[i]+nums[j]),nums[i],nums[j]});
        s.insert(nums[i]);} 
        for(auto i:m)ans.push_back(i);
        return ans;
    }
};