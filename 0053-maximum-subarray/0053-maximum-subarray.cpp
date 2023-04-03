class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int ans=INT_MIN,t=0;
        for(auto i:n)
        {
            t+=i;
            ans=max(ans,t);
            if(t<0)t=0;
        }
        
        return ans;
    }
};