class Solution {
public:
    int buyChoco(vector<int>& p, int m) {
        sort(p.begin(),p.end());
        int n=m;
        n=n-p[0]-p[1];
        return n>=0?n:m;
    }
};