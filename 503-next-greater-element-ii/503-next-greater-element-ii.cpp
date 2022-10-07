class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        int t=2;
        while(t--)
            for(int i=0;i<nums.size();i++)
                v.push_back(nums[i]);
        vector<int>a(2*nums.size(),-1);
        stack<int>st;
        for(int i=0;i<2*nums.size();i++)
        {
            while(!st.empty()&&v[i]>v[st.top()])
            {
                a[st.top()]=v[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int>v2;
            for(int i=0;i<nums.size();i++)
            {
                v2.push_back(a[i]);
            }
            return v2;
    }
};