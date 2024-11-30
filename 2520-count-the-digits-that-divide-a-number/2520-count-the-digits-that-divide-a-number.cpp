class Solution {
public:
    int countDigits(int n) {
        int c=n,s=0;
        while(n)
        {
            if(c%(n%10)==0)s++;
            n/=10;
        }
        return s;
    }
};