class Solution {
public:
    int maximizeSum(vector<int>& n, int k) {
        int ma=INT_MIN;
        for(auto i:n)
            ma=max(ma,i);
        int ans=ma*k+(k-1)*(k)/2;
        return ans;
    }
};