class Solution {
public:
    string toLowerCase(string s) {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                int j=s[i]-'A';
                s[i]=j+'a';
            }
        }
        return s;
    }
};