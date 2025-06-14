class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0,sum=0;
        unordered_map<int,int>map;
        for(auto i:nums)
        {
            sum+=i;
            if(sum==k)ans++;
            ans+=map[sum-k];
            map[sum]++;
        }
        return ans;
    }
};