class Solution {
public:
    int call(unordered_map<int,int>&m,int mi)
    {
        int no=0;
        for(auto i:m)
        {
            int c=i.second/mi,d=i.second%mi;
            if(d&&c+d<mi-1)return INT_MAX;
            no+=c+(d>0);
        }
        return no;
    }
    int minGroupsForValidAssignment(vector<int>& nums) {
        unordered_map<int,int>m;
        for(auto i:nums)
            m[i]++;
        int mi=INT_MAX;
        for(auto i:m)mi=min(mi,i.second);
        for(;call(m,mi+1)==INT_MAX;mi--);
        return call(m,mi+1);
    }
};