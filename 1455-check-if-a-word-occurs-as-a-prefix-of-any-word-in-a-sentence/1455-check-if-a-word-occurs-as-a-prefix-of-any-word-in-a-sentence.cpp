class Solution {
public:
    bool check(string s,string w)
    {
        int i=0;
        for(i;i<w.size()&&i<s.size();i++)
        {
            if(s[i]!=w[i])break;
        }
        if(i<w.size())return 0;
        return 1;
    }
    int isPrefixOfWord(string s, string w) {
        s.push_back(' ');
        int c=0;
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                c++;
                if(check(str,w))
                    return c;
                str="";
            }else
                str.push_back(s[i]);
        }
        return -1;
    }
};