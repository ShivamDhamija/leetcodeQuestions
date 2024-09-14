class Solution {
public:
    vector<int>v;
    bool call(vector<int>&n, int i)
    {
        if(i == (n.size()-1))return v[i]=1;
        if(i>=n.size() || n[i]==0)return 0;
        if(v[i]!=-1)return v[i];
        v[i]=0;
        for(int j=i+1;j<=n[i]+i;j++)
        {
            v[i]+=call(n,j);
            if(v[i])break;
        }return v[i];
    }
    bool canJump(vector<int>& n) {
        v.resize(n.size(),-1);
        return call(n,0);
    }
};