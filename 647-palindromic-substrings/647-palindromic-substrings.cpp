class Solution {
public:
    int countSubstrings(string s) {
                int I=0,J=0;
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            int a=i,b=i;
            while(a>=0&&b<s.size())
            {
                if(s[a]!=s[b])
                    break;               
                ans++;
                a=a-1;
                b=b+1;
            }
            
            a=i;
            b=i+1;
            while(a>=0&&b<s.size())
            {
                if(s[a]!=s[b])
                    break;                
                ans++;
                a=a-1;
                b=b+1;
            }
            
        }
        return ans;
    }
};