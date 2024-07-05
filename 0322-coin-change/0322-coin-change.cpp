class Solution {
public:
    vector<vector<int>>v;
    int call(vector<int>&c, int a,int i)
    {        
        if(a==0)return 0;
        if(a<0||i==c.size())return INT_MAX-1;
        if(v[i][a]!=-1)return v[i][a];
        return v[i][a]=min(call(c,a,i+1),call(c,a-c[i],i)+1);
    }
    int coinChange(vector<int>& c, int a) {
        v.resize(c.size(),vector<int>(a+1,-1));
        int ans = call(c,a,0);
        return ans==INT_MAX-1?-1:ans;
    }
};