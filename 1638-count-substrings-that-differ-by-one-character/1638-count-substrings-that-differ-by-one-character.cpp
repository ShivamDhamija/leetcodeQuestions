class Solution {
public:
    int countSubstrings(string s, string t) {
        int n = s.length(), m = t.length();
        vector<vector<int>> same(n+1,vector<int> (m+1));
        vector<vector<int>> diff(n+1,vector<int> (m+1));
        int ans = 0;
        for(int i =1;i<=n;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    same[i][j] = 1+same[i-1][j-1];
                    diff[i][j] = diff[i-1][j-1];
                }
                else
                {
                    same[i][j] = 0;
                    diff[i][j] = 1+same[i-1][j-1];
                }
                ans+=diff[i][j];
                //cout<<diff[i][j]<<" ";
            } 
            //cout<<endl;
        }
        return ans;
    }
};