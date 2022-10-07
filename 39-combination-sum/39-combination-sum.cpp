class Solution {
public:
    void call(vector<vector<int>>&v,vector<int>&s,vector<int>&c,int t,int i){
        
        if(t<=0)
        {
            if(t==0)
            v.push_back(s);
            return ;
        }
        if(i==c.size())
            return;
        s.push_back(c[i]);
        call(v,s,c,t-c[i],i);
        s.pop_back();
        call(v,s,c,t,i+1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>> v;
        vector<int>s;
        int i=0;
        call(v,s,c,t,i);
        return v;
    }
};