class Solution {
public:
    long long countInterestingSubarrays(vector<int>& n, int m, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        long long s=0;
        int v=0;
        for(auto i:n)
        {
            v = (v+(i%m==k?1:0))%m;
            s += mp[(v-k+m)%m];
            mp[v]++;
        }
        return s;
    }
};