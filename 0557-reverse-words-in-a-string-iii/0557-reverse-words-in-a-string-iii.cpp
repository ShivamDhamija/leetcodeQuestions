class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string a="",c="";
        for(auto i:s){
            if(i==' '){
                reverse(c.begin(),c.end());
                a+=c+" ";
                c="";
            }else c.push_back(i);
        }
        a.pop_back();
        return a;
    }
};