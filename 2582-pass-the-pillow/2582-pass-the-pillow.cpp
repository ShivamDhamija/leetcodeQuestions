class Solution {
public:
    int passThePillow(int n, int t) {
        n--;
        int d=t/n;
        int r=t%n;
        if(d%2==0)
            return r+1;
        
            return n-r+1;
    }
};