class Solution {
public:
    int countPrimes(int n) {
        vector<int>v(max(n+1,2));
        v[0]=-1;v[1]=-1;
        int ans=0;
        for(int i=2;i*i<=n;i++)
        {
            if(v[i]==-1)
                continue;

            for(int j=i;j*i<=n;j++)
            {
                v[i*j]=-1;
            }
        }
        for(int i=2;i<n;i++)if(v[i]==0)ans++;
        return ans;
    }
};