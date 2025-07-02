class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>d(256,-1);
        int p=-1,a=0;
        for(int i=0;i<s.size();i++){
            if(d[s[i]]==-1)a=max(a,i-p);
            else a=max(a,i-(p=max(p,d[s[i]])));
            d[s[i]]=i;
        }
        return a;
    }
};