class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int>v(26);
        for(auto i:s)
            v[i-'a']++;
        int a=0;
        for(int i=0;i<26;i++)if(v[i]>0)a++;
        return a;
    }
};