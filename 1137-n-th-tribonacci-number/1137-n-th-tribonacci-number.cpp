class Solution {
public:
    vector<int>v;
    int call(int n)
    {
        if(n<=0)return 0;
        if(n==1||n==2)return 1;
        if(v[n]!=-1)return v[n];
        return v[n]=call(n-1)+call(n-2)+call(n-3);
    }
    int tribonacci(int n) {
        v.resize(n+1,-1);
        return call(n);
    }
};