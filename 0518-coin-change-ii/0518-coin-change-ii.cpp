class Solution {
public:
    // int ans;
    int call(int a,vector<int>&c,int I)
    {
       // cout<<a<<endl;
        if(a==0)
            return 1;
        if(a<0)
            return 0;
        if(I==c.size())
            return 0;
        if(vis[I][a]!=-1)
            return vis[I][a];
        int ans=0;
        for(int i=I;i<c.size();i++)
        {
           // if(a-c[i]>=0&&vis[a-c[i]]==-1)
            ans+=call(a-c[i],c,i);
        }
        vis[I][a]=ans;
        return ans;
    }
    vector<vector<int>>vis;
    int change(int a, vector<int>& c) {
       
        vis.resize(c.size(),vector<int>(a+1,-1));
        return call(a,c,0);
    }
};