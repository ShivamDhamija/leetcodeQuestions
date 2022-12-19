class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=0,z=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1'&&z>0)
                n=max(n+1,z);
            else if(s[i]=='0')
                z++;
        }
        return n;
    }
};