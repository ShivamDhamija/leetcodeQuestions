class Solution {
public:
    string removeOuterParentheses(string s) {
      queue<char>st;
        int c=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
                st.push(s[i]);
            if(s[i]==')')
                c+=2;
            if(!st.empty()&&(c==st.size()))
            {
                st.pop();
                while(st.size()>1)
                    ans.push_back(st.front()),st.pop();
                st.pop();
                c=0;
            }
            
        }
        return ans;  
    }
};