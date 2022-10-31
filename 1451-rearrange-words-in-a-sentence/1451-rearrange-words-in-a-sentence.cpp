class Solution {
public:
    static bool so(string a,string b)
    {
       // if(a.size()==b.size())return true;
        return a.size()<b.size();
    }
    string arrangeWords(string t) {
        vector<string>s;
        t.push_back(' ');
        string a="";
        int j=t[0]-'A';
        t[0]=j+'a';
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==' ')
            {
                s.push_back(a);
                a="";
                continue;
            }

            a.push_back(t[i]);
        }
        stable_sort(s.begin(),s.end(),so);
        t="";
        for(int i=0;i<s.size();i++)
        {
            t+=s[i];
            if(i<s.size()-1)
                t.push_back(' ');
        }
         j=t[0]-'a';
        t[0]=j+'A';
      //  cout<<t[0];
        return t;
    }
};