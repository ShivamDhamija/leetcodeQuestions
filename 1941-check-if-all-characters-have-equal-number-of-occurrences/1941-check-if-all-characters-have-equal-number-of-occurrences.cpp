class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int>v(26);
        int m=0;
        for(auto i:s)
        {
            v[i-'a']++;
            m=max(m,v[i-'a']);
        }
        for(int i=0;i<26;i++)
            if(v[i]!=0&&v[i]!=m)return false;
        return true;
    }
};