class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<int>a;
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')'&&st.empty())
                a.push_back(i);
            else if(s[i]==')'&&!st.empty())
                st.pop();
            else if(s[i]=='(')
                st.push(i);
        }
        while(!st.empty())
        {
            a.push_back(st.top());
            st.pop();
        }
        sort(a.begin(),a.end());
        int j=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(j<a.size()&&a[j]==i)
            {
                j++;
                continue;
            }
            ans.push_back(s[i]);
        }
        return ans;
    }
};