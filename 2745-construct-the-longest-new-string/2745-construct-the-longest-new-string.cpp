class Solution {
public:
    int longestString(int x, int y, int z) {
        int a=z;
        if(x>y)a+=2*y+1;
        else if(y>x)a+=2*x+1;
        else a+=2*x;
        return 2*a;
    }
};