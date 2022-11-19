class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>pv(26);
        for(int i=0;i<p.size();i++)
        {
            pv[p[i]-'a']++;
        }
        vector<int>sv(26);
        vector<int>ans;
        for(int i=s.size()-1;i>=0;i--)
        {
            sv[s[i]-'a']++;
            if(s.size()-i>p.size())
                sv[s[i+p.size()]-'a']--;
            
            if(sv==pv)
                ans.push_back(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};