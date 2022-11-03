class Solution {
public:
    vector<string> buildArray(vector<int>& t, int n) {
        vector<string>ans;
        
        int j=0;
        for(int i=1;i<=n;i++)
        {
            if(j==t.size())break;
            if(i<=t[j])
                ans.push_back("Push");
            if(i!=t[j])
                ans.push_back("Pop");
            if(i==t[j])
                j++;
        }
        
        return ans;
    }
};