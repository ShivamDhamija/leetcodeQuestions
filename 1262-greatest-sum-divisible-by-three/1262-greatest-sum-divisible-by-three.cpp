class Solution {
public:
     int maxSumDivThree(vector<int>& nums) {
        int dp[3] = {};
        int dptmp[3] = {};
        
        for (int n : nums){
            for (int j = 0; j < 3; j++){
                int r = (n+dp[j])%3;
                dptmp[r] = max(dptmp[r], n+dp[j]);
            }
            for (int r = 0; r < 3; r++)
                dp[r] = max(dp[r], dptmp[r]);
        }
        
        return dp[0];
    }
};