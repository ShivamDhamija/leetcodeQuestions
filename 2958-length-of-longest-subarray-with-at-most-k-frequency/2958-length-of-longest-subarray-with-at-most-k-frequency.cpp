class Solution {
public:
    int maxSubarrayLength(vector<int>& n, int k) {
        unordered_map<int,int>m;
        int i=0,j=0,a=0;
        while(j<n.size())
        {
            int t=n[j];
            m[t]++;
            
            while(m[t]>k)
            {
                m[n[i]]--;
                i++;
            }
            a=max(a,j-i+1);
            j++;
        }
        return a;
    }
};