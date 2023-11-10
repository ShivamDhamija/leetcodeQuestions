class Solution {
public:
    vector<string> findOcurrences(string t, string f, string s) {
        vector<string>a,c;
        string str="";
        for(int i=0;i<t.size();i++)
        {
            if(t[i]==' ')
            {
                c.push_back(str);
                str="";
            }
            else
                str.push_back(t[i]);
        }
        c.push_back(str);
        for(int i=0;i<c.size()-2;i++)
        {
            if(c[i]==f&&c[i+1]==s)
                a.push_back(c[i+2]);
        }
        return a;
    }
};