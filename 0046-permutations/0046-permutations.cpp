class Solution {
public:
    void help(vector<vector<int>>&a,vector<int>&n, int i){
        if(i==n.size()){
            a.push_back(n);
            return ;
        }
        for(int j=i;j<n.size();j++){
            swap(n[i],n[j]);
            help(a,n,i+1);
            swap(n[i],n[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> a;
        help(a,nums,0);
        return a;
    }
};

