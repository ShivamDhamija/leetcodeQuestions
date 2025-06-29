class Solution {
public:
    void help(vector<vector<int>>&a,vector<int>&c,vector<int>&v, int &t,int s,int i){
        if(s==t){
            a.push_back(v);
            return ;
        }
        if(i==c.size()||s>t)return ;
        help(a,c,v,t,s,i+1);
        s+=c[i];
        v.push_back(c[i]);
        help(a,c,v,t,s,i);
        v.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>a;
        vector<int>v;
        help(a,candidates,v,target,0,0);
        return a;
    }
};