class Solution {
public:
    void help(set<vector<int>>&a,vector<int>&c,vector<int>&v, int &t,int s,int i){
        if(s==t){
            a.insert(v);
            return ;
        }
        if(i==c.size()||s>t)return ;
        help(a,c,v,t,s,i+1);
        s+=c[i];
        v.push_back(c[i]);
        help(a,c,v,t,s,i);
        help(a,c,v,t,s,i+1);
        v.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>a;
        set<vector<int>>s;
        vector<int>v;
        help(s,candidates,v,target,0,0);
        for(auto i:s)a.push_back(i);
        return a;
    }
};