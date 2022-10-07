class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len=nums.size();
        vector<vector<int>> res;
        
        if(len<3)
            return res;
        
        sort(nums.begin(),nums.end());
        for(int i = 0; i<len; i++){
            if(i>0 && nums[i]==nums[i-1])
			   
                continue; 
            
            int j= i + 1, k = nums.size() - 1; 
            while(j<k) 
            {    
                if(nums[i] + nums[j] + nums[k] == 0){
                    res.push_back(vector<int>{nums[i],nums[j],nums[k]});
                 
                    while(j<k && nums[j]==nums[j+1]) 
                        j++;
                   
                    while(j<k && nums[k]==nums[k-1]) 
                        k--;
             
                    j++;
                    k--;
                }
                
                else if(nums[i]+nums[j]+nums[k]<0) 
                    j++; 
              
                else
                    k--; 
            }
                
        }
        return res;
    }
};
