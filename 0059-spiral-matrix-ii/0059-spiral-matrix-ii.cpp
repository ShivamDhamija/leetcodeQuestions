class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n));
        
        int l=0,r=n-1,u=0,d=n-1;
        int a=1;
        while(l<=r&&u<=d)        
        {
        for(int i=l;i<=r;i++)
        {
            ans[u][i]=a;
            a++;
        }
            u++;         
        for(int i=u;i<=d;i++)
        {
            ans[i][r]=a;
            a++;
        }   
            r--;            
        for(int i=r;i>=l;i--)
        {
            ans[d][i]=a;
            a++;
        }
            d--;
        for(int i=d;i>=u;i--)
        {
            ans[i][l]=a;
            a++;
        }
            l++;
        }
        return ans;
    }
};