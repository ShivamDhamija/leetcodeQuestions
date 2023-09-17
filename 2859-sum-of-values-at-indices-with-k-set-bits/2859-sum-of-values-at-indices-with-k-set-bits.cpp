class Solution {
public:
    int c(int i)
    {
        int s=0;
        while(i)
        {
            s+=i&1;
            i=i>>1;
        }
        return s;
    }
    int sumIndicesWithKSetBits(vector<int>& n, int k) {
        int s=0;
        for(int i=0;i<n.size();i++)
        {
            s+=c(i)==k?n[i]:0;
        }
        return s;
    }
};