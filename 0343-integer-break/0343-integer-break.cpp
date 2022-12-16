class Solution {
public:
    int integerBreak(int n) {
        vector<int> maxProd (n + 1);
        for (int i = 1; i < n; i++) {
            maxProd[i] = i;
        }
        
        // 2.Compute max product
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= i - j; j++) { // Note: only check j <= i - j
                maxProd[i] = max(maxProd[i], maxProd[j] * maxProd[i - j]);
            }
        }
        return maxProd[n];
    }
};
// 6=> 1*5 2*4 3*3 
//  7=> 1*6 2*5 3*4 