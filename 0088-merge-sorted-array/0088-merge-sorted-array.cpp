class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int i=0,j=0;
        while(i<m&&j<n)
            if(n1[i]<=n2[j])
                i++;
            else
            {
                swap(n1[i],n2[j]);
                int t=j;
                while(t<n-1&&n2[t]>n2[t+1])
                {
                    swap(n2[t],n2[t+1]);
                    t++;
                }
            }
        while(j<n)
        {
            n1[i]=n2[j];
            i++;j++;
        }
    }
};