class Solution {
public:
    string getMinString(string a, string b) {    
        return (a.size() < b.size() || (a.size() == b.size() && a < b) )?a : b;
    }
    
    string addTwoStrings(string &a, string &b){   
        if(b.find(a) != string::npos) return b; 
        if(a.find(b) != string::npos) return a;
        for(int i = 0; i < a.size(); ++i){
            string t1 = a.substr(i), t2 = b.substr(0,  t1.size());
            if(t1 == t2) return a + b.substr(t1.size());
        }
        return a+b;
    }
    
    string solve(string& a, string& b, string& c) {   
        string t1 = addTwoStrings(a, b), t2 = addTwoStrings(b, a);
        string res = getMinString(addTwoStrings(t1, c),addTwoStrings(t2, c) );
        return res;
    }
    
    string minimumString(string a, string b, string c) { 
        string res = getMinString( solve(a, b, c), solve(b, c, a));
        return getMinString( res , solve(c,a,b));
    }
};