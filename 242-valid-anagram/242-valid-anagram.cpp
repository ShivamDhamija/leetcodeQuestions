class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.size()!=t.size())return false;
        vector<int> a(26,0);
        vector<int> b(26,0);
        for(int i=0;i<s.size();i++)
        {
            int j=s[i]-'a';
            a[j]++;
            j=t[i]-'a';
            b[j]++;
        }
        
        for(int i=0;i<26;i++)
        if(a[i]!=b[i])return false;
        return true;
    }
};