class Solution {
public:
    int maxNumberOfAlloys(int n, int k, int budget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        int left = 0, right = INT_MAX;
        int res = 0;
        while (left <= right) {
            int mid = (left + right) / 2;
            bool canCreate = false;
            for (int machine = 0; machine < k; ++machine) {
                if (canCreateAlloys(n,machine, mid, budget, composition, stock, cost)) {
                    res = mid;
                    canCreate = true;
                    left = mid + 1;
                    break;
                }
            }
            if (!canCreate) {
                right = mid - 1;
            }
        }
        return res;
    }
private:
    bool canCreateAlloys(int n,int machine, int k, long long remainingBudget, vector<vector<int>>& composition, vector<int>& stock, vector<int>& cost) {
        for (int i = 0; i < n; ++i) {
            long long requiredMetal = (long long)composition[machine][i] * k;
            if (requiredMetal > stock[i]) {
                remainingBudget -= (requiredMetal - stock[i]) * (long long)cost[i];
            }
            if (remainingBudget < 0) {
                return false;
            }
        }
        return true;
    }
};