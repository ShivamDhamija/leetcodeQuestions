class Solution {
public:
    vector<int>v;
    int c(int n, int i)
    {
        if(i==n)return 1;
        if(i>n)return 0;
        if(v[i]!=-1)return v[i];
        return v[i]=c(n,i+1)+c(n,i+2);
    }
    int climbStairs(int n) {
        v.resize(n,-1);
        return c(n,0);
    }
};