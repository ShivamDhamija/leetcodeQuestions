class Solution {
public:
    
    int v(string s,int a,int n)
    {
        int no=0;
        for( int i=a;i<=n;i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            no++;
            }
        return no;
    }
    int c(char s)
    {
        if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
            return 1;
        else
        return 0;
    }
    int maxVowels(string s, int k) {
        if(s.size()==0)
            return 0;
        int no,ma;
        if(s.size()<=k)
            return v(s,0,s.size()-1);
        else
            no=v(s,0,k-1);
        ma=no;
        for(int i=k;i<s.size();i++)
        {
            if(c(s[i-k])&&no>0)
                no--;
            if(c(s[i]))
                no++;
            ma=max(ma,no);
        }
        return ma;
    }
};