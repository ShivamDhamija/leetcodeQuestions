class Solution {
public:
    int find(int i)
    {
        
        int ma=0;
        while(i>0)
        {
            if(i%10>=ma)
                ma=i%10;
            i=i/10;
        }
        return ma;
    }
    int maxSum(vector<int>& n) {
        vector<int>l(10);
        vector<int>s(10);
        for(int i=0;i<n.size();i++)
        {
            int r=find(n[i]);
            if(l[r]<=n[i])
            {
                s[r]=l[r];
                l[r]=n[i];
            }
            else if(s[r]<n[i])
                s[r]=n[i];
        }
        int su=0;
        for(int i=0;i<10;i++)
        su=max(su,l[i]==0||s[i]==0?-1:l[i]+s[i]);
        return su==0?-1:su;
    }
};