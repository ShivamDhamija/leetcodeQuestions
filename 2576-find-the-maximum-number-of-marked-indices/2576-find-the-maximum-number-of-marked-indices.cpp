class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
    int i = 0, n = nums.size();
    sort(begin(nums), end(nums));
    for (int j = n - n / 2; j < n; ++j)
        i += 2 * nums[i] <= nums[j];
    return i * 2;
}
};