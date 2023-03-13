class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int res = 0;
    for (int i = 0; i < nums.size(); ++i)
        for (int j = i, cur = 1; j < nums.size() && k % nums[j] == 0; ++j) {
            cur = lcm(cur, nums[j]);
            res += cur == k;
        }
    return res;
    }
};