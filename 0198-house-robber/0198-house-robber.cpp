class Solution {
public:
    vector<int>v;
    int call(vector<int>&n,int i)
    {
        if(i>=n.size())return 0;
        if(v[i]!=-1)return v[i];
        
        return v[i]=max(call(n,i+2)+n[i],call(n,i+1));
    }
    int rob(vector<int>& n) {
        v.resize(n.size(),-1);
        return call(n,0);
    }
};