class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int t) {
        int s=0;
        int ans=0;
        int i;
        for(i=0;i<k&&i<a.size();i++)
        {
            s+=a[i];
        }
        while(i<a.size())
        {
            if(s/k>=t)
                ans++;
            s-=a[i-k];
             s+=a[i];
            i++;
            
           
        }
        if(s/k>=t)
            ans++;
        return ans;
    }
};