class Solution {
public:
    bool pal(string &s,int i, int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        return true;
    }
//     int call(string &s,vector<int>&v,int i,int &n)
//     {
//         if(n==i)return 0;
//         if(v[i]==-1)
//         {
//             v[i]=INT_MAX;
//             for(int j=i;j<n;j++)
//             {
//                 if(pal(s,i,j))
//                 {
//                     v[i]=min(v[i],1+call(s,v,j+1,n));                   
//                 }
//             }
                
//         }
//         return v[i];
//     }
    int minCut(string s) {
        // vector<int>v(s.size(),-1);
        // int n=s.size();
        //     return call(s,v,0,n)-1;
        
        vector<int>v(s.size()+1);
        for(int i=s.size()-1;i>=0;i--)
        {
            v[i]=INT_MAX;
            for(int j=i;j<s.size();j++)
            {
                if(pal(s,i,j))
                {
                    v[i]=min(v[i],1+v[j+1]);                   
                }
            }
        }
            return v[0]-1;
    
}
};