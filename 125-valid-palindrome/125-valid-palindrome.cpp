#include<bits/stdc++.h>
class Solution {
public:
    bool isPalindrome(string s) {
        string s1="",s2="";
        for(int i=0;i<s.size();i++)
        {
            if(tolower(s[i])>='a'&&tolower(s[i])<='z'||s[i]>='0'&&s[i]<='9')
                s1+=tolower(s[i]);
        }
        for(int i=s1.size()-1;i>=0;i-- )
            s2+=s1[i];
        return (s1==s2);
    }
};