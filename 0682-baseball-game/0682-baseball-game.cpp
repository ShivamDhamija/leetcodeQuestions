class Solution {
public:
    int calPoints(vector<string>& o) {
        stack<int>st;
        
        for(auto i:o)
        {
            if(i=="C")st.pop();
            else if(i=="D")st.push(st.top()*2);
            else if(i=="+")
            {
                int a=st.top();st.pop();
                int d=st.top()+a;
                st.push(a);st.push(d);
            }
            else st.push(stoi(i));
        }
        
        
        int ans=0;
        while(!st.empty())
            ans+=st.top(),st.pop();
        return ans;
    }
};