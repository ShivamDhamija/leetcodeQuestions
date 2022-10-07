class Solution {
public:
    bool c1(int i,string s)
    {
        //cout<<"sd"<<endl;
        if(s[i]-'0'>=1&&s[i]-'0'<=9)
            return true;
        return false;
    }
    bool c2(int i,string s)
    {//cout<<"1sd"<<endl;
        
        int v=(s[i-1]-'0')*10+s[i]-'0';
         if(v>9&&v<27)
            return true;
        return false;
    }
    
    int numDecodings(string s) {
        int a=1,b=1,c=1;
        if(s.size()==0||s[0]=='0')return 0;
        if(s.size()==1)return 1;
        for(int i=1;i<s.size();i++)
        {
            c=0;
            if(c1(i,s))
                c=a;
            if(c2(i,s))
                c+=b;
            b=a;
            a=c;
            
        }
        return a;
    }
};