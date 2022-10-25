class Solution {
public:
    
    vector<vector<int>> call(string s)
    {
        vector<vector<int>>v(2,vector<int>(26));
        
        for(int i=0;i<s.size();i++)
        {
            if(i%2==0)
                v[0][s[i]-'a']++;
            else
                v[1][s[i]-'a']++;
        }
        
        return v;
    }
    int numSpecialEquivGroups(vector<string>& w) {
        set<vector<vector<int>>>s;
        
        for(int i=0;i<w.size();i++)
        {
            s.insert(call(w[i]));
        }
        
        
        return s.size();
    }
};