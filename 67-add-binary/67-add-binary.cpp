class Solution {
public:
    string addBinary(string a, string b) {
       if(a.size()<b.size())
        {
            string t=a;
            a=b;
            b=t;
        }
        while(a.size()>b.size())
        {
            b='0'+b;
        }
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        int c=0;
        int i=0;
        while(i<a.size())
        {
            char c1=a[i];
            char c2=b[i];
            if(c1=='1'&&c2=='1')
            {
                if(c==1)
                    a[i]='1';
                else
                    a[i]='0';
                c=1;
            }
            else if(c==1)
            {
             if(c1=='1'||c2=='1')
                { a[i]='0';c=1;}
             else
                 {a[i]='1';c=0;}
            }
            else if(c1=='1'||c2=='1')
                a[i]='1';
            i++;
        }
        if(c==1)a.push_back('1');
        reverse(a.begin(),a.end());
        return a;
    }
};