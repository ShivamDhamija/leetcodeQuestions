class Solution {
public:
    string simplifyPath(string path) {
        stack <string>st;
        for(int i=0;i<path.size();i++)
        {
            if(path[i]!='/')
            {
                string s="";
                while(i<path.size()&&path[i]!='/')
                {
                    s.push_back(path[i]);
                    i++;
                }
                if(s==".")
                    continue;
                else if(s=="..")
                {if(!st.empty())
                    st.pop();
                }else  
                    st.push(s);
            }
        }
        string c="";
        while(!st.empty())
        {
            c='/'+st.top()+c;
            st.pop();
        }
        if(c=="")
            c="/";
    return c;
    }
};