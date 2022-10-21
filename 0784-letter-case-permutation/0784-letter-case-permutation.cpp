class Solution {
public:
    vector<string>ans;
    void call(string s,int i)
    {
        if(i==s.size())
        {
            ans.push_back(s);
            return ;
        }
        int  c;
        if(s[i]>='0'&&s[i]<='9')
            call(s,i+1);
        else
        {
            if(s[i]>='A'&&s[i]<='Z')
                c=s[i]-'A';
            else
                c=s[i]-'a';
            s[i]='a'+c;
            call(s,i+1);
            s[i]='A'+c;
            call(s,i+1);
        }
    }
    vector<string> letterCasePermutation(string s) {
        call(s,0);
        return ans;
    }
};