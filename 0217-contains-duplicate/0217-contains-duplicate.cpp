class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int>no;
        for(auto i:nums)if(no.find(i)!=no.end())return true;else no.insert(i);
        return false;
    }
};