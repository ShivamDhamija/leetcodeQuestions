class Solution {
public:
    bool makeStringsEqual(string s, string t) {
        int y=0,n=0;
        for(auto i:s)
            if(i=='0')n++;
        for(auto i:t)
            if(i=='0')y++;
        if(n==y)return 1;
        if(n==s.size()||y==s.size())return 0;
        return 1;
    }
};