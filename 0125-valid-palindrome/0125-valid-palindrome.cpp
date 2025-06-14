class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(auto i:s)if(i>='a'&&i<='z')a.push_back(i);else if(i>='A'&&i<='Z')a.push_back(i-'A'+'a'); else if(i>='0'&&i<='9')a.push_back(i);
        for(int i=0,j=a.size()-1;i<a.size()/2;i++,j--)if(a[i]!=a[j])return false;
        return true;
    }
};