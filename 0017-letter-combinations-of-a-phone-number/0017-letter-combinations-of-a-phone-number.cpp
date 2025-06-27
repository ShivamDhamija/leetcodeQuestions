class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>a;
        if(digits.size()==0)return a;
        vector<vector<char>>v;
        v.push_back({'a','b','c'});
        v.push_back({'d','e','f'});
        v.push_back({'g','h','i'});
        v.push_back({'j','k','l'});
        v.push_back({'m','n','o'});
        v.push_back({'p','q','r','s'});
        v.push_back({'t','u','v'});
        v.push_back({'w','x','y','z'});      
        a.push_back("");
        for(auto i:digits){
            int j=i-'2';
            vector<string>t;
            for(string k : a){
                for(char l :v[j]){
                    string st=k;
                    st.push_back(l);
                    t.push_back(st);
                }
            }
            a=t;
        }
        return a;
    }
};