class Solution {
public:
    int longestOnes(vector<int>& n, int k) {
        int c=0,ans=0,i=0,j=0,d=0;
        while(i<=j&&i<n.size()&&j<n.size())
        {
            if(n[j]==1)
            {
                d++;
                j++;
                ans=max(ans,d);
            }
            else if(n[j]==0)
            {
                if(c<k)
                {
                    c++;
                    d++;
                    j++;
                    ans=max(ans,d);
                }
                else
                {
                    while(n[i]!=0)
                    {
                        i++;
                        d--;
                    }
                    i++;
                   // d++;
                    j++;
                    ans=max(ans,d);
                }
            }
            
        }
        return ans;
    }
};