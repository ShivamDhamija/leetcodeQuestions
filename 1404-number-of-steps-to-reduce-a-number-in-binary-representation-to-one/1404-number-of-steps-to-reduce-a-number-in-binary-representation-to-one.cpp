class Solution {
public:
    void convert(string &s)
    {
        reverse(s.begin(),s.end());
        string s1="";
        char c=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(c=='1')            
            {
                if(s[i]=='1')
                { c='1';
                s1.push_back('0');
                }else
                {c='0'; 
                s1.push_back('1');}
            }
            else
                s1.push_back(s[i]);
        }
        if(c=='1')
            s1.push_back(c);
        reverse(s1.begin(),s1.end());
        s=s1;
    }
    int numSteps(string s) {
        int count=0;
        
        while(s.size()>1)
        {
            if(s[s.size()-1]=='0')
                s=s.substr(0,s.size()-1);
            else
                convert(s);
            
            count++;
            //cout<<s<<" "<<count<<endl;
        }
        
        return count;
    }
};