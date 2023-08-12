class Solution {
public:
    int kItemsWithMaximumSum(int o, int z, int n, int k) {
        if(o+z>=k)
            return o>=k?k:o;
        return o-(k-(o+z));
    }
};