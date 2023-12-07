class Solution {
public:
    string makeFancyString(string s) {
        string a="";
        for(int i=0;i<2&&i<s.size();i++)a.push_back(s[i]);
        
        for(int i=2;i<s.size();i++)
        {
            if(s[i]==s[i-1]&&s[i]==s[i-2])continue;
                a.push_back(s[i]);
        }
            
        return a;
    }
};