class Solution {
public:
    vector<vector<int>>mp;
    int call(string &s, int i, int j)
    {        
        if(i>=j)return 0;
        if(mp[i][j]!=-1)return mp[i][j];
        if(s[i]==s[j])return mp[i][j]=call(s,i+1,j-1);
        return mp[i][j]=min(call(s,i+1,j),call(s,i,j-1))+1;
    }
    int minInsertions(string s) {
        mp.resize(s.size(),vector<int>(s.size(),-1));
        return call(s,0,s.size()-1);
    }
};