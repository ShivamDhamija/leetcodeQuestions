class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int a=0,s=0;
        unordered_map<int,int>m;
        for(auto i:nums){
            s+=i;
            if(s==k)a++;
            if(m.find(s-k)!=m.end())a+=m[s-k];
            m[s]++;
        }
        return a;
    }
};