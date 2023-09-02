class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        int a=0,b=0;
        vector<char>c1;
        vector<char>c2;
        vector<char>c3;
        vector<char>c4;
        c1.push_back(s1[0]);c1.push_back(s1[2]);
        c2.push_back(s2[0]);c2.push_back(s2[2]);
        c3.push_back(s1[1]);c3.push_back(s1[3]);
        c4.push_back(s2[1]);c4.push_back(s2[3]);
        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
        sort(c3.begin(),c3.end());
        sort(c4.begin(),c4.end());
        return c1==c2&&c3==c4;
    }
};