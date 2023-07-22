class Solution {
public:
    bool c(char a)
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')return true;
        return false;
    }
    bool C(char a)
    {
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')return true;
        return false;
    }
    string sortVowels(string s) {
        vector<char>v;       
        for(int i=0;i<s.size();i++)
        {
            if(c(s[i])||C(s[i]))
                v.push_back(s[i]);            
        }
        sort(v.begin(),v.end(),greater<char>());
        for(int i=0;i<s.size();i++)
        {
            if(c(s[i])||C(s[i]))
            {
                s[i]=v[v.size()-1];
                v.pop_back();
            }
        }
        return s;
    }
};