class Solution {
public:
    int maxPower(string s) {
        int a=1,c=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                c++;
            else
                c=1;
            a=max(a,c);
        }
        return a;
    }
};