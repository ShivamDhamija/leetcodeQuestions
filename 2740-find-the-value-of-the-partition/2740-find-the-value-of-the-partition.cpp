class Solution {
public:
    int findValueOfPartition(vector<int>& n) {
        sort(n.begin(),n.end());
        int mi=INT_MAX;
        int a=n[0];
        for(int i=1;i<n.size();i++)
        {
            mi=min(mi,n[i]-a);
            a=n[i];
        }
        return mi;
    }
};