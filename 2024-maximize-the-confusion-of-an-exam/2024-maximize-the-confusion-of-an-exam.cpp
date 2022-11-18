class Solution {
public:
    int call(string s,int k,char a,char b)
    {
        int ans=0,count=0,i=0,j=0;
        while(i<=j&&j<s.size())
        {
            if(s[j]==b)
            {
                if(count<k)count++;
                else
                {
                    while(i<=j&&s[i]==a)
                        i++;
                    if(i<j)
                    i++;
                    ans=max(ans,j-i+1);
                }
            }
            ans=max(ans,j-i+1);
            j++;
            
            
        }
        
    return ans;
        
    }
    int maxConsecutiveAnswers(string a, int k) {
        int t=call(a,k,'T','F');
        int f=call(a,k,'F','T');
        return max(t,f);
    }
};