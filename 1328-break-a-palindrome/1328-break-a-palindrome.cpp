class Solution {
public:
    string breakPalindrome(string p ){
         bool change=0;
        
        for(int i=0;i<p.size()/2;i++)
        {
            if(p[i]>'a')
            {
                p[i]='a';
                change=true;
                break;
            }
        }
        if(!change&&p.size()>1)
        {
          change=1;
            p[p.size()-1]='b';
        }
        return !change?"":p;
    }
};