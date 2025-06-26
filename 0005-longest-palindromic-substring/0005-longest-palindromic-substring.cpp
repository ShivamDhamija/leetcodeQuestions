class Solution {
public:
    string longestPalindrome(string s) {
       vector<vector<int>>v(s.size(),vector<int>(s.size(),1));
        int I=0,J=1;
        for(int i=s.size()-1;i>=0;i--)
        {
            for(int j=i+1;j<s.size();j++)
            {
                v[i][j]=(s[i]==s[j]&&v[i+1][j-1]);
                if(v[i][j])
                {
                    if(J<(j-i+1))
                    {
                        J=j-i+1;
                        I=i;
                    }
                }
                    
            }
        }
        return s.substr(I,J);
    }
};