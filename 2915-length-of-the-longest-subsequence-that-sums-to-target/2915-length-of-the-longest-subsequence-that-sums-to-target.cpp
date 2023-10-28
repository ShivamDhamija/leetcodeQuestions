class Solution {
public:
    vector<vector<int>>v;
    int call(vector<int>&n,int i,int t)
    {       
        if(t==0)return 0;
        if(i==n.size()||t<0)
            return INT_MIN;
         if(v[i][t]!=-1)return v[i][t];
        
        int g=1+call(n,i+1,t-n[i]);
        g=max(g,call(n,i+1,t));
        return v[i][t]=g;
        //return g;
    }
    int lengthOfLongestSubsequence(vector<int>& n, int t) {
        v.resize(n.size(),vector<int>(t+1,-1));
        int a=call(n,0,t);
        return a<0?-1:a;
    }
};