class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int f=-1,a=0;
        unordered_map<int,int>m;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])==m.end())a=max(a,i-f);
            else a=max(a,i-(f=max(f,m[s[i]])));
            m[s[i]]=i;
        }
        return a;
    }
};