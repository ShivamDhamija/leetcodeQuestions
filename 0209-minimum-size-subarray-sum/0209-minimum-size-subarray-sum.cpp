class Solution {
public:
    int minSubArrayLen(int t, vector<int>& n) {
        int ans=INT_MAX,i=0,j=0,count=0;
        
        for(j;j<n.size();j++)
        {
            if(count<t)
                count+=n[j];
            while(count>=t)
            {
                ans=min(ans,j-i+1);
                count-=n[i];
                i++;
            }
        }
        
        return ans==INT_MAX?0:ans;
    }
};