class Solution {
public:
    vector<int> getAverages(vector<int>& n, int k) {
        vector<int>ans(n.size(),-1);
        
        long long s=0,d=2*k+1,r;
        for(int i=0;i<n.size();i++)
        {
            s+=n[i];
            if(i<2*k)continue;
            r=s/d;
            ans[i-k]=r;
            s-=n[i-2*k];
        }
        
        return ans;
    }
};