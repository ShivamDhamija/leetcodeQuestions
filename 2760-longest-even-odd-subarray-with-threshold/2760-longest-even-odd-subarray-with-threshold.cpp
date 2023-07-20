class Solution {
public:
    int longestAlternatingSubarray(vector<int>& n, int t) {
     int ans=0,l=1,s=0,i=0;
        while(i<n.size()&&n[i]%2!=0)i++;
        for(i;i<n.size()-1;i++)
        {
            if((n[i]%2 != n[i+1]%2)&&n[i]<=t&&n[i+1]<=t)
                l++;
            else if(n[i]%2==0&&n[i]<=t)
                l=1;
            else
                l=0;
            //cout<<n[i]<<" "<<l<<endl;
            if(n[i]%2==0&&l==1&&n[i]%2!=n[i+1]%2&&n[i]<=t&&n[i+1]<=t)l++;
            ans=max(ans,l);
        }
        if(n[n.size()-1]%2==0&&n[n.size()-1]<=t)ans=max(ans,1);
        return ans;
    }
};