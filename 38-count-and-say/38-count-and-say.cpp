class Solution {
public:
    string next(string s){
        int l=s.length();
        char c = s[0];
        int i=1,count=1;
        string ans = "";
        
        while(i<l){
            if(s[i] == s[i-1])
                count++;
            else{
                ans += to_string(count)+s[i-1];
                count=1;
            }
            i++;
        }
        return ans += to_string(count)+s[l-1];
        
    }
    string countAndSay(int n) {
        string s="1";
        if(n<2) return s;
        
        int i=2;
        while(i<=n){
            s = next(s);
            i++;
        }
        return s;
    }
};