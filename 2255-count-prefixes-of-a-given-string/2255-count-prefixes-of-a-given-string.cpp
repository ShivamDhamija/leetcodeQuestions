class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        unordered_map<string,int>m;
        for(auto i:w)m[i]++;
        string c="";
        int a=0;
        for(auto i:s)
        {
            c.push_back(i);
            a+=m[c];
        }
        return a;
    }
};