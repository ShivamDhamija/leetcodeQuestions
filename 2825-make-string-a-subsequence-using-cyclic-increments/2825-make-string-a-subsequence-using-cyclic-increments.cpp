class Solution {
public:
    bool canMakeSubsequence(string s1, string s2) {
        int i=0,j=0;
        //cout<<(('z')%'a');
        while(i<s1.size()&&j<s2.size())
            if(s1[i]%'a'==s2[j]%'a'||(s1[i]%'a'+1)%26==s2[j]%'a')
            {
                i++;j++;
            }
        else
            i++;
        if(j==s2.size())
            return true;
        
        return false;
    }
};