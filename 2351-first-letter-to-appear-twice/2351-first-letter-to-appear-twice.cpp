class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int>v(26,-1);
        for(auto i:s)
        {
            int t=i-'a';
            if(v[t]!=-1)return i;
            v[t]=0;
        }
        return 'a';
    }
};