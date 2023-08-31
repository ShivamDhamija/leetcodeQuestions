class Solution {
public:
    vector<int> colorTheArray(int n, vector<vector<int>>& q) {
        vector<int>m(n,0);
        int v=0;
        vector<int>ans;
        
        for(int i=0;i<q.size();i++)
        {
            int a=q[i][0],b=q[i][1];
            int p = a==0?0:(m[a]==m[a-1]&&m[a]!=0?1:0);
            int f = a==n-1?0:(m[a]==m[a+1]&&m[a]!=0?1:0);
            
            m[a]=b;

            if(b!=0&&a!=n-1&&m[a]==m[a+1])
               v++;
            if(b!=0&&a!=0&&m[a]==m[a-1])
               v++;
            if(f==1)
               v--;
            if( p==1 )
               v--;
            ans.push_back(v);
        }
        return ans;
    }
};
 // vector<int> ans, nums(n, 0);
 //        int count = 0;
 //        for(auto q: queries){
 //            int i = q[0], val = q[1], tc = 0;
 //            if(nums[i] && i - 1 >= 0 && nums[i-1] == nums[i]) count--;  
 //            if(nums[i] && i + 1 < n && nums[i+1] == nums[i]) count--;
 //            nums[i] = val;
 //            if( i - 1 >= 0 && nums[i-1] == nums[i]) count++;
 //            if( i + 1 < n && nums[i+1] == nums[i]) count++;
 //            ans.push_back(count);
 //        }
 //        return ans;