class Solution {
public:
    int distributeCandies(int n, int l) {
        int no=0;
        for(int i=0;i<=l&&i<=n;i++)
        {
            for(int j=0;j<=l&&j<=n-i;j++)
            {
                for(int k=0;k<=l&&k<=n-i-j;k++)
                    if(i+j+k==n)
                        no++;
                        //cout<<i<<}
            }
        }
        return no;
    }
};