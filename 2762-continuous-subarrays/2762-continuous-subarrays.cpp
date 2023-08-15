class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
            
            
            int l = 0, r = 0,j = 0;
            
            long long ans = 0;
            ans = ans + 1;
            l = nums[0] - 2; 
            r = nums[0] + 2; 
            for(int i = 1;i<nums.size();i++){
                    
                    if(nums[i] >= l && nums[i] <= r){
                                    l = max(l,nums[i]-2);
                                    r = min(r,nums[i]+2);
                                    ans = ans + (i-j+1);                                     
                    }else{ 
                                  
                                   j = i-1;
                                   l = nums[i] - 2 , r = nums[i] + 2;  
                        while(nums[j]  >= nums[i] - 2 && nums[j] <= nums[i] + 2){
                                           
                                           l = max(l,nums[j] - 2); 
                                           r = min(r,nums[j] + 2); 
                                           j--;                                           
                                   }
                                   j++;                                     
                                  
                                   ans = ans + (i-j+1); 
                            
                    }
            }
            
            
            
            
            return ans;
        
    }
};