class Solution {
public:
    int minDeletionSize(vector<string>& s) {
        int ans=0;
        for(int j=0;j<s[0].size();j++)
        {
            char c=s[0][j];
            for(int i=1;i<s.size();i++)
            {
                if(c>s[i][j])
                {
                    ans++;
                    break;
                }
                c=s[i][j];
            }
        }
        return ans;
    }
};