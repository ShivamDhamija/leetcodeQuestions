class Solution {
public:
    int maxProductDifference(vector<int>& n) {
        sort(n.begin(),n.end());
        int i=n.size();
        return n[i-1]*n[i-2]-n[0]*n[1];
    }
};