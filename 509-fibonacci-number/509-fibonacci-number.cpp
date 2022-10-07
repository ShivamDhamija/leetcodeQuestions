class Solution {
public:
    vector<int>v;
    int call(int n){
        
        if(n<0)return 0;
        if(v[n]!=-1)return v[n];
        return v[n]=call(n-2)+call(n-1);
    }
    int fib(int n) {
        v.resize(n+1,-1);
        v[0]=0;
        if(n>0)
        v[1]=1;
        
        return call(n);
    }
};