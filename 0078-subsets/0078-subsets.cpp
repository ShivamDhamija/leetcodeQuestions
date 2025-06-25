class Solution {
public:
    void help(vector<int>& n, vector<vector<int>>&a, vector<int>&s,int i){
        if(i==n.size()){
            a.push_back(s);
            return ;
        }
        s.push_back(n[i]);
        help(n,a,s,i+1);
        s.pop_back();
        help(n,a,s,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>>a;
    vector<int>s;
    help(nums,a,s,0);
    return a;        
    }
};