class Solution {
public:
    int percentageLetter(string s, char l) {
     int c=0;
        for(auto i:s)
            if(i==l)
                c++;
        return (int)((c*100)/s.size());
    }
};