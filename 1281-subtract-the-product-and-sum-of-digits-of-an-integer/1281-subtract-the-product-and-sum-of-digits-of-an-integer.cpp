class Solution {
public:
    int subtractProductAndSum(int n) {
        long long m=1;
        long long s=0;
        while(n)
        {
            int r=n%10;
            n=n/10;
            m*=r;
            s+=r;
        }
        return m-s;
    }
};