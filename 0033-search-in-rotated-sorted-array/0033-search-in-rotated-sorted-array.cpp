class Solution {
public:
    void find(vector<int>&n, int t, int l, int r, int &a){
        if(l>r)return ;
        int m = (l+r)/2;
        if(n[m]==t){a=m;return ;}
        if(n[m]>=n[l]){
            if(n[l]<=t && t<n[m])find(n,t,l,m-1,a);
            else find(n,t,m+1,r,a);
        }
        else {
            if(t>n[m]&& t<=n[r])find(n,t,m+1,r,a);
            else find(n,t,l,m-1,a);
        }
    }
    int search(vector<int>& nums, int target) {
        int a=-1;
        find(nums,target,0,nums.size()-1,a);
        return a;        
    }
};