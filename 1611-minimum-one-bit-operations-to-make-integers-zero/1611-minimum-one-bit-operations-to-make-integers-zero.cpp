class Solution {
public:
    int minimumOneBitOperations(int n) {
        if(n==0)
        return 0;
        int b=1;
        while(b<=n)
            b=b<<1;
        return b-1-minimumOneBitOperations((b>>1)^n);
    }
};