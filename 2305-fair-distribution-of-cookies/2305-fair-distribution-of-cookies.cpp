class Solution {
public:
    int ans; 
    vector<int>v;
    void call(vector<int>&c,int k,int I)
    {
        if(I==c.size())
        {
            int a=0;
            for(int i=0;i<k;i++)
                a=max(a,v[i]);
            ans=min(ans,a);
            return ;
        }
        for(int i=0;i<k;i++)
        {
            v[i]+=c[I];
            call(c,k,I+1);
            v[i]-=c[I];
            if(v[i]==0)break;
        }
    }
    int distributeCookies(vector<int>& c, int k) {
        ans=INT_MAX;
        v.resize(k);
        call(c,k,0);
        
        return ans;
    }
};