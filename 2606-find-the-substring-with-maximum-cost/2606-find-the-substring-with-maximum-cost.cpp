class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int>m;
        for(int i=0;i<vals.size();i++)
            m[chars[i]]=vals[i];
        int a=0;
        int c=0;
        for(int i=0,j=0;i<s.size();i++)
        {
            c+=m.find(s[i])!=m.end()?m[s[i]]:s[i]-'a'+1;
            a=max(a,c);
            if(c<0)
                c=0;
        }
        return a;
    }
};