class Solution {
public:
    int maxDepth(string s) {
        int ans=0,count=0;
      //  stack<int>st;
        
        for(auto i:s)
            if(i=='(')
            {
                count++;
                ans=max(ans,count);
            }
        else if(i==')')
            count--;
        
        return ans;
    }
};