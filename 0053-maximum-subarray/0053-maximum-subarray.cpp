class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=INT_MIN,s=0;
        for(auto i:nums){
            s+=i;
            s=max(s,i);
            a=max(a,s);
        }
        return a;
    }
};