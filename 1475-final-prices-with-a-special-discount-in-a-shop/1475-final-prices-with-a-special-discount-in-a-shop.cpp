class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        stack<int>st;
        vector<int>v(p.size());
        
        for(int i=0;i<p.size();i++)
        {
            while(!st.empty()&&p[st.top()]>=p[i])
            {
                v[st.top()]=p[i];
                st.pop();
            }
            st.push(i);
        }
        
        for(int i=0;i<p.size();i++)
        p[i]-=v[i];
        return p;
    }
};