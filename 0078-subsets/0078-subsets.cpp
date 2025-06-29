class Solution {
public:
    vector<vector<int>>a;
    vector<int>t;
    void help(vector<int>&n,int i){
        if(i==n.size()){
            a.push_back(t);
            return ;
        }
        help(n,i+1);
        t.push_back(n[i]);
        help(n,i+1);
        t.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        help(nums,0);
        return a;
    }
};