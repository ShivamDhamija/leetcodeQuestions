class Solution {
public:
    string removeTrailingZeros(string n) {
        int i;
        for( i=n.size()-1;i>=0;i--)
            if(n[i]!='0')break;
        return n.substr(0,i+1);
    }
};