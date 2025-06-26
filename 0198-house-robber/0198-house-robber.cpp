class Solution {
public:
    unordered_map<int,int>m;
    int rob(vector<int>& nums,int i=0) {
        if(i>=nums.size())return 0;
        if(m.find(i)!=m.end())return m[i];
        return m[i]=max(rob(nums,i+1),rob(nums,i+2)+nums[i]);
    }
};