class Solution {
public:
    bool check(char c)
    {
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        stack<char>c;
        for(int i=0;i<s.size();i++)if(check(s[i]))c.push(s[i]);
        for(int i=0;i<s.size();i++)
            if(check(s[i])){
                s[i]=c.top();
                c.pop();
            }
       
        return s;
    }
};