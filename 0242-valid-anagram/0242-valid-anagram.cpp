class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>m1(26);
        vector<int>m2(26);
        for(auto i:s)m1[i-'a']++;
        for(auto i:t)m2[i-'a']++;
        for(int i=0;i<26;i++)
        {
            m2[i]-=m1[i];
            m1[i]=0;
        }
        for(int i=0;i<26;i++)if(m2[i]!=0)return 0;
        return 1;
    }
};