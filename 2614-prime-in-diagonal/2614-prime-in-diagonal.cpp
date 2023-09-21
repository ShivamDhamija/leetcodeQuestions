class Solution {
public:
    bool p(int n)
    {
        if(n<=1)return 0;
        if(n==2||n==3)return 1;
        if(n%2==0||n%3==0)return 0;
        for(int i=5;i*i<=n;i+=6)
            if(n%i==0||n%(i+2)==0)return 0;
    
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& n) {
        int a=0;
        for(int i=0;i<n.size();i++)
        {            
            if(p(n[i][i])==1)
                a=max(a,n[i][i]);
            if(p(n[i][n.size()-i-1])==1)
                a=max(a,n[i][n.size()-i-1]);
        }
        return a;
    }
};