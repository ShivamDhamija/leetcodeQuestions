class Solution {
public:
    bool buddyStrings(string s, string g) {
        if(s.size()<g.size()||s.size()>g.size())return 0;
        int no=0;
        pair<string,string> t1;
        pair<string,string>t2;
        vector<int>v(26);
        for(int i=0;i<s.size();i++)
            {if(s[i]!=g[i])
            {
                if(no==0)
                    {t1.first=s[i];t1.second=g[i];no++;}
                else if(no==1)
                {
                    t2.first=s[i];t2.second=g[i];no++;
                }
                else
                    no++;
            }
             v[g[i]-'a']++;
            }
        if(g==s)
        {
            for(auto i:v)
                if(i>=2)return 1;
        }
        if(no!=2)return 0;
        if(t1.first==t2.second&&t1.second==t2.first)return 1;
        return 0;
    }
};