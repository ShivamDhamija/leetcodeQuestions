class Solution {
public:
    // int call(string w1, string w2,vector<vector<int>>&v,int i,int j)
    // {
    //     if(i<0)return j+1;
    //     if(j<0)return i+1;
    //     if(v[i][j]==-1)
    //     {
    //         if(w1[i]==w2[j])
    //             v[i][j]=call(w1,w2,v,i-1,j-1);
    //         else
    //             v[i][j]=1+min(call(w1,w2,v,i,j-1),min(call(w1,w2,v,i-1,j),call(w1,w2,v,i-1,j-1)));
    //     }
    //     return v[i][j];
    // }
    int minDistance(string w1, string w2) {
        int n=w1.size(),m=w2.size();
        // vector<vector<int>>v(n,vector<int>(m,-1));
        // return call(w1,w2,v,n-1,m-1);
       
//         vector<vector<int>>v(n+1,vector<int>(m+1));
//         for(int i=0;i<=m;i++)
//             v[0][i]=i;
//         for(int i=0;i<=n;i++)
//             v[i][0]=i;
//         for(int i=1;i<=n;i++)
//         {
//             for(int j=1;j<=m;j++)
//             {
//                 if(w1[i-1]==w2[j-1])
//                     v[i][j]=v[i-1][j-1];
//                 else
//                     v[i][j]=min(v[i-1][j-1],min(v[i-1][j],v[i][j-1]))+1;
               
//             }
//         }
//         return v[n][m];
        
        vector<int>v(m+1);
        for(int i=0;i<=m;i++)
            v[i]=i;
        for(int i=1;i<=n;i++)
        {
            vector<int>t(m+1);
            t[0]=i;
            for(int j=1;j<=m;j++)
            {
                if(w1[i-1]==w2[j-1])
                    t[j]=v[j-1];
                else
                    t[j]=min(t[j-1],min(v[j],v[j-1]))+1;
               
            }
            v=t;
        }
        return v[m];
    }
};