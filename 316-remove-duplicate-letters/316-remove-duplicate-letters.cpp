class Solution {
public:
    string removeDuplicateLetters(string s) {
         int fre[26]={0};
    int pre[26]={0};
    for(int i=0;i<s.size();i++)
    {
        fre[s[i]-'a']+=1;
    }
    stack<int>st;
    for(int i=0;i<s.size();i++)
    {
        int ind=s[i]-'a';
        fre[ind]-=1;
        
        if(pre[ind]==1)
            continue;
        
        while(!st.empty()&&(fre[s[st.top()]-'a']>0)&&(s[st.top()]>s[i]))
        {
           pre[s[st.top()]-'a']=0;
            st.pop();
        }
        pre[ind]=1;
        st.push(i);
    }
    string s1="";
    while(!st.empty())
    {
        s1=s[st.top()]+s1;
        st.pop();
    }
    return s1;
    }
};