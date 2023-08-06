class Solution {
public:
    int accountBalanceAfterPurchase(int p) {
     int r=p%10;
        if(r<5)
            p=p-r;
        else
        {
        r=10-r;
        p+=r;
        }return 100-p;
    }
};