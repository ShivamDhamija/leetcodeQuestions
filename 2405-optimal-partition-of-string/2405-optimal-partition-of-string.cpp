class Solution {
public:
    int partitionString(string s) {
        int ans=1;
        vector<int>v(26);
        vector<int>a(26);
        for(int i=0;i<s.size();i++)
        {
            if(v[s[i]-'a']==1)
            {
                ans++;v=a;
            }
            
                v[s[i]-'a']=1;
        }
        return ans;
    }
};