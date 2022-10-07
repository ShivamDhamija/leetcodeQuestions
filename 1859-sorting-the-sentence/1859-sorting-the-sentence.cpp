class Solution {
public:
    string sortSentence(string s) {
        vector<string>v(12);
        
        s+=" ";
        int i=0;
        string t="";
        while(i<s.size())
        { 
            if(s[i]>='1'&&s[i]<='9')
            {
                v[s[i]-'0']=t;
                t="";
                i++;
            }
            else if(s[i]==' ')
            {
                i++;
                continue;
            }
            else{
            t+=s[i];
                i++;
                }
        }
        
        s="";
        for(int i=1;i<=10;i++)
            if(v[i]=="")break;
            else s+=v[i]+" ";
        s.pop_back();
        return s;
    }
};