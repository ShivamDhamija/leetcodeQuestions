class Solution {
public:
    bool isValid(string s) {
        stack<char>c;
        for(auto i :s){
            if(i=='(' ||i=='{' ||i=='[' )c.push(i);
            else if(!c.empty() &&i==')'&&c.top()=='(')c.pop();
            else if(!c.empty() &&i=='}'&&c.top()=='{')c.pop();
            else if(!c.empty() &&i==']'&&c.top()=='[')c.pop();
            else return false;
        }
        return c.empty();
    }
};