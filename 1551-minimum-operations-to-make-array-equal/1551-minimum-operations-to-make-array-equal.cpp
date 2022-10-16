class Solution {
public:
    int minOperations(int n) {
        int ans=0;
        if(n%2==0)
        {
            n=n/2;
            int a=1;
            while(n)
            {
                ans+=a;
                a+=2;
                n--;
            }
        }
        else
        {
            n=n/2;
            int a=2;
            while(n)
            {
                ans+=a;
                a+=2;
                n--;
            }
        }
        return ans;
    }
};