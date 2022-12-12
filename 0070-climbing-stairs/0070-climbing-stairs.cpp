class Solution {
public:
    vector<int>v;
    int call(int n,int i)
    {
        if(i>=n)return 1;
        if(v[i]!=-1)return v[i];
        return v[i]=call(n,i+1)+call(n,i+2);
    }
    int climbStairs(int n) {
        v.resize(n,-1);
        return call(n,1);
    }
};