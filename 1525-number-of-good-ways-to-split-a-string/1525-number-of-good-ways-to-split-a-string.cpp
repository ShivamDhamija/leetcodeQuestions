class Solution {
public:
    int numSplits(string s) {
        // vector<unordered_set<char>>right(s.length(),unordered_set<char>);
        // vector<unordered_set<char>>left(s.length(),unordered_set<char>);
        unordered_map<char,int>left;
        unordered_map<char,int>right;
        int ans=0;
        for(int i=0;i<s.size();i++)
            right[s[i]]++;
        for(int i=0;i<s.size();i++)
        {
            left[s[i]]++;
            right[s[i]]--;
            if(right[s[i]]==0)
                right.erase(s[i]);
           
            if(right.size()==left.size())
                ans++;
        }
        return ans;
    }
};