class Solution {
public:
    vector<vector<int>>p;
    vector<vector<int>>a;
    vector<vector<int>>ans;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        if(heights.size()==0)return ans;
        int n=heights.size(),m=heights[0].size();
        p.resize(n,vector<int>(m,0));
        a.resize(n,vector<int>(m,0));
        for(int i=0;i<n;i++)help(heights,p,i,0,n,m),help(heights,a,i,m-1,n,m);
        for(int j=0;j<m;j++)help(heights,p,0,j,n,m),help(heights,a,n-1,j,n,m);
        return ans;
    }
    void help(vector<vector<int>>&h,vector<vector<int>>&v,int i,int j,int &n, int &m){
        if(v[i][j]==1)return;
        v[i][j]=1;
        if(p[i][j] && a[i][j])ans.push_back({i,j});
        if(i>0&& h[i-1][j]>=h[i][j])help(h,v,i-1,j,n,m);
        if(i<n-1&& h[i+1][j]>=h[i][j])help(h,v,i+1,j,n,m);
        if(j>0&& h[i][j-1]>=h[i][j])help(h,v,i,j-1,n,m);
        if(j<m-1&& h[i][j+1]>=h[i][j])help(h,v,i,j+1,n,m);
    }
};