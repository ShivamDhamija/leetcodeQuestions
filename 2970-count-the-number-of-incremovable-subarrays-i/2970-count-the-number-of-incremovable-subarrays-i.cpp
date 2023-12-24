class Solution {
public:
    int call(vector<int>&n, int i,int j)
    {
        if(i>0&&j<n.size()-1&&n[i-1]>=n[j+1])return 0;
        for(int I=1;I<i;I++)
            if(n[I]<=n[I-1])return 0;
        for(int I=j+2;I<n.size();I++)
            if(n[I]<=n[I-1])return 0;
        return 1;
    }
    int incremovableSubarrayCount(vector<int>& n) {
        int a=0;
        for(int i=0;i<n.size();i++)
            for(int j=i;j<n.size();j++)
            {
                a+=call(n,i,j);
            }
        return a;
    }
};