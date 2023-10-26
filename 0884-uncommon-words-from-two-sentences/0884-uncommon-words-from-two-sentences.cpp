class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>s;
        string c="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                s[c]++;
                c="";
            }
            else if(i==s1.size()-1)
            {
                c.push_back(s1[i]);
                s[c]++;
                c="";
            }else
                c.push_back(s1[i]);                            
        }
        s1=s2;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==' ')
            {
                s[c]++;
                c="";
            }
            else if(i==s1.size()-1)
            {
                c.push_back(s1[i]);
                s[c]++;
                c="";
            }else
                c.push_back(s1[i]);                            
        }
        vector<string>a;
        for(auto i:s)
            if(i.second==1)
                a.push_back(i.first);
        return a;
    }
};