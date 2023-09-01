class Solution {
public:
    int c(vector<int>&v,int x)
    {
        int t=0;
        for(int i=0;i<50;i++)
        {if(v[i]>0)
                t+=v[i];
        if(t>=x)
            return i-50;
        }
        return 0;
    }
    
    vector<int> getSubarrayBeauty(vector<int>& n, int k, int x) {
        vector<int>m(50);
        for(int i=0;i<k;i++)
        {
            if(n[i]<0)
                m[n[i]+50]++;
        }
        
        vector<int>ans;
        ans.push_back(c(m,x));
        for(int i=k;i<n.size();i++)
        {
            if(n[i-k]<0)
                m[n[i-k]+50]--;
            if(n[i]<0)
                m[n[i]+50]++;
            ans.push_back(c(m,x));
        }
        return ans;
    }
};