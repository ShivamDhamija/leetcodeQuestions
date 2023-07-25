class Solution {
public:
    long long maxArrayValue(vector<int>& n) {
        long long a=0;
        for(int i=n.size()-1;i>=0;i--)
            a= n[i]<=a?a+n[i]:n[i];
        return a;
    }
};