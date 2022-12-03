class Solution {
public:
    unordered_map<int,int>m;
       int  call(int n,int &ma)
       {
            if(m.find(n)!=m.end())
                return m[n];
            if(n%2==0)
                m[n]=call(n/2,ma);
            else
                m[n]=call(n/2,ma)+call(n/2+1,ma);
            ma=max(ma,m[n]);
            return m[n];
       }
    int getMaximumGenerated(int n) {
        m[0]=0;
        m[1]=1;
        int ma=n>0?1:0;
        for(int i=2;i<=n;i++)
        call(i,ma);
        return ma;
    }
};