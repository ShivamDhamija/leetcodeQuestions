class Solution {
    public int[] runningSum(int[] nums) {
        int arr[]=new int[nums.length];
        int n=nums.length;
         int sum=0;
        for(int i=0;i<n;i++){                      
            sum+=nums[i];
            arr[i]=sum;
    }
     return arr;
    }
}