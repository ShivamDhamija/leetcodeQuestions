class Solution {
public:
    int sumOfSquares(vector<int>& n) {
        int ans=0;
        for(int i=1;i<=n.size();i++)
        {
            if(n.size()%i==0)
                ans+=n[i-1]*n[i-1];
        }
        return ans;
    }
};