class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int a=0,p=-1;
        for(int i=0;i<s.size();i++){
            if(v[s[i]]==-1)a=max(a,i-p);
            else a=max(a,i-(p=max(p,v[s[i]])));
            v[s[i]]=i;
        }
        return a;
    }
};