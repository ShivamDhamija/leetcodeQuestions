class Solution {
public:
    void call(vector<vector<char>>&no,vector<string> &v,int &i,string &s,string &d){
        int l=d.size();
        if(i==l)
        {
            v.push_back(s);
            return ;
        }
        int ind=d[i]-'2';
        for(int j=0;j<no[ind].size();j++)
        {
            s[i]=no[ind][j];
            i++;
            call(no,v,i,s,d);
            i--;
        }
    }
    vector<string> letterCombinations(string d) {
        vector<string> v;
        int l=d.size();
        if(l==0)
            return v;
        vector<vector<char>>no;
        no.push_back({'a','b','c'});
        no.push_back({'d','e','f'});
        no.push_back({'g','h','i'});
        no.push_back({'j','k','l'});
        no.push_back({'m','n','o'});
        no.push_back({'p','q','r','s'});
        no.push_back({'t','u','v'});
        no.push_back({'w','x','y','z'});
        string s=d;
        int i=0;
        call(no,v,i,s,d);
        return v;
    }
};