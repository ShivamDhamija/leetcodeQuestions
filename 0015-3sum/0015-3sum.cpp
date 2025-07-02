class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>a;
        for(int i=0;i<nums.size();i++){
            if(i>0&&nums[i-1]==nums[i])continue;
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                    a.push_back({nums[i],nums[j],nums[k]});
                    while(j<k&&nums[j]==nums[++j]);
                    while(j<k&&nums[k]==nums[--k]);
                }
                else if(nums[i]+nums[k]+nums[j]<0)j++;
                else k--;
            }
        }
        return a;
    }
};