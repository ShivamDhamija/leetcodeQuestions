class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>val;
        for(int i=0;i<nums.size();i++){
            if(val.find(target-nums[i])!=val.end())
            return {val[target-nums[i]],i};
            val[nums[i]]=i;
        }
        return {};
    }
};