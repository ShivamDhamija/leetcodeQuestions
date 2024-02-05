class Solution {
public:
    int returnToBoundaryCount(vector<int>& n) {
        int s=0,a=0;
        for(auto i:n)
            s+=i,a+=s==0?1:0;
        return a;
    }
};