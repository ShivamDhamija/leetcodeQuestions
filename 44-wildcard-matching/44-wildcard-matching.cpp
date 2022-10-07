class Solution {
public:
//     int call(string &s,string &p,vector<vector<int>>&v,int i,int j,int &k)
//     {
//         if(i<0)return j<k;
//         if(j<0)return 0;
      
//         if(v[i][j]==-1)
//         {
//            // cout<<i<<" "<<j<<endl;
//             if(p[j]=='?')
//                 v[i][j]=call(s,p,v,i-1,j-1,k);
//             else if(p[j]=='*')
//                 v[i][j]=call(s,p,v,i-1,j,k)||call(s,p,v,i,j-1,k);
//             else if(s[i]!=p[j])
//                 v[i][j]=0;
//             else
//                 v[i][j]=call(s,p,v,i-1,j-1,k);
//         }
//         return v[i][j];
//     }
    bool isMatch(string s, string p) {
        int n=s.size(),m=p.size();
        int k=0,i=0;
        while(p[i]=='*'&&i<m)
            {k++;i++;}
        vector<vector<int>>v(n+1,vector<int>(m+1));
        for(int i=0;i<=m;i++)
            if(i<=k)
                v[0][i]=1;
            else
                break;
       
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                //cout<<p[j]<<endl;
                if(p[j-1]=='?')
                    v[i][j]=v[i-1][j-1];
                else if(p[j-1]=='*')
                    v[i][j]=v[i-1][j]||v[i][j-1];
                else if(s[i-1]!=p[j-1])
                    v[i][j]=0;
                else
                    v[i][j]=v[i-1][j-1];
            }
        }
        // for(int i=0;i<=n;i++)
        // {
        //     for(int j=0;j<=m;j++)
        //     {
        //         cout<<v[i][j]<<" ";
        //     }
        // cout<<endl;
        // }
        return v[n][m];
    }
};