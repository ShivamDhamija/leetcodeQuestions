class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double ans=0;
        int t=c[0][0];
        for(int i=0;i<c.size();i++)
        {
            int a=c[i][0],b=c[i][1];
            if(a>=t)
            {
                ans+=b;
                t=max(t,a)+b;
            }
            else
            {
                t+=b;
                ans+=t-a;
            }
           // cout<<ans<<endl;
        }
        
        return ans/c.size();
    }
};