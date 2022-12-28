class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>st(26);
        vector<int>curr(26);
        unordered_set<char>set1;
        vector<int>ans;
        int j=0;
        for(int i=0;i<s.size();i++)st[s[i]-'a']++;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            curr[c-'a']++;
            if(curr[c-'a']==st[c-'a'])
                set1.erase(c);
            else
                set1.insert(c);
            if(set1.size()==0)
            {
                ans.push_back(i-j+1);
                j=i+1;
            }
        }
        
        return ans;
    }
};