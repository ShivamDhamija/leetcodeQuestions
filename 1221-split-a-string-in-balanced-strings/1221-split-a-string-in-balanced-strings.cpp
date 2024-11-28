class Solution {
public:
    int balancedStringSplit(string s) {
       int c=0,r=0,l=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                r++;
            else
                l++;
            if(r==l)
            {
                c++;r=0;l=0;
            }
        }
        
        return c;
    }
};