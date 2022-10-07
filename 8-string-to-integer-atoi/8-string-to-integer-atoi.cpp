class Solution {
public:
    int myAtoi(string s) {
        long long  ans=0,i=0;
        bool n=false;
        while(s[i]==' ')
            i++;
        s=s.substr(i,s.size());
        if(s[0]=='-')
            n=true;
        if(s[0]=='-'||s[0]=='+')
            s=s.substr(1,s.size());
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>'9'||s[i]<'0')                            
                break;
            
            ans=ans*10+(s[i]-'0');
            if(ans>INT_MAX)
                return n?INT_MIN:INT_MAX;
        }
        if(n)
            ans*=-1;
        if(ans<INT_MIN)return INT_MIN;
        else if(ans>INT_MAX)return INT_MAX;
        return (int)ans;
        
    }
};