class Solution {
public:
    int totalFruit(vector<int>& f) {
        int ans=0,a=-1,b=-1,ia=0,ib=0;
        unordered_map<int,int>m;
        m[-1]=0;
        
        for(int i=0;i<f.size();i++)
        {  
            if(a==-1)
                a=f[i];
            else if(a!=f[i]&&b!=f[i])
            {
                m[b]=0;
                b=a;
                a=f[i];
                m[b]=i-ia;
               // cout<<i<<" "<<ia<<" "<<b<<endl;
            }
            else if(b==f[i])
            {
                b=a;
                a=f[i];
            }
            m[f[i]]++;
                if(f[ia]!=f[i])
                {
                    ia=i;
                //cout<<ia<<" " <<m[f[ia]]<<endl;
            }
              
            ans=max(ans,m[a]+m[b]);
         
        }
        
        return ans;
    }
};