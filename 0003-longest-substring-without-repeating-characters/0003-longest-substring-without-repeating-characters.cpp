class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>v;
        int a=0,p=-1;
        for(int i=0;i<s.size();i++){
            if(v.find(s[i])==v.end())a=max(a,i-p);
            else a=max(a,i-(p=max(p,v[s[i]])));
            v[s[i]]=i;
        }
        return a;
    }
};