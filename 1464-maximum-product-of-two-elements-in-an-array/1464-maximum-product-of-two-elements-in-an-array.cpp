class Solution {
public:
    int maxProduct(vector<int>& n) {
        sort(n.begin(),n.end());
        return (n[n.size()-1]-1)*(n[n.size()-2]-1);
    }
};