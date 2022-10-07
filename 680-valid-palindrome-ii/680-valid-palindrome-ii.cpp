class Solution {
public:
    
   int  call(string &s,int i,int j,int cut)
    {
        if(cut>1)return 100;
        if(i>=j)return cut;
        if(s[i]==s[j]) 
            cut= call(s,i+1,j-1,cut);
        else
        {
            cut++;
            cut=min( call(s,i+1,j,cut),call(s,i,j-1,cut));
        }
        return cut;
    }
    bool validPalindrome(string s) {
        int si=s.size()-1;
        int cut=call(s,0,si,0);
        return cut<2?1:0;
    }
};