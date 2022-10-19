class Solution {
public:
    string defangIPaddr(string a) {
        string s="";
        for(auto i:a)
        {
            if(i=='.')
                s+='[';
            s+=i;
            if(i=='.')
                s+=']';
        }
        return s;
    }
};