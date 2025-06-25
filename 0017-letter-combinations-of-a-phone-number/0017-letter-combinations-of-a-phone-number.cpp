class Solution {
public:
    void help(vector<vector<char>>&n,vector<string>&a, int i,string &s, string &d){
        if(i==s.size()){
            a.push_back(s);
            return ;
        }
        int k = d[i]-'2';
        for(int j=0;j<3;j++){
            s[i]=n[k][j];
            help(n,a,i+1,s,d);
        }
    }
    vector<string> letterCombinations(string d) {
        vector<string> a;        
        if(d.size()==0)
            return a;
        vector<vector<char>>no;
        no.push_back({'a','b','c'});
        no.push_back({'d','e','f'});
        no.push_back({'g','h','i'});
        no.push_back({'j','k','l'});
        no.push_back({'m','n','o'});
        no.push_back({'p','q','r','s'});
        no.push_back({'t','u','v'});
        no.push_back({'w','x','y','z'});
        string s;
        s.resize(d.size());
        int i=0;
        help(no,a,i,s,d);
        return a;
    }
};