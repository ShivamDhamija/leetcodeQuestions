class Solution {
public:
    int compress(vector<char>& c) {
        char a=c[0];
        c.push_back('3');
        int n=1,I=0;
        
        for(int i=1;i<c.size();i++)
        {
            if(c[i]!=a)
            {
                c[I]=a;I++;
                if(n!=1)
                {
                    stack<int>s;
                    while(n)
                    {
                        s.push('0'+n%10);
                        n=n/10;
                    }
                    while(s.size()>0)
                    {
                        c[I]=s.top();s.pop();I++;
                    }
                }
                n=1;
                a=c[i];
            }
            else
                n++;
        }
        return I;
    }
};