class Solution {
public:
   
    int stoneGameII(vector<int>& piles) {
        if (piles.empty()) return 0;
        if(piles.size()==1)return piles[0];
        vector<int> sums(piles.size(), 0);
        sums[piles.size()-1] = piles[piles.size()-1];
        for (int i = piles.size()-2; i >= 0; i--) 
        {
            sums[i] = sums[i+1]+piles[i];
        }
        vector<std::vector<int>> dp(piles.size(), std::vector<int>(piles.size()+1, 0));
        helper(piles, dp, sums, 0, 1);
        
        return dp[0][1];
    }
    int helper(vector<int>& piles, vector<vector<int>>& dp, vector<int>& sums, int i, int M) {
        if (i == piles.size()) return 0; 
        
        if (2*M >= piles.size()-i) return sums[i]; 
        
        if (dp[i][M]) return dp[i][M];  
        
        int min = INT_MAX;
        
        for (int j = 1; j <= 2*M; j++) {
            min = std::min(min, helper(piles, dp, sums, i+j, std::max(j, M)));
        }
        
        return dp[i][M] = sums[i]-min;
    }
};