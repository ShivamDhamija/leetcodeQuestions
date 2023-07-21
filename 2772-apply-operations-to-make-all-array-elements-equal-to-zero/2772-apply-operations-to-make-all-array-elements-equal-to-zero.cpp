class Solution {
public:
    bool checkArray(vector<int>& n, int k) {
     
        int c=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]<c)
                return false;
            n[i]-=c;
            c+=n[i];
            if(i>=k-1)
                c-=n[i-k+1];
        }
        return c==0;
    }
};