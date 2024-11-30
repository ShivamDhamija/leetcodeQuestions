class Solution {
public:
    string restoreString(string s, vector<int>& I) {
        string a(I.size(),'s');
        for(int i=0;i<I.size();i++)
            a[I[i]]=s[i];
        return a;
    }
};