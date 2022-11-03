class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        vector<int>ans(s.size());
        int a=0,b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                if(a<=b)
                    a++;
                else
                {
                    b++;
                    ans[i]=1;
                }
            }
            else
                if(a>=b)
                    a--;
                else
                {
                    b--;
                    ans[i]=1;
                }
        }
           // ans[i]=1;
        return ans;
    }
};