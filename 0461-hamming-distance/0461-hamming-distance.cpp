class Solution {
public:
    int hammingDistance(int x, int y) {
        int ans=0;
        while(x>0||y>0)
        {
            int a=x>0?x&1:0;
            int b=y>0?y&1:0;
            x=x>0?x>>1:0;
            y=y>0?y>>1:0;
            if(a!=b)ans++;
        }
        return ans;
    }
};