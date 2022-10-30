class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int>ans(t.size());
        stack<int>st;
        for(int i=0;i<t.size();i++)
        {
            while(!st.empty()&&t[st.top()]<t[i])
            {
                ans[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        for(int i=0;i<t.size();i++)
            if(ans[i]!=0)
                ans[i]=ans[i]-i;
        return ans;
    }
};