class Solution {
public:
    string finalString(string s) {
        string a="";
        for(auto i:s)
        {
            if(i=='i')
                reverse(a.begin(),a.end());
            else
                a.push_back(i);
        }
            
        return a;
    }
};