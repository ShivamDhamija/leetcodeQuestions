class Solution {
public:
    int call(string &s,string &p,vector<vector<int>>&v,int i,int j)
    {
        if(j<0)return i<0;
        if(i<0){
            while(j >= 0){
                if(p[j] == '*') j -= 2;
                else return 0;
            }
            return 1;
        }
        if(v[i][j]!=-1)return v[i][j];
        
        if(p[j]=='.')
            v[i][j] =call(s,p,v,i-1,j-1);
        else if(p[j]==s[i])
            v[i][j]= call(s,p,v,i-1,j-1);
        else if(p[j]=='*'&&j>0)
        {
           if(p[j-1]==s[i]||p[j-1]=='.')
            v[i][j] =call(s,p,v,i-1,j)||call(s,p,v,i,j-2);
            else
            v[i][j] =call(s,p,v,i,j-2);
        }
        else
            v[i][j]=0;
        return v[i][j];
    }
    bool isMatch(string s, string p) {
        vector<vector<int>>v(s.size(),vector<int>(p.size(),-1));
        return call(s,p,v,s.size()-1,p.size()-1);
    }
};