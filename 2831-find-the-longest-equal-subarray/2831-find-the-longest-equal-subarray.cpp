class Solution {
public:
    int longestEqualSubarray(vector<int>& n, int k) {
        int ans=0,i=0;
        unordered_map<int,int>m;
        for(int j=0;j<n.size();j++)
        {
            ans=max(ans,++m[n[j]]);
            if(j-i+1-ans>k)
                m[n[i++]]--;
        }
        return ans;
    }
};