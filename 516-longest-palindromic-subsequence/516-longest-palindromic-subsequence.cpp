class Solution {
public:
    // int call(string s,vector<vector<int>>&v,int i,int j)
    // {
    //     if(i>j||i>=s.size()||j<0)return 0;
    //     if(i==j)return 1;
    //     if(v[i][j]==-1)
    //     {
    //         if(s[i]==s[j])
    //             v[i][j]=2+call(s,v,i+1,j-1);
    //         else
    //             v[i][j]=max(call(s,v,i+1,j),call(s,v,i,j-1));
    //     }
    //     return v[i][j];
    // }
    int longestPalindromeSubseq(string s) {
        // vector<vector<int>>v(s.size(),vector<int>(s.size(),-1));
        // return call(s,v,0,s.size()-1);
        
        vector<vector<int>>v(s.size(),vector<int>(s.size()));
        for(int i=0;i<s.size();i++)
            v[i][i]=1;
        for(int i=s.size();i>=0;i--)
        {
            for(int j=i+1;j<s.size();j++)
            {
                if(s[i]==s[j])
                    v[i][j]=2+v[i+1][j-1];
                else
                    v[i][j]=max(v[i+1][j],v[i][j-1]);
            }
        }
        return v[0][s.size()-1];
    }
};