class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        int i;
        //cout<<s2<<" "<<s1;
        for(i=0;i<s2.size();i++)
            if(s1[i]>s2[i])break;
        if(i==s2.size())return 1;
        
        for(i=0;i<s2.size();i++)
            if(s2[i]>s1[i])break;
        if(i==s2.size())return 1;
        return 0;
    }
};