class Solution {
public:
    int call(string t1, string t2,vector<vector<int>>&v,int i,int j)
    {
        if(i<0||j<0)return 0;
        if(v[i][j]==-1)
        {
            if(t1[i]==t2[j])
                v[i][j]=1+call(t1,t2,v,i-1,j-1);
            else
            v[i][j]=max(call(t1,t2,v,i-1,j),call(t1,t2,v,i,j-1));
        }
        return v[i][j];
    }
    int longestCommonSubsequence(string t1, string t2) {
        int n=t1.size(),m=t2.size();
       // vector<vector<int>>v(n,vector<int>(m,-1));
        //return call(t1,t2,v,n-1,m-1);
        
//          vector<vector<int>>v(n+1,vector<int>(m+1,0));
       
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(t1[i-1]==t2[j-1])
//                     v[i][j]=1+v[i-1][j-1];
//                 else
//                     v[i][j]=max(v[i-1][j],v[i][j-1]);                     
//             }         
//         }
//        return v[n][m];
         vector<int>v(m+1,0);
       
        for(int i=1;i<=n;i++)
        {
            vector<int>t(m+1);
            for(int j=1;j<=m;j++)
            {
                if(t1[i-1]==t2[j-1])
                    t[j]=1+v[j-1];
                else
                    t[j]=max(v[j],t[j-1]);                     
            }     
            v=t;
        }
       return v[m];
    }
};