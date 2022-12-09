class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        unordered_set<string>s;
        for(int i=0;i<w.size();i++)
        {
            string c="";
            for(int j=i;j<w.size();j++)
            {
                c.push_back(w[j]);
                s.insert(c);
            }
        }
        int ans=0;
        for(auto i:p)
            if(s.find(i)!=s.end())
                ans++;
        return ans;
    }
};