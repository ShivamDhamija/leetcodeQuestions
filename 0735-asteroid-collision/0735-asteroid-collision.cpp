class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        for(auto i:a)
        {
            if(st.empty()||(i>=0))
                st.push(i);
            else if(st.empty()||st.top()<0)
                     st.push(i);
            else
            {
                int d=0;
                while(!st.empty()&&((st.top()>=0&&i<0)||(st.top()<0&&i>=0)))
                {
                    
                    if(abs(i)>abs(st.top()))
                    {
                        st.pop();
                       // st.push(i);
                    }
                    else if(abs(i)<abs(st.top()))
                        {i=st.top();d=1;}
                    else
                    {
                        d=1;
                        st.pop();
                        if(!st.empty())
                        i=st.top();
                    }
                }
                if(d==0)
                    st.push(i);
                 
            }
        }
        
        vector<int>v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};