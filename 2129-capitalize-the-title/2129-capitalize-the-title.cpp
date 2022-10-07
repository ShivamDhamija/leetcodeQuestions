class Solution {
public:
    string capitalizeTitle(string s) {
       
           int st=0 ,len=0;
                for(int i=0;i<s.size();i++)
                {
                    s[i]=tolower(s[i]);
                    
                    if(s[i]==' '||s[i+1]=='\0')
                    {
                        if(s[i+1]=='\0')
                            len++;
                        if(len>2)
                        s[st]=toupper(s[st]);
                     
                     st=i+1;       
                        len=-1;
                     
                    }
                    
                    len++;
                
            }
                return s;
    }
};