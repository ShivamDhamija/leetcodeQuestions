class Solution {
public:
    void c(int n,vector<int>&v)
    {
        while(n>0)
        {
            v[n%10]++;;
            n=n/10;
        }
    }
    bool isFascinating(int n) {
        vector<int>v(10,-1);
        int c1 =n*2,c2=n*3;
        c(n,v);c(c1,v);c(c2,v);
        for(int i=1;i<10;i++)
            if(v[i]!=0)return 0;
        if(v[0]!=-1)return 0;
        return 1;
    }
};