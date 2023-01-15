class Solution {
public:
    long long calc(long long n) {
        long long ans = n * (n-1);
        ans /= 2;
        return ans;
    }

    long long countGood(vector<int>& nums, int k) {
        int n = nums.size();
        int i = 0, j = 0;
        long long ans = 0, curr = 0;
        unordered_map<int, long long>freq;

        while (j < n) {
            curr -= calc(freq[nums[j]]);
            freq[nums[j]]++;
            curr += calc(freq[nums[j]]);

            while (i < j && curr >= k) {
                ans += n-j;
                curr -= calc(freq[nums[i]]);
                freq[nums[i]]--;
                curr += calc(freq[nums[i]]);
                i++;
            }
            j++;
        }
        return ans;
    }
};