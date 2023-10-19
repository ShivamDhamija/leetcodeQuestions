class Solution {
public:
    string largestOddNumber(string n) {
        int i=n.size()-1;
        for(i;i>=0;i--)
            if((n[i]-'0')&1!=0)break;
        string s="";
        for(int j=0;j<=i;j++)s.push_back(n[j]);
        return s;
    }
};