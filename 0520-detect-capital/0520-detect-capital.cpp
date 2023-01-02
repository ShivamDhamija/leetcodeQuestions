class Solution {
public:
    bool detectCapitalUse(string w) {
        int b=0;
        for(int j=1;j<w.size();j++)
        {
            char i=w[j];
            if(i>='A'&&i<='Z')
            b++;
        }
        if(b==0)return 1;
        if(b==w.size()-1)return w[0]>='A'&&w[0]<='Z'?1:0;
        return false;
    }
};