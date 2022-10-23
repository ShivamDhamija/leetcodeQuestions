class Solution {
public:
    bool check(int a,int b)
    {
        int t=0;
        while(b)
        {
            t=t*10+b%10;
            b=b/10;
        }
        return t==a;
    }
    
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++)
        {
            if(check(i,num-i))return true;
        }
        return false;
    }
};