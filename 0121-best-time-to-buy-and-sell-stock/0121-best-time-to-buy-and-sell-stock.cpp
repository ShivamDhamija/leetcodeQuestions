class Solution {
public:
    int maxProfit(vector<int>& p) {
        int m=0,ans=0;
        for(int i=p.size()-1;i>=0;i--)
        {
            m=max(m,p[i]);
            ans=max(ans,m-p[i]);
        }
        return ans;
    }
};