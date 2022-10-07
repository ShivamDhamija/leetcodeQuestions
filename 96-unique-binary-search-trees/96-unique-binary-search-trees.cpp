class Solution {
public:
    int call(int n)
    {
        if(n<=0)return 1;
        if(n<3)return n;
        int ans=0;
        
        for(int j=1;j<=n;j++)
        {
           
            ans+=call(j-1)*call(n-j);
        }
        
        return ans;
    }
    int numTrees(int n) {
        return call(n);
    }
};