class Solution {
public:
    bool isValid(string s) {
     stack<char>c;
        for(long long i=0;i<s.size();i++)
        {
            if(s[i]=='c')
            {
                if(c.size()<2)
                    return false;
                char c1=c.top();
                c.pop();
                char c2=c.top();
                c.pop();
                if(c1!='b'||c2!='a')
                    return false;
            }
            else
                c.push(s[i]);
        }
        return c.empty();
    }
};