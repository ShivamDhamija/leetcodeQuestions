class Solution {
public:
    
    string call(string s,int& i)
    {
        if(i==s.size()||s[i]==']')
            return "";
        
            int no=0;
        while(s[i]!='[')
        {
            no=no*10+s[i]-'0';
            i++;
        }
        i++;
        string ans="";
        
        for(;i<s.size()&&s[i]!=']';i++)
        {
            if(s[i]>='0'&&s[i]<='9')
            {
                ans+=call(s,i);
            }
            else
                ans.push_back(s[i]);
        }
        string t=ans;
        while(--no)
        {
            ans+=t;
        }
        return ans;
        
    }
    string decodeString(string s) {
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0'&&s[i]<='9')
                ans+=call(s,i);
            else
                ans.push_back(s[i]);
        }
        return ans;
    }
};