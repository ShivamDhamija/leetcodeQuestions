class Solution {
public:
    int longestSubarray(vector<int>& n) {
        int ans=0;
        int count=0,z=0;
        int i=0,j=0;
        
        while(i<=j&&j<n.size()&&i<n.size())
        {
            if(n[j]==0&&z==0)
                {j++;z=1;continue;}
            else if(n[j]==0) 
            {
                while(i<=j&&n[i]!=0)
                {
                    i++;
                    count--;
                }
                
                i++;
                j++;
                continue;
            }
                j++;
            count++;
            ans=max(ans,count);
        }
            
        if(ans==n.size())
            ans--;
        return ans;
    }
};