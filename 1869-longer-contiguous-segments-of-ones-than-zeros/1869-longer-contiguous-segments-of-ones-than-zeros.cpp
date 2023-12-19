class Solution {
public:
    bool checkZeroOnes(string s) {
        int o=0,z=0,a=0,b=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                a++;
                b=0;
            }
            else
            {
                b++;
                a=0;
            }
            o=max(o,a);
            z=max(z,b);
        }
        return o>z;
        
    }
};