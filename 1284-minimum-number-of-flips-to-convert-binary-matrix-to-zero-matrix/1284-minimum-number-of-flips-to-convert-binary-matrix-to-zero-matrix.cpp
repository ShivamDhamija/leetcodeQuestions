class Solution {
public:
    int m,n;
    bool check(vector<vector<int>>&a)
    {
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(a[i][j])return 0;
        return 1;
    }
    
    vector<vector<int>> change(vector<vector<int>>&a,int i,int j)
    {
        a[i][j]=1-a[i][j];
        if(i>0)a[i-1][j]=1-a[i-1][j];
        if(i<m-1)a[i+1][j]=1-a[i+1][j];
        if(j>0)a[i][j-1]=1-a[i][j-1];
        if(j<n-1)a[i][j+1]=1-a[i][j+1];
        return a;
    }
    int call(vector<vector<int>>a,int i,int j)
    {
        if(i==m)j++,i=0;
        if(j==n) return check(a)?0:1000;
        
        int ans1=call(a,i+1,j);
        int ans2=call(change(a,i,j),i+1,j)+1;
        
        return min(ans2,ans1);
    }
    int minFlips(vector<vector<int>>& a) {
        m=a.size(),n=a[0].size();
        int ans=call(a,0,0);
        return ans>=1000?-1:ans;
    }
};