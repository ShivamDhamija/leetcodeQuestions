class Solution {
public:
    bool checkStrings(string s1, string s2) {
        vector<char>c1;
        vector<char>c2;
        vector<char>c3;
        vector<char>c4;
        for(int i=0;i<s1.size();i+=2)
        c1.push_back(s1[i]);
        for(int i=0;i<s1.size();i+=2)
        c2.push_back(s2[i]);
        for(int i=1;i<s1.size();i+=2)
        c3.push_back(s1[i]);
        for(int i=1;i<s1.size();i+=2)
        c4.push_back(s2[i]);
        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
        sort(c3.begin(),c3.end());
        sort(c4.begin(),c4.end());
        return c1==c2&&c3==c4;
    }
};