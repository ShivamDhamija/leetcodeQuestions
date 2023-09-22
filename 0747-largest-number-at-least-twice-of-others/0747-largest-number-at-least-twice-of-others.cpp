class Solution {
public:
    int dominantIndex(vector<int>& n) {
        int I=0;
        for(int i=1;i<n.size();i++)
        {
            if(n[i]>n[I])
                I=i;
        }
        for(int i=0;i<n.size();i++)
        {
            if(i==I)continue;
            if(n[I]<2*n[i])return -1;
        }
        return I;
    }
};