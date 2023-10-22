class Solution {
public:
    int minimumSum(vector<int>& n) {
        int s=INT_MAX;
        int mi=n[0];
        vector<int>n2(n.size());
        for(int i=1;i<n2.size();i++)
        {
            n2[i]=mi;
            mi=min(n[i],mi);
        }
        mi=n[n.size()-1];
        for(int i=n.size()-2;i>0;i--)
        {
            if(n[i]>n2[i]&&n[i]>mi)
            s=min(s,n2[i]+n[i]+mi);
            mi=min(mi,n[i]);
        }
        return s==INT_MAX?-1:s;
    }
};