class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& w1, vector<string>& w2) {
        string s1="",s2="";
        for(auto i:w1)
            s1+=i;
        for(auto i:w2)
            s2+=i;
        if(s1.size()!=s2.size())return 0;
        for(int i=0,j=0;i<s1.size()&&j<s2.size();i++,j++)
        {
            if(s1[i]!=s2[j])return 0;
        }
        return 1;
    }
};