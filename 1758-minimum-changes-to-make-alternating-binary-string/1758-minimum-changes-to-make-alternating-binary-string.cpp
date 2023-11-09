class Solution {
public:
    int c;
    void check(string &s,int i,int j)
    {
        if(i==s.size())return;
        if(s[i]!=(j+'0'))c++;        
        check(s,i+1,1-j);
    }
    int minOperations(string &s) {
        c=0;
        int a=INT_MAX;
        check(s,0,0);
        a=min(a,c);
        c=0;
        check(s,0,1);
        a=min(a,c);
        return a;
    }
};