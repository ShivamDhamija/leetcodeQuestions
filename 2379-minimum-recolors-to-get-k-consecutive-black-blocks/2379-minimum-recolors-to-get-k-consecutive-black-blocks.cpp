class Solution {
public:
    int minimumRecolors(string s, int k) {
        int i=0,j=0,b=0,w=0,ans=INT_MAX;
        
        while(i<=j&&j<s.size())
        {
            if(s[j]=='W')
                w++;
            if(s[j]=='B')
                b++;
            if(b+w==k)
            {
                ans=min(ans,w);
            
                if(s[i]=='W')
                    w--;
                else
                    b--;
                i++;
            }
            j++;
        }
        return ans;
    }
};