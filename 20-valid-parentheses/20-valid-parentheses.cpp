class Solution {
public:
    bool isValid(string s) {
        stack <char>c;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                c.push(s[i]);
            if(s[i]=='}')
            {
                if(c.size()==0||c.top()!='{')return false;
                     c.pop();       
            }
            if(s[i]==']')
            {
                if(c.size()==0||c.top()!='[')return false;
                     c.pop();
            }
            if(s[i]==')')
            {
                if(c.size()==0||c.top()!='(')return false;
                     c.pop();
            }
        }
        return c.empty();
    }
};