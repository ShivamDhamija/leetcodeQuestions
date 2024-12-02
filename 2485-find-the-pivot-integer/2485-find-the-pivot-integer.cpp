class Solution {
public:
    int pivotInteger(int n) {
        int a=0,b=0;
        for(int i=0;i<=n;i++)a+=i;
        for(int i=1;i<=n;i++){
            a-=(i-1);
            b+=i;
            if(a==b)return i; 
        }
        return -1;
    }
};