class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<long long>st;
        
        for(auto i:t)
        {
            if(i=="+")
            {
                int a=st.top();st.pop();
                st.top()+=a;
            }
            else if(i=="-")
            {
                int a=st.top();st.pop();
                st.top()-=a;
            }
            else if(i=="*")
            {
                int a=st.top();st.pop();
                st.top()*=a;
            }
            else if(i=="/")
            {
                int a=st.top();st.pop();
                st.top()/=a;
            }
            else
            {
                st.push(stoi(i));
            } 
        }
        
        
        
        return st.top();
    }
};