class Solution {
public:
    int numberOfSubarrays(vector<int>& n, int k) {
        int count=0,ans=0,i=0,j=0;
        deque<int>q;
        while(i<=j&&i<n.size()&&j<=n.size())
        {
            if(j==n.size()||n[j]%2!=0)
            {
                if(count<k)count++;
                
                else if(count==k)
                { 
                   
                    int a=q.front(),b=q.back();
                    q.pop_front();
                    ans+=(a-i+1)*(j-b);
                    i=a+1;
                }
                
                 q.push_back(j);
            }
            j++;
        }
        
        
        
        return ans;
    }
};