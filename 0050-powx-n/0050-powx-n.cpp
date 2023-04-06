class Solution {
public:
    double myPow(double x, long long int n) {
     if(n==0)
         return (double)1;
        if(n==1)
            return x;
        bool neg=n<0?1:0;
        n=n<0?((long long)-1)*n:n;
        int r=n%2;
        double a=myPow(x,n/2);
        a =a*a;
        if(r==1)
        a=   a*x;
        if(neg)a=1/a;
        return a;
    }
};