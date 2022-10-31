class Solution {
public:
    bool find;
    string ans;
    unordered_set<string>s;
    void call(string &t,int i)
    {
        
        if(s.find(t)==s.end())
        {
            ans=t;
            find=true;
            return ;
        }
        if(i==t.size()||find)return ;
        call(t,i+1);
        t[i]='1';
        call(t,i+1);
        t[i]='0';
    }
    string findDifferentBinaryString(vector<string>& n) {
        find=false;
        ans="";
        for(auto i:n)
            s.insert(i);
        string t="";
        for(int i=0;i<n.size();i++)
            t.push_back('0');
        call(t,0);
        return ans;
    }
};