class Solution {
public:
    int maxNonDecreasingLength(vector<int>& n1, vector<int>& n2) {
        int ans=1,t1,t2,t3,t4,d1=1,d2=1;
        for(int i=1;i<n1.size();i++)
        {
            t1=n1[i]>=n1[i-1]?d1+1:1;
            t2=n1[i]>=n2[i-1]?d2+1:1;
            t3=n2[i]>=n1[i-1]?d1+1:1;
            t4=n2[i]>=n2[i-1]?d2+1:1;
            d1=max(t1,t2);
            d2=max(t3,t4);
            ans=max(ans,max(d1,d2));
        }
        return ans;
    }
};