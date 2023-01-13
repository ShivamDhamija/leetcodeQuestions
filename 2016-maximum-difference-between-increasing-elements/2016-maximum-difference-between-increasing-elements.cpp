class Solution {
public:
    int maximumDifference(vector<int>& n) {
        int m=n[n.size()-1],ans=0;
        for(int i=n.size()-1;i>=0;i--)
        {
            ans=max(ans,m-n[i]);
            m=max(m,n[i]);
        }
        if(ans==0)return -1;
        return ans;
    }
};