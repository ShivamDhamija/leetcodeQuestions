class Solution {
public:
    bool checkString(string s) {
    char c='a';
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'&&c!='a')
                return false;
            if(s[i]=='b')
                c='b';
        }
        return true;
    }
};