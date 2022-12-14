class Solution {
public:
     long long maxAlternatingSum(vector<int>& A) {
        long res = A[0];
        for (int i = 1; i < A.size(); ++i)
            res += max(A[i] - A[i-1], 0);
        return res;
    }
};