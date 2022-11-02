class Solution {
public:
    int numTimesAllBlue(vector<int>& f) {
        int n=f.size();
        vector<int> v(n+1);
        int  ans=0,s=0;
        for(int i=0;i<n;i++)
        {
            v[f[i]-1]=1;
            if(f[i]<i+1)
                s++;
            s+=v[i];
            
            if(s==i+1)
                ans++;
        }
        return ans;
    }
};