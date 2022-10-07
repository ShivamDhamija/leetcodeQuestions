#include<stack>
class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string>st;
        string a="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
         {   st.push(a);a="";}
        else
            a+=s[i];
    }
        st.push(a);        
        a="";
            while(a.size()==0){
        a=st.top();st.pop();}
        return a.length();
    }
};