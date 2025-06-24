class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        int a,b,c;
        for(auto i:tokens){
            if(i=="+"){
                a=s.top();s.pop();
                b=s.top();s.pop();
                c=a+b;
                s.push(c);
            }else if(i=="-"){
                a=s.top();s.pop();
                b=s.top();s.pop();
                c=b-a;
                s.push(c);
            }else if(i=="*"){
                a=s.top();s.pop();
                b=s.top();s.pop();
                c=a*b;
                s.push(c);
            }else if(i=="/"){
                a=s.top();s.pop();
                b=s.top();s.pop();
                c=b/a;
                s.push(c);
            }else
            s.push(stoi(i));
        }
        return s.top();
    }
};