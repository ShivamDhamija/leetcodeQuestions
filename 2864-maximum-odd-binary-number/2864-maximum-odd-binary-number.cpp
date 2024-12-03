class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int o=0;
        for(auto i:s)if(i=='1')o++;
        o--;
        for(int i=0;i<s.size();i++)s[i]='0';
        for(int i=0;i<o;i++)s[i]='1';
        s[s.size()-1]='1';
        return s;
    }
};