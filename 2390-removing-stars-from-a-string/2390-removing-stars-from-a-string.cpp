class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        for(auto i:s)
        if(i=='*'&&!st.empty())
        st.pop();
        else if(i!='*')
        st.push(i);
        s="";
        while(!st.empty())
        {
            s.push_back(st.top());st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};