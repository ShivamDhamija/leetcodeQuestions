class Solution {
public:
    int p(int n)
    {
        int no=2,r=0;
        while(no<=n)
        {
            if(n%no==0)
            {
                n=n/no;
                r+=no;
            }
            else
                no++;
        }
        return r;
    }
    int smallestValue(int n) {
        while(true)
        {
            int c=p(n);
            if(c==n)
                break;
            n=c;
        }
        return n;
    }
};