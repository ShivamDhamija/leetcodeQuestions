class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
    int res = 0;
    unordered_map<int, int> m;
    for (int n : nums) {
        unordered_map<int, int> m1;
        if (k % n == 0) {
            ++m[n];    
            for (auto &[d, cnt] : m)
                m1[lcm(d, n)] += cnt;
            res += m1[k];
        }
        swap(m, m1);
    }
    return res;
}
};