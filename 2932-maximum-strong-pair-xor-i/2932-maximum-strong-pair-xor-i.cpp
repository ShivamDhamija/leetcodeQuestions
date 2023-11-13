class Solution {
public:
    int maximumStrongPairXor(vector<int>& n) {
        int a=0;
        for(int i=0;i<n.size();i++)
        {
            for(int j=i;j<n.size();j++)
                if(abs(n[i]-n[j])<=min(n[i],n[j]))
                    a=max(a,n[i]^n[j]);
        }
        return a;
    }
};