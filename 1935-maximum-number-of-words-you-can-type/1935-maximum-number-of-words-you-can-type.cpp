class Solution {
public:
    int check(string &st,unordered_set<char> &s)
    {
        for(auto i:st)
            if(s.find(i)!=s.end())return 0;
        return 1;
    }
    int canBeTypedWords(string t, string b) {
        unordered_set<char>s;  
        string st="";
        for(auto i:b)
            s.insert(i);
        t.push_back(' ');
        int ans=0;
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==' ')
            {
                ans+=check(st,s);
                st="";
            }
            else
                st.push_back(t[i]);
        }
        return ans;
    }
};