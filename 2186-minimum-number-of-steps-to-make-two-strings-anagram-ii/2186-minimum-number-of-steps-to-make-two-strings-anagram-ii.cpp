class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>a(26);
        vector<int>b(26);
        int ans=0;
        
        for(auto i:s)
            a[i-'a']++;
        for(auto i:t)
            b[i-'a']++;
        
        for(int i=0;i<26;i++)
        {
            int t=abs(a[i]-b[i]);
            ans+=t;
        }
        
        return ans;
    }
};