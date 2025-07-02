class Solution {
public:
    void help(vector<vector<int>>&a,vector<int>&n,vector<int> &s, int i){
        if(i==n.size()){
            a.push_back(s);
            return;
        }
        help(a,n,s,i+1);
        s.push_back(n[i]);
        help(a,n,s,i+1);
        s.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>a;
        vector<int>s;
        help(a,nums,s,0);
        return a;
    }
};