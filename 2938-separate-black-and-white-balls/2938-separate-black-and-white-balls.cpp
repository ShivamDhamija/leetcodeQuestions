class Solution {
public:
    long long minimumSteps(string s) {
        long long a=0;
        int i=0,j=0;
        while(j<s.size())
        {
            if(s[j]=='0')
            {
                a+=j-i;
                i++;
            }
            j++;
        }
        return a;
    }
};