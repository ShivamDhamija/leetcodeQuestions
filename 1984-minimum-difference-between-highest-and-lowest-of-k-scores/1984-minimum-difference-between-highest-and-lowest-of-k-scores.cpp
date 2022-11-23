class Solution {
public:
    int minimumDifference(vector<int>& n, int k) {
        sort(n.begin(),n.end());
        k--;
        int ans=INT_MAX;
        for(int i=0;i+k<n.size();i++)
        {
            ans=min(ans,n[i+k]-n[i]);
        }
        return ans;
    }
};