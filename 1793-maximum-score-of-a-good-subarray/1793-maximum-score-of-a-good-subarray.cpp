class Solution {
public:
    int maximumScore(vector<int>& n, int k) {
        int a=n[k],i=k,j=k,m=n[k];
        while(i>0||j<n.size()-1)
        {
            if(i==0)
                j++;
            else if(j==n.size()-1)
                i--;
            else if(n[i-1]<n[j+1])
                j++;
            else i--;
            
            m=min(m,min(n[i],n[j]));
            a=max(a,m*(j-i+1));
        }
        return a;
    }
};