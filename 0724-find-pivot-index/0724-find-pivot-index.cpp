class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int a=0,s=0,l=0;
        for(auto i:nums)s+=i;
        for(int i=0;i<nums.size();i++){
            s-=nums[i];
            if(s==l)return i;
            l+=nums[i];
        }
        return -1;
    }
};