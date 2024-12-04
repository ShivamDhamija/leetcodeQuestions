class Solution {
public:
    int maxProduct(vector<int>& n) {
        int i=n.size();
        sort(n.begin(),n.end());
        return (n[i-1]-1)*(n[i-2]-1);
    }
};