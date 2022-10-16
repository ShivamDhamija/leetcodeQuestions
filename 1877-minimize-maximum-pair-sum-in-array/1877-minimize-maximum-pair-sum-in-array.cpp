class Solution {
public:
    int minPairSum(vector<int>& n) {
        
        sort(n.begin(),n.end());
        
        int ans=INT_MIN;
        int j=n.size();
        for(int i=0;i<j/2;i++)
        {
            ans=max(ans,n[i]+n[j-i-1]);
        }
        
        return ans;
        
    }
};