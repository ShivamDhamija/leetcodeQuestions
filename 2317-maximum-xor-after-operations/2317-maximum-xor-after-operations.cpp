class Solution {
public:      
    int maximumXOR(vector<int>& nums) {
        int max_XOR=nums[0];
        for(int i=1;i<nums.size();i++){                         //O(n) 
            max_XOR|=nums[i];
        }
        return max_XOR;
    }
};