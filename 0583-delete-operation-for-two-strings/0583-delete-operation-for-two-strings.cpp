class Solution {
public:
    vector<vector<int>>v;
    int call(string &w1,string &w2,int i,int j)
    {
        if(i==w1.size()&&j==w2.size())return 0;
        if(i==w1.size())return w2.size()-j;
        if(j==w2.size())return w1.size()-i;
        if(v[i][j]!=-1)
            return v[i][j];
        if(w1[i]==w2[j])
            return v[i][j]=call(w1,w2,i+1,j+1);
        int a=call(w1,w2,i,j+1)+1;
        a=min(a,call(w1,w2,i+1,j)+1);
        
        return v[i][j]=a;
    }
    int minDistance(string w1, string w2) {
        v.resize(w1.size(),vector<int>(w2.size(),-1));
        
        return call(w1,w2,0,0);
    }
};