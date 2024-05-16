class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        vector<bool>ans(c.size(),false);
        int m=c[0];
        for(int i=1;i<c.size();i++)
        {
            if(c[i]+e>=m)ans[i]=true;
            m=max(m,c[i]);
        }
        m=c[c.size()-1];
        for(int i=c.size()-2;i>=0;i--)
        {
            if(ans[i]==true &&c[i]+e<m )ans[i]=false; 
            if(i==0 &&c[i]+e>=m)ans[i]=true;
            m=max(m,c[i]);
        }
        return ans;
    }
};