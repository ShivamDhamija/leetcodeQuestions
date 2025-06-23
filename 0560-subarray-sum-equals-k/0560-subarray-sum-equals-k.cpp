class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        int a=0,s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
            if(m.find(s-k)!=m.end())
            a+=m[s-k];
            a+= s==k?1:0;
            m[s]++;
        } 
        return a;
    }
};