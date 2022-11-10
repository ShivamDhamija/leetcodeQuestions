class Solution {
public:
    int findTheWinner(int n, int k) {
        int count=0,i =0;;
        vector<int>v(n);
        
        while(count<n-1)
        {
           int no=0;
            while(no<=k)
            {
                if(v[i]==0)
                    {no++;}
                if(no==k)
                    break;
                    i=(i+1)%n;
            }
            v[i]=1;
            count++;
        }
        for(int i=0;i<n;i++)
            if(v[i]==0)
                return i+1;
        return 0;
    }
};