class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>n;
        int m=-1,a=0;
        for(int i=0;i<s.size();i++){
            if(n.find(s[i])!=n.end())m=max(m,n[s[i]]);
            a=max(a,i-m);            
            n[s[i]]=i;
        }
        return a;
    }
};