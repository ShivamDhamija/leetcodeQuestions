class Solution {
public:
    bool check(string &s)
    {
            int si=s.size();
            int mi=si/2;
            for(int i=0;i<mi;i++)
                if(s[i]!=s[si-i-1])
                    return false;
         return true;
    }
    void call(vector<vector<string>> &ans,vector<string>&v,string &s,int i,int &n)
    {
        if(i==n)
        {
            ans.push_back(v);
            return ;
        }
        string t="";
        for(int j=i;j<n;j++)
        {
            t.push_back(s[j]);
            if(check(t))
            {
            v.push_back(t);
            call(ans,v,s,j+1,n);
            v.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string &s) {
        vector<vector<string>> ans;
        vector<string>v;
        int i=0,n=s.size();
        call(ans,v,s,i,n);
        return ans; 
    }
};