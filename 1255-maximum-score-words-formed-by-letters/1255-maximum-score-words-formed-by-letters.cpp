class Solution {
public:
    int score(string &w,unordered_map<char,int>mp,vector<int>&s)
    {
        int sum=0;
        for(auto i:w)
            if(mp[i]--)
                sum+=s[i-'a'];
            else
                return 0;
        return sum;
    }
    void rem(string &w,unordered_map<char,int>&mp)
    {
        for(auto i:w)
            mp[i]--;
    }
    void add(string &w,unordered_map<char,int>&mp)
    {
        for(auto i:w)
            mp[i]++;
    }
    int call(vector<string>&w,unordered_map<char,int>&mp,vector<int>&s,int i)
    {
        if(i==w.size())return 0;
        int m=score(w[i],mp,s),ans=0;
        if(m>0)
        {
            rem(w[i],mp);
            ans=m+call(w,mp,s,i+1);
            add(w[i],mp);
            ans=max(ans,call(w,mp,s,i+1));
        }
        else
            ans=call(w,mp,s,i+1);
        return ans;            
    }
    int maxScoreWords(vector<string>& w, vector<char>& l, vector<int>& s) {
        unordered_map<char,int> mp;
        for(auto i:l)
            mp[i]++;
        return call(w,mp,s,0);
    }
};