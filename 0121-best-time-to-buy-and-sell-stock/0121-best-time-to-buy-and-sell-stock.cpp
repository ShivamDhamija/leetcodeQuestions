class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0,maxi=0,mini=0;
        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]>maxi)
            {
                maxi=prices[i];
                mini =prices[i];
            }
            mini =min(mini,prices[i]);
            ans=max(ans,maxi-mini);
        }
        return ans;
    }
};