class Solution {
public:
    vector<vector<int>>p,a,ans;
    int n,m;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {        
        n=heights.size();
        m=heights[0].size();
        p.resize(n,vector<int>(m));
        a.resize(n,vector<int>(m));
        for(int i=0;i<n;i++)help(heights,p,i,0) , help(heights,a,i,m-1);
        for(int i=0;i<m;i++)help(heights,p,0,i) , help(heights,a,n-1,i);
        return ans;
    }
    void help(vector<vector<int>>&h,vector<vector<int>>&v,int i,int j){
        if(v[i][j])return;
        v[i][j]=1;
        if(p[i][j] && a[i][j])ans.push_back({i,j});
        if(i>0   && h[i][j]<=h[i-1][j])help(h,v,i-1,j);
        if(i+1<n && h[i][j]<=h[i+1][j])help(h,v,i+1,j);
        if(j>0   && h[i][j]<=h[i][j-1])help(h,v,i,j-1);
        if(j+1<m && h[i][j]<=h[i][j+1])help(h,v,i,j+1);
    }

};