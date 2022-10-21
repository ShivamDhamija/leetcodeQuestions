class Solution {
public:
    string removeOccurrences(string s, string p) {
        int n=s.size(),m=p.size();
        stack<char>st;
        
        for(int i=0;i<n;i++)
        {
            st.push(s[i]);
            if(st.size()>=m)
            {
                if(st.top()==p[m-1])
                {
                    int j=m-1;
                    for(j;j>=0;j--)
                    { if(p[j]==st.top())
                            st.pop();
                        else
                        {
                            j++;
                            for(j;j<m;j++)
                                st.push(p[j]);
                            break;
                        }
                    }
                }
            }
        }
        s="";
        while(!st.empty())
        {
            s=st.top()+s;
            st.pop();
        }
        return s;
    }
};