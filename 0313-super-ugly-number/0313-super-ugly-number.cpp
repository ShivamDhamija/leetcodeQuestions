#define ll long long
class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& p) {
        vector<ll>v;
        vector<int>no(p.size());
        v.push_back(1);
        
        while(v.size()<n)
        {
            int j=no[0];
            ll s=p[0]*v[j];
            int t=0;
            for(int i=1;i<p.size();i++)
            {
                j=no[i];
                ll M=p[i]*v[j];
                if(s>M)
                {
                    s=M;
                    t=i;
                }
            }
            if(v.back()!=s)
            v.push_back(s);
            no[t]++;
//             for(int i=0;i<p.size();i++)
//             {
                
//                 j=no[i];
//                 if(s==p[i]*v[j])
//                 {
//                     no[i]++;
//                     break;
//                 }
//             }
          //  cout<<s<<" ";
        }
        
        return v[n-1];
    }
};