class Solution {
public:
    bool hasTrailingZeros(vector<int>& n) {
        int r=0;
        for(auto i:n)r+=i%2==0;
        return r>1;
    }
};