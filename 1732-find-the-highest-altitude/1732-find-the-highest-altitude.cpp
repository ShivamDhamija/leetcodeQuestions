class Solution {
public:
    int largestAltitude(vector<int>& g) {
        int ans=0,m=0;
        for(auto i:g)
        {
            m+=i;
            ans=max(ans,m);
        }
        return ans;
    }
};