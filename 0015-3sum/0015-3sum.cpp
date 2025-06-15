class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-1;i++)
        {
            while(i!=0&&i<nums.size()&&nums[i-1]==nums[i])i++;
            int j=i+1,k=nums.size()-1;
            while(j<k){
                if(nums[i]+nums[j]+nums[k]==0){
                ans.push_back({nums[i],nums[j],nums[k]});
                while(nums[j]==nums[j+1]&&j<k-1)j++;
                while(nums[k]==nums[k-1]&&j-1<k-1)k--;
                j++;
                k--;
                }
                else if(nums[i]+nums[j]+nums[k]>0)k--;
                else j++;
            }
        }
        return ans;
    }
};