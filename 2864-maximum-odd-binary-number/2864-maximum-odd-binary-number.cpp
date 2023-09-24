class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c=0;
        for(auto i:s)
            if(i=='1')
                c++;
        for(int i=0;i<c-1;i++)
            s[i]='1';
        for(int i=c-1;i<s.size();i++)
            s[i]='0';
        s[s.size()-1]='1';
        return s;
    }
};