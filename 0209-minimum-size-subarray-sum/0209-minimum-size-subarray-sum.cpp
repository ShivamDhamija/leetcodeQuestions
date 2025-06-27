class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=INT_MAX,i=0,s=0;
        for(int j=0;j<nums.size();j++){
            s+=nums[j];
            if(s<target)continue;
            while(i<=j&&s>=target){
                l=min(l,j-i+1);
                s-=nums[i];
                i++;
            }
        }
        return l==INT_MAX?0:l;
    }
};