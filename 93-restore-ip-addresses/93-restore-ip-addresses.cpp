class Solution {
public:
    void call(vector<string>&v,stack<string>s,string str,int i,int j,int n)
    {
        if(s.size()==4)
        {
            string st=s.top();
            s.pop();
            while(!s.empty())
            {
                st=st+'.'+s.top();
                s.pop();
            }
            v.push_back(st);
            return;
        }
        if(j<i)return;
        
        if(j-1<n&&j>=0)
        { 
            string c="";
            c.push_back(str[j]);
            s.push(c);
            call(v,s,str,i,j-1,n-3);
            s.pop();
        }
        if(j-2<n&&j>=1)
        {
            
           string c="";
            c.push_back(str[j-1]);
            c.push_back(str[j]);
            s.push(c);
            int c1=stoi(c);
            if(c1>9)
            call(v,s,str,i,j-2,n-3);
            s.pop(); 
        }
        if(j-3<n&&j>=2)
        { 
           string c="";
            c.push_back(str[j-2]);
            c.push_back(str[j-1]);
            c.push_back(str[j]);
            int c1=stoi(c);
           if(c1>99&&c1<=255)
           {s.push(c);
            call(v,s,str,i,j-3,n-3);
            s.pop(); }
        }
    }
    vector<string> restoreIpAddresses(string str) {
        vector<string>v;
        stack <string>s;
        call(v,s,str,0,str.size()-1,9);
        return v;
    }
};