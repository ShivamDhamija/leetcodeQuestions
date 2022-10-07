class Solution {
public:
    string longestPalindrome(string s) {
//         int I=0,J=0;
        
//         for(int i=0;i<s.size();i++)
//         {
//             int a=i,b=i;
//             while(a>=0&&b<s.size())
//             {
//                 if(s[a]!=s[b])
//                     break;               
//                 if(b-a+1>J)
//                 {
//                     I=a;
//                     J=b-a+1;
//                 }
//                 a=a-1;
//                 b=b+1;
//             }
            
//             a=i;
//             b=i+1;
//             while(a>=0&&b<s.size())
//             {
//                 if(s[a]!=s[b])
//                     break;                
//                 if(b-a+1>J)
//                 {
//                     I=a;
//                     J=b-a+1;
//                 }
//                 a=a-1;
//                 b=b+1;
//             }
            
//         }
//         return s.substr(I,J);
        
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