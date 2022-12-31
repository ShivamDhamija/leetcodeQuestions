class Solution {
public:
    bool check(int i,int j,int &n, int &m,vector<vector<int>>& a
              ,vector<vector<bool>>& vis)
    {
        if(i<0||j<0||i>=n||j>=m)
            return false;
        if(vis[i][j]||a[i][j]==-1)
            return false;
        return true;
    }
    void call( int i,int j,int &count,int &n,int &m,vector<vector<int>>& a
              ,vector<vector<bool>>& vis,int &zero,int &num)
    {
       // cout<<"asda"<<endl;
        vis[i][j]=true;
        if(a[i][j]==0)
            num++;
        if(a[i][j]==2)
        {
            vis[i][j]=false;
          if(zero==num)
            count++;
            return ;
        }
        if(check(i+1,j,n,m,a,vis))
        {
          //  cout<<"d"<<endl;
            call(i+1,j,count,n,m,a,vis,zero,num);
        }
        if(check(i-1,j,n,m,a,vis))
        {
                     //   cout<<"u"<<endl;
            call(i-1,j,count,n,m,a,vis,zero,num);
        }
        if(check(i,j+1,n,m,a,vis))
        {
                     //   cout<<"r"<<endl;
            call(i,j+1,count,n,m,a,vis,zero,num);
        }
        if(check(i,j-1,n,m,a,vis))
        {
                    //    cout<<"l"<<endl;
            call(i,j-1,count,n,m,a,vis,zero,num);
        }
    
        if(a[i][j]==0)
            num--;
        vis[i][j]=false;
    }
    int uniquePathsIII(vector<vector<int>>& g) {
        int I,J,zero=0,num=0;
        int n1=g.size(),n2=g[0].size();
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(g[i][j]==1)
                {
                    I=i;
                    J=j;
                }
                if(g[i][j]==0)
                zero++;
            }
        }
        vector<vector<bool>>vis;
        for(int i=0;i<n1;i++)
        {
            vector<bool>v;
            for(int j=0;j<n2;j++)
                v.push_back(false);
            vis.push_back(v);
        }
        int count=0;
        call(I,J,count,n1,n2,g,vis,zero,num);
        return count;
    }
};