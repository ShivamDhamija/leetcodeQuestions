class Solution {
public:
    bool check(string &p,string &w)
    {
        vector<char>c1(26,'0');
        vector<char>c2(26,'0');
        
        for(int i=0;i<p.size();i++)
        {
            int a=p[i]-'a',b=w[i]-'a';
            if(c1[a]=='0')
                c1[a]=w[i];
            if(c2[b]=='0')
                c2[b]=p[i];
            if(c1[a]!=w[i]||c2[b]!=p[i])return false;
        }
        
        return true;
        
    }
    vector<string> findAndReplacePattern(vector<string>& w, string p) {
       
        vector<string>ans;
        
        for(int i=0;i<w.size();i++)
        {
            if(check(p,w[i]))
                ans.push_back(w[i]);
        }
        
        return ans;
    }
};