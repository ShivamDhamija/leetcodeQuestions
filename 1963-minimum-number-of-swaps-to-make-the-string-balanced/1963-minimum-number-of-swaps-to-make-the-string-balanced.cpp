class Solution {
public:
    int minSwaps(string s) {
        int si=0;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
                si++;
            else if(si>0)
                si--;
        }
        
        return (si+1)/2;
    }
};