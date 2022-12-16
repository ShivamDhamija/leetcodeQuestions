class Solution {
public:
    int maxAbsoluteSum(vector<int>& n) {
        int ans=0,ma=0,mi=0;
        
        for(int i=0;i<n.size();i++)
        {
            ma+=n[i];
            mi+=n[i];
            if(ma<0)
                ma=0;
            if(mi>0)
                mi=0;
            ans=max(ans,ma);
            ans=max(ans,abs(mi));
        }
        return ans;
    }
};