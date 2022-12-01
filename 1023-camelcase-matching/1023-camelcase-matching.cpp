class Solution {
public:
    bool check(string &s,string &p)
    {
        int i=0,j=0;
        
        while(i<s.size()&&j<p.size())
        {
            if(s[i]==p[j])
            {
                i++;j++;
            }
            else if(s[i]>='A'&&s[i]<='Z')return false;
            else
                i++;
        }
        while(i<s.size())
        {
            if(s[i]>='A'&&s[i]<='Z')return false;
            i++;
        }
        return i==s.size()&&j==p.size();
    }
    vector<bool> camelMatch(vector<string>& q, string p) {
        vector<bool>ans;
        for(auto i:q)
            ans.push_back(check(i,p));
        return ans;
    }
};