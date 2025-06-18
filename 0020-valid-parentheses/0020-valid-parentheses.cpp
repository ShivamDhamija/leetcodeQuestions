class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(auto i:s){
            if(st.size()>0 && ((i=='}'&&st.top()=='{') ||
                (i==')'&&st.top()=='(' )||
                (i==']'&&st.top()=='[' )))st.pop();
            else if(st.size()==0 ||i=='('||i=='{'||i=='[')st.push(i);
            else return false;
            }
        return st.size()==0? true:false;
    }
};