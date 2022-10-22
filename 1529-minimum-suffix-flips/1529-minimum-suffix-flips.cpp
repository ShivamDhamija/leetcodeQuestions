class Solution {
public:
    int minFlips(string t) {
     int a=0;
        if(t[0]=='1')a++;
        for(int i=1;i<t.size();i++)
            if(t[i]!=t[i-1])a++;
        return a;
    }
};