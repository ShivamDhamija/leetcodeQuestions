class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int z=0,o=0,a=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0'&&o>0)
            {
                z=0;
                o=0;
            }
            if(s[i]=='0')z++;
            if(s[i]=='1')o++;           
                a=max(a,2*min(o,z));                        
        }
        return a;
    }
};