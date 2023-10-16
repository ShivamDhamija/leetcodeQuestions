class Solution {
public:
    vector<string> getWordsInLongestSubsequence(int n, vector<string>& w, vector<int>& g) {
        vector<string> a;
        a.push_back(w[0]);
        int j=g[0];
        for(int i=1;i<n;i++)
            if(j!=g[i])
            {
                j=g[i];
                a.push_back(w[i]);
            }
        return a;
    }
};