class Solution {
public:
    vector<int> evenOddBit(int n) {
        int e=0,o=0,i=0;
        while(n>0)
        {
            int t=n&1;
            n=n>>1;
            if(t==1&&i%2==0)
                e++;
            else if(t==1&&i%2!=0)
                o++;
            i++;
        }
        return {e,o};
    }
};