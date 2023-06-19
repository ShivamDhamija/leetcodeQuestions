class Solution {
public:
    int longestSemiRepetitiveSubstring(string s) {
        int l=-1,c=-1,n=0,ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(i!=0&&s[i]==s[i-1])
            {
                if(n==0)
                    n++;
                else
                    c=l;                                                    
                    l=i-1;
            }
            ans=max(ans,i-c);
        }
            return ans;
    }
};