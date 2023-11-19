class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int i=0; 
        for(i;i<s1.size()&&i<s2.size()&&i<s3.size();i++)
        {
            if(s1[i]!=s2[i]||s1[i]!=s3[i])
                break;       
        }
        if(i<1)return -1;
        return (s1.size()+s2.size()+s3.size()-i*3);
        }
};