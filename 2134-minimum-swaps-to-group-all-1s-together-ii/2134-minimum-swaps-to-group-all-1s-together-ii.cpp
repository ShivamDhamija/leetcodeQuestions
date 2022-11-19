class Solution {
public:
    int minSwaps(vector<int>& n) {
        int no=0,count=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]==1)
                count++;
        }
         vector<int> n2(n.size() * 2);
    for (int i = 0; i < n.size() * 2; i++)
        n2[i] = n[i % n.size()];
        
        for(int i=0;i<count;i++)
        {
            if(n[i]==0)
            {
                no++;
            }
        }
       
         int ans=no;
        for(int i=count;i<n.size()*2;i++)
        {
            if(n[(i-count)%n.size()]==0)
                no--;
            if(n[i%n.size()]==0)
                no++;
            ans=min(ans,no);
        }
        
        return ans;
    }
};









