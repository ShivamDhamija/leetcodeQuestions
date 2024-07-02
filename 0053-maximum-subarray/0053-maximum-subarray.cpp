class Solution {
public:
    int maxSubArray(vector<int>& n) {
        int ma=INT_MIN,c=0;
        for(auto i:n)
            c+=i,ma=max(ma,c),c=c>=0?c:0;
        return ma;
    }
};