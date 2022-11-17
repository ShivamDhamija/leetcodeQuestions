class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        vector<int>pr(c.size()+1);
        vector<int>su(c.size()+1);
        int ans=0;
        for(int i=0,j=c.size()-1;j>=0&&i<c.size();j--,i++)
        {
            pr[i+1]=pr[i]+c[i];
            su[j]=su[j+1]+c[j];
            
        }
         
        for(int i=0;i<=k;i++)
        {
            ans=max(pr[i]+su[c.size()-k+i],ans);
        }
        return ans;
    }
};