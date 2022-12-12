class Solution {
public:
    vector<vector<int>>v;
    int call(string &s1,string &s2,int i,int j)
    {
        if(i==s1.size()&&j==s2.size())
            return 0;
        if(v[i][j]!=-1)return v[i][j];
        if(i==s1.size())
        {
            int r=0;
            for(;j<s2.size();j++)
                r+=s2[j];
            return r;
        }
        if(j==s2.size())
        {
            int r=0;
            for(;i<s1.size();i++)
                r+=s1[i];
            return r;
        }
        if(s1[i]==s2[j])
            return call(s1,s2,i+1,j+1);
        int mi=call(s1,s2,i+1,j)+s1[i];
        mi=min(mi,call(s1,s2,i,j+1)+s2[j]);
        return v[i][j]=mi;
        
    }
    int minimumDeleteSum(string s1, string s2) {
        v.resize(s1.size()+1,vector<int>(s2.size()+1,-1));
        return call(s1,s2,0,0);
    }
};