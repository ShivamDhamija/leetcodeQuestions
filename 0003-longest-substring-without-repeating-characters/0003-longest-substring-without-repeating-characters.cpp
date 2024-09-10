class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>v(256,-1);
        int a=0,mi=-1,c=0;
        for(int i=0;i<s.size();i++){
            if(v[s[i]]==-1||v[s[i]]<mi){
                c++;
                a=max(a,c);
            }else{
                mi=v[s[i]]+1;
                c=i-v[s[i]];
            }
            v[s[i]]=i;
        }
        return a;
    }
};