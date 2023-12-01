class Solution {
public:
    bool c(vector<int>&n)
    {
        for(int i=0;i<n.size();i++)
            {if(n[i]!=i)return true;}
        return false;
    }
    int reinitializePermutation(int n) {
        int no=0;
        vector<int>a(n);
        for(int i=0;i<n;i++)a[i]=i;
        
        do{
         vector<int>t(n);
            for(int i=0;i<n;i++)
                if(i%2==0)
                t[i]=a[i/2];
                else
                    t[i]=a[n/2+(i-1)/2];
                
            a=t;
         no++;
        }while(c(a));
        return no;
        
    }
};