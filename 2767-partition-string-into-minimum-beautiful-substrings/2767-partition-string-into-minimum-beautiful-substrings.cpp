class Solution {
public:
    unordered_set<int> p5{ 1, 5, 25, 125, 625, 3125, 15625 };    
int minimumBeautifulSubstrings(const string & s) {
    vector<int> dp(s.size() + 1, s.size() + 1);
    dp[s.size()] = 0;
    for (int i = s.size() - 1; i >= 0; --i) {
        for (int j = i, val = 0; s[i] != '0' && j < s.size(); ++j) {
            val = val * 2 + s[j] - '0';
            if (p5.count(val))
                dp[i] = min(dp[i], 1 + dp[j + 1]);
        }
    }
    return dp[0] > s.size() ? -1 : dp[0];
}
};