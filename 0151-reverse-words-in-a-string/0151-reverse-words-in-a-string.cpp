class Solution {
public:
    string reverseWords(string s) {
        string temp="";
        stack<string>q;
        for(auto i:s)
            if(i==' ')
            {q.push(temp);temp="";}
            else
                temp+=i;
        q.push(temp);
        s="";
        while(q.size()>0)
        {
            if(q.top()!="")
            {
                s+=q.top()+" ";
            }q.pop();
        }
        s.pop_back();
        return s;
    }
};