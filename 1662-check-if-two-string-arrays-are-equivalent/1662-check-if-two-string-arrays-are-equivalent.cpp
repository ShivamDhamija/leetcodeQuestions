class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1="",s2="";
        for(auto i:w1)
            for(auto j:i)s1.push_back(j);
        for(auto i:w2)
            for(auto j:i)s2.push_back(j);
        return s1==s2;
    }
};