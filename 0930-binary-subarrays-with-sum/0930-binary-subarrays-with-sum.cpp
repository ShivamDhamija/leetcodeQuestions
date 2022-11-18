class Solution {
public:
    int numSubarraysWithSum(vector<int>& n, int g) {
        unordered_map<int,int>m;
        int s=0,ans=0;
        m[0]=1;
        for(int i=0;i<n.size();i++)
        {
            s+=n[i];
                ans+=m[s-g];
            m[s]++;
            
        }
        return ans;
    }
};