class Solution {
public:
    bool check(vector<int>&v)
    {
        for(int i=0;i<26;i++)
            if(v[i]>1)return false;
        return true;
    }
    int countGoodSubstrings(string s) {
        vector<int>v(26);
        int ans=0;
        int i;
        for( i=0;i<3&&i<s.size();i++)
            v[s[i]-'a']++;
        if(i==3&&check(v))
            ans++;
        if(i==3)
        for( i;i<s.size();i++)
        {
            v[s[i-3]-'a']--;
            v[s[i]-'a']++;
            if(check(v))ans++;
        }
        return ans;
    }
};